// Duy Nguyen
// Dylan Sanderson
//CPSC 131-07 Project 3.1
#include <iostream>
#include "STACK.h"
using namespace std;

int main()
{
	STACK <int, 10> S;
	S.clearStack();

	cout << "Enter a positive int number: ";
	int num;
	cin >> num;
	int num1 = num;  //create a temp variable to store num into num1
	while (num1 != 0)
	{
		int a = num1 % 2;  //formula for converting to base 2
		S.pushStack(a);
		num1 /= 2;
	}
	cout << num << " at base 2 is ";
	while (!S.emptyStack())
	{
		int b = S.popStack();
		cout << b;
	}
	cout << endl;
	S.clearStack();
	int num2 = num;
	while (num2 != 0)
	{
		int octa = num2 % 8; //formula for converting to base 8
		S.pushStack(octa);
		num2 /= 8;
	}
	cout << num << " at base 8 is ";
	while (!S.emptyStack())
	{
		int b = S.popStack();
		cout << b;
	}
	cout << endl;
	S.clearStack();
	int num3 = num;
	while (num3 != 0)
	{
		int hexa = num3 % 16;
		S.pushStack(hexa);
		num3 /= 16;
	}
	cout << num << " at base 16 is ";
	while (!S.emptyStack())
	{
		int c = S.popStack();
		switch (c)
		{
		case 10:
			cout << "A";       //converting integer to hex. 10 = A
			c = S.popStack();
			break;
		case 11:
			cout << "B";  //converting integer to hex. 11 = B
c = S.popStack();
			break;
		case 12:
			cout << "C";
c = S.popStack();
			break;
		case 13:
			cout << "D";
c = S.popStack();
			break;
		case 14:
			cout << "E";
c = S.popStack();
			break;
		case 15:
			cout << "F";
c = S.popStack();
			break;
		}
		cout << c;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
