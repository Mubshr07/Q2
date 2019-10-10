#include "array.h"

#include<iostream>
#include<conio.h>
#include<list>


using namespace std;

Array::Array()
{
    arraylength = 5;
    intPtrArray = new int[arraylength];
    for (int i = 0; i < arraylength; ++i) {
        intPtrArray[i] = 0;
    }
}

Array::Array(int size)
{
    arraylength = size;
    intPtrArray = new int[arraylength];
    for (int i = 0; i < arraylength; ++i) {
        intPtrArray[i] = 0;
    }
}
Array::Array(int *arr, int size)
{
    arraylength = size;
    intPtrArray = new int[arraylength];
    for (int i = 0; i < arraylength; ++i) {
        intPtrArray[i] = arr[i];
    }
}
Array::Array(const Array &)
{
    arraylength = 0;
    //intPtrArray = new int(arr);
}
Array::~Array()
{
    delete [] intPtrArray;
}

//member function
int Array::getAt(int i)
{
    if(i<=arraylength)
    {
        return intPtrArray[i-1];
    }
    return 0;
}

void Array::setAt(int i, int val)
{
    if(i<=arraylength)
    {
        intPtrArray[i-1] = val;
    }
}

Array Array::subArr(int pos, int siz)
{
    int *subptr  = new int[siz];
    for (int i=0, j=pos-1; i<siz; i++, j++) {
        if(j < arraylength)
        {
         subptr[i]= intPtrArray[j];
        }
        else {
           subptr[i] = 0;
        }
    }
    return Array(subptr, siz);
}

Array Array::subArr(int pos)
{

}

int * Array::subArrPointer(int pos, int siz)
{
    int *subptr  = new int[siz];
    for (int i=0, j=pos-1; i<siz; i++, j++) {
        if(j < arraylength)
        {
         subptr[i]= intPtrArray[j];
        }
        else {
           subptr[i] = 0;
        }
    }
    return subptr;
}

int * Array::subArrPointer(int pos)
{
    int siz = arraylength - pos;
    int *subptr  = new int[siz];
    for (int i=0, j=pos-1; i<siz; i++, j++) {
         subptr[i]= intPtrArray[j];
    }
    return subptr;
}

void Array::push_back(int a)
{
    arraylength++;
    intPtrArray[arraylength] = a;
}

int Array::pop_back()
{
    int last = intPtrArray[arraylength];
    arraylength--;
}

int Array::insert(int index, int val)
{
    if(index < arraylength)
    {
        arraylength++;
        for(int i=arraylength; i>index; i--)
        {
            intPtrArray[i]  = intPtrArray[i-1];
        }

        intPtrArray[index] = val;
        return 1;
    }
    else {
        return -1;
    }
}

int Array::erase(int index, int val)
{
    if(index < arraylength)
    {

        for(int i=index; i<arraylength; i++)
        {
            intPtrArray[i - 1]  = intPtrArray[i];
        }
        arraylength--;
        return 1;
    }
    else {
        return -1;
    }
}

void Array::size()
{

}

int Array::length()
{
    return arraylength;
}

void Array::clear()
{
    for(int i=0; i<arraylength; i++)
    {
        intPtrArray[i] = 0;
    }
}

int Array::value(int index)
{
    if(index < arraylength)
    {
        return intPtrArray[index];
    }
    return  0;
}

void Array::assign(int index, int val)
{
    if(index < arraylength)
    {
        intPtrArray[index] = val;
    }
}

void Array::copy(const Array & arr)
{

}

void Array::copy(const int * arr, int siz)
{
    int beforelength = arraylength;
    arraylength +=siz;
    for(int i=beforelength, j=0; i<arraylength; i++, j++)
    {
        intPtrArray[beforelength] = arr[j];
    }

}

void Array::display()
{
    cout<<"\n\n\t Display function of the Array Class\n";
    cout<<"*******************************************************\n";
    cout<<"\t\t Total length  :  "<<arraylength;
    cout<<"\n";
    for (int i=0;i<arraylength;i++) {
        cout<<"\n\t\t"<<(i+1)<< " have value :  "<<intPtrArray[i];
    }
    cout<<"\n\n\n";
    system("pause");
}

bool Array::isEmpty()
{
    if(arraylength == 0)
    {
        return true;
    }
    return false;
}
Array Array::find(int i)
{
    // return the indexes of integer searched in the array
    list<int> farray ;
    for (int index = 0; index<arraylength; index++) {
        if(intPtrArray[index] == i)
        {
            farray.push_back(index);
        }
    }
    int ll = (int) farray.size();

    int * arr = new int[ll];
    int ii=0;
    for (std::list<int>::iterator it = farray.begin(); it != farray.end(); it++)
    {
        arr[ii] = *it;
        ii++;
    }
    return Array(arr, ll);
}

bool Array::equal(Array arr)
{
    if(arraylength != arr.length())     // checking length are same or not
    {
        return false;
    }

    bool bb = true;
    int i = 0;
    while (bb && (i < arraylength)) {
        if(intPtrArray[i] != arr.getAt(i))
        {
            bb = false;
        }
        i++;
    }
    return bb;
}

int Array::sort()
{

}

void Array::reverse()
{

}

