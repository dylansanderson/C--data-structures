#include<iostream>
//Dylan Sanderson
//  11/12/2017
//Last in, first out stack. Extra credit.

using namespace std;

class STACK {
private:
	int a[5];                //stack is an integer array holding 5 elements
	int counter;

public:
	void clearStack() {
		counter = 0;
	}

	bool fullStack() {
		if (counter == 5)        //checks to see if stack is full
			return true;
		else
			return false;
	}

	bool emptyStack()
	{
		if (counter == 0)
			return true;        //checks to see if stack is empty
		else
			return false;
	}

	void pushStack(int x) {
		a[counter] = x;          // adds element to top of stack, increments counter variable
		counter++;

	}
	
	int popStack() {
		--counter;               // Pops stack. Decrements counter variable.
		return a[counter];

	}
};



int main() {
	STACK obj;              //obj = object of STACK class
	obj.clearStack();

	obj.pushStack(6);
	obj.pushStack(10);
	obj.pushStack(7);

	while (!obj.emptyStack())
	{
		int x = obj.popStack();
		cout << x;
	}
	
	system("PAUSE");
	return 0;
}


