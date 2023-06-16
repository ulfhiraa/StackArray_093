#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	stackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { // step 1
			cout << "Number of data exceed the Limit" << endl;
			return 0;
		}
		 
		top++; // step 2
		stack_array[top] = element;  
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	} 

	void pop() {
		if (empty()) { // step 1
			cout << "\nStack is empty. Cannot Pop." << endl;  // 1.a
			return; // 1.b
		} 
		
		cout << "\nThe popped element is : " << stack_array[top] << endl; // step 2
		top--; // step 3 decrement 
	} 

	//method for check if data is empty
	bool empty() {
		return(top == -1);
	}
};