#include <iostream>
#include <q2.h>

using namespace std;

int main()
{
    cout << "\n\t\t\t Welcome to Q2 Solution" << endl;
    cout<<"****************************************************************";
    cout<<"\n\n Creating Array class object";
    Array *arobj = new Array(new int[10]{66, 22, 88, 44, 55, 66, 22, 88, 44, 55  }, 10);

    cout<<"\n\t Calling display function\n";
    arobj->display();

    cout<<"\n\t Finding 11 in array\n";
    cout<<"\n\t *******************\n";
    Array findResult = arobj->find(11);
    cout<<" finded at index : ";
    findResult.display();

    cout<<"\n\t Finding 55 in array\n";
    cout<<"\n\t *******************\n";
    findResult = arobj->find(55);
    cout<<" finded at index : ";
    findResult.display();


    cout<<"\n\t *******************\n";
    cout<<"\n\t Length of Array is : "<<arobj->length();
    cout<<"\n\t *******************\n";


    cout<<"\n\t Sorting Array\n";
    cout<<"\n\t *******************\n";
    arobj->sort();
    arobj->display();

    cout<<"\n\t Reversing Array\n";
    cout<<"\n\t *******************\n";
    arobj->reverse();
    arobj->display();


    cout<<"\n\t Adding 435 at end Array\n";
    cout<<"\n\t *******************\n";
    arobj->push_back(435);
    cout<<"\n\t Displaying elements of Array\n";
    cout<<"\n\t *******************\n";
    arobj->display();

    cout<<"\n\t Adding 6547 at end Array\n";
    cout<<"\n\t *******************\n";
    arobj->push_back(6547);
    cout<<"\n\t Displaying elements of Array\n";
    cout<<"\n\t *******************\n";
    arobj->display();


    cout<<"\n\t Deleting last element of Array by calling pop_back function\n";
    cout<<"\n\t *******************\n";
    int inn = arobj->pop_back();
    cout<<"\n\t last value "<<inn<<" is deleted";
    cout<<"\n\t *******************\n";
    cout<<"\n\t Displaying elements of Array\n";
    cout<<"\n\t *******************\n";
    arobj->display();

    cout<<"\n\t Erasing Value located at : 6\n";
    cout<<"\n\t *******************\n";
    int eras = arobj->erase(6,55);
    cout<<"\n\t Result of Erasing Element : "<<eras;
    cout<<"\n\t *******************\n";
    cout<<"\n\t Displaying elements of Array\n";
    cout<<"\n\t *******************\n";
    arobj->display();


    cout<<"\n\t *******************\n";
    cout<<"\n\t Length of Array is : "<<arobj->length();
    cout<<"\n\t *******************\n";





    cout<<"\n\t Assigning 12345 at location : 3 \n";
    cout<<"\n\t *******************\n";
    arobj->assign(3, 12345);
    cout<<"\n\t Displaying elements of Array\n";
    cout<<"\n\t *******************\n";
    arobj->display();



    cout<<"\n\t Sorting Array\n";
    cout<<"\n\t *******************\n";
    arobj->sort();
    arobj->display();


    cout<<"\n\t Creating Sub Array from index 3 to 6 \n";
    cout<<"\n\t *******************\n";
    int *subResult = arobj->subArrPointer(3,6);
    cout<<" Sub Array Results  : ";
    for (int jj=0; jj < 4; jj++) {
        cout<<"\n\t Index :  "<<jj<<" value : "<<subResult[jj];
    }








    cout << "\n\n\n\n End of Program " << endl<< endl;
    system("pause");
    return 0;
}
