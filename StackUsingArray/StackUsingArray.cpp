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
};