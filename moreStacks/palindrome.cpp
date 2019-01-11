// Duy Nguyen
// Dylan Sanderson
//CPSC 131-07 Project 4.1

#include <iostream>
#include <string>
#include "STACK.h"

using namespace std;

int main()
{
	STACK <char, 100> ONE;
	STACK <char, 100> TEMP;
	STACK <char, 100> SECOND;
	ONE.clearStack();
	TEMP.clearStack();
	SECOND.clearStack();
	string Phrase;
	char letter;
	do {
		cout << "Enter a Phrase: ";
		getline(cin, Phrase);
		for (int i = 0;i< Phrase.length() ; i++)
		{
			char r = Phrase[i];
			ONE.pushStack(r);
			TEMP.pushStack(r);
		}
		while (!TEMP.emptyStack())
		{
			char c = TEMP.popStack();
			SECOND.pushStack(c);
		}
		while (!SECOND.emptyStack())
		{
			char a = ONE.popStack();
			char d = SECOND.popStack();
			a = toupper(a);
			d = toupper(d);
			if (a == d)
			{
				cout << "This statement is PALINDROME" << endl;
				break;
			}
			if (a != d)
			{
				cout << "This statement is not a PALINDROME" << endl;
				break;
			}
		}
		cout << "CONTINUE (y/n) " ;
		cin >> letter;
		cin.ignore();
	} while (letter == 'y');



	SECOND.clearStack();
	TEMP.clearStack();
	ONE.clearStack();
	system("PAUSE");
	return 0;
 
}

