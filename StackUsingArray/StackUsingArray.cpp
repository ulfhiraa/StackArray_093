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
		cout << element << "\nditambahkan (pushed)" << endl;

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

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}  
		}
	}
};

int main() {
	stackArray obj;
	while (true) {  
		try { 
			cout << endl;
			cout << "\nStack Array" << endl;
			cout << "1. Push" << endl;
			cout << "2. Pop" << endl;
			cout << "3. Display" << endl;
			cout << "4. Exit" << endl;
			cout << "Masukkan Pilihan : ";
			char ch;
			cin >> ch;

			switch (ch) {
			case '1': {
				int data;
				cout << "Masukkan data" << endl;
				cin >> data; 
				obj.push(data);
				break;
			}
			case '2' :
				if (obj.empty()) {
					cout << "\nStack is empty." << endl;
					break;
				}
				obj.pop();
				break;
			case '3' :
				obj.display();
				break;
			case '4' :
				return 0;
			default :
				cout << "\nInvalid Option" << endl;
				break;
			}
		}
		catch (exception& e) {
			cout << "Check for the values entered." << endl;
		} 
	} 
} 
