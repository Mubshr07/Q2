## A C++ console App developed in Qt: Solution of this question


# Implementation of Array Class:

> Your goal is to implement a generic "Array" class using cstring. Please also write down the test code to drive your class implementation.
```
  ** * class Array { ** *
	//some private data members
	
	public:
		1.	Array(); //a default constructor
		2.	Array(int size); // a parametrized constructor initializing an array of predefined size
		3.	Array(int *arr, int size); // initializes the array with an existing array
		4. 	Array(const Array &); // copy constructor
		5.	int getAt(int i); //returns the integer at index[i]
		6.	void setAt(int i, int val); //set the value at index[i]
		7.	Array subArr(int pos, int siz); // returns a sub-array of size , size starting from location 'pos'
		8.	Array subArr(int pos, int siz); // returns a sub-array from the given position to the end
		9.	int * subArrPointer(int pos, int siz); // returns an array of size siz starting from location 'pos'
		10.	int * subArrPointer(int pos); // returns an array from the given position to the end
		11.	void push_back(int a); // Adds an element to the end of the array
		12.	int pop_back(); // removes and returns the last element of the array
		13.	int insert(int idx, int val); //inserts the value val at  idx. Returns 1 for a successful insertion and -1 if idx does not exists or is invalid. Shift the elements after idx to the right.
		14.	int erase(int idx, int val); //erase the value val at idx. Return 1 for a succesful deletion and -1 if idx does not exists or is invalid. Shift the elements after idx to the left.
		15.	void size(); 
		16.	int length(); // returns the size of the array
		17.	void clear(); // clears the contents of the array
		18.	int value(int idx); // returns the value at idx
		19.	void assign(int idx, int val);	// assign the value val to the element at index idx
		20.	void copy(const Array& Arr); // copy the passing Array
		21.	void copy(const int * arr, int siz); //copy the passed array
		22.	void display(); // displays the Array
		23.	bool isEmpty(); // returns true if the array is empty
		24.	Array find(int); // returns an Array containing all the indexes of integer being searched
		25.	bool equal(Array); //should return true if both arrays are same.
		26.	int sort(); // sorts the Array. return true if the array is already sorted.
		27.	void reverse(); // reverses the contents of the array
		28.	~Array(); //destructor..
		
	
 ** * } ** *
 ```
