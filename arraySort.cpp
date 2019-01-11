// Duy Nguyen
// Dylan Sanderson
//CPSC 131-07 Project 1.2

#include <fstream>
#include <iostream>                      
#include <string>
#include <algorithm>        //algorithm library for Sort functions

using namespace std;

void DisplayArray(int a[], int);
void DisplayArray(string month[], int);         //overloaded functions
void DisplayArray(char vowels[], int);         //function prototypes
void SortArray(int a[]);
void SortArray(string months[]);  
void SortArray(char vowels[]);

int main()
{
	int a[6] = {44,55,20,88,33,11};
	string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	char vowels[5] = { 'E','U','A','I','O' };
	cout << "Original array a: ";
	DisplayArray(a,6);
	SortArray(a);
	cout << "Sorted array a: ";
	DisplayArray(a, 6);
	cout << endl;
	cout << "Original array months: ";
	DisplayArray(months, 12);
	SortArray(months);                                          //function calls
	cout << "Sorted array months: ";
	DisplayArray(months, 12);
	cout << endl;
	cout << "Original array vowels:";
	DisplayArray(vowels, 5);
	SortArray(vowels);
	cout << "Sorted array vowels: ";
	DisplayArray(vowels, 5);
	cout << endl;

	return 0;
}

void DisplayArray(int a[], int x) 
{
	
	for (int i = 0; i < x; i++)                  //Looping through array of integers
	{
		cout << a[i] << " ";

	}
	cout << endl;
}
void DisplayArray(string months[], int z) 
{
	
	for (int i = 0; i < z; i++)            // loop through each string of months (“Jan”.. “Feb”..)
	{
		cout << months[i] << " "; 

	}
	cout << endl;
}
void DisplayArray(char vowels[], int z)
{
	
	for (int i = 0; i < z; i++)                             // loop through and display array of characters
	{
		cout << vowels[i] << "  ";

	}
	cout << endl;
}
void SortArray(int a[])
{
	sort(a, a + 6);                                                   //Sort array of integers (smallest to largest)
}

void SortArray(string months[])
{
	sort(months, months + 12);                          //sort months alphabetically
}

void SortArray(char vowels[])
{
	sort(vowels, vowels + 5);                     // Alphabetically sort characters
}
