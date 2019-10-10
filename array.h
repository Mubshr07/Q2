#ifndef ARRAY_H
#define ARRAY_H


class Array
{
private:
    int *intPtrArray;
    int arraylength = 0;

public:
    Array();
    Array(int size);
    Array(int *arr, int size);
    Array(const Array &);
    ~Array();

    //member function
    int getAt(int i);
    void setAt(int i, int val);
    Array subArr(int pos, int size);
    Array subArr(int pos);
    int *subArrPointer(int pos, int size);
    int *subArrPointer(int pos);
    void push_back(int a);
    int pop_back();
    int insert(int index, int val);
    int erase(int index, int val);
    void size();
    int length();
    void clear();
    int value(int index);
    void assign(int index, int val);
    void copy(const Array & arr);
    void copy(const int * arr, int size);
    void display();
    bool isEmpty();
    Array find(int i); // return the indexes of integer searched in the array
    bool equal(Array arr);
    int sort();
    void reverse();



};

#endif // ARRAY_H
