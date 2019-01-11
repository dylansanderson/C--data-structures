#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

struct node {
	int data;
	node *next;
};

int main() {
	node *list, *p, *q, *t;
	list = new node;
	list->data = 10;
	list->next = new node;
	list->next->data = 5;
	list->next->next = new node;
	list->next->next->data = 15;
	list->next->next->next = NULL;

	p = list;
	while (p != NULL) {
		cout << p->data << " ";                //line 1
		p = p->next;

	}
	cout << endl << endl;
	p = new node;
	p->data = 181;                     // add 181 to rear
	p->next = NULL;
	q = list;
	while (q->next != NULL) {
		q = q->next;
	}
	q->next = p;

	p = list;
	
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                              //line 2

	}
	cout << endl << endl;
	p = new node;                          //add 75 to front
	p->data = 75;
	p->next = list;
	list = p;

	while (p != NULL) {
		cout << p->data << " ";                //line 3
		p = p->next;

	}
	cout << endl << endl;

	
	p = new node;
	p->data= 69;
	t = q = list;                          //add 69 before node with 15 as data
	while (q->data != 15) {
		t = q;
		q = q->next;

	}
	p->next = q;
	t->next = p;
	
	p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                     // line 4

	}
	cout << endl << endl;
	p = q = list;
	while (p->data != 69) {
		q = p;
		p = p->next;                // delete 69
	}
	q->next = p->next;

	p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                        //line 5

	}

	p = new node;
	p->data = 21;
	t = q = list;
	while (q->data != 5)
	{
		t = q;
		q = q->next;                  // add 21 before 5

	}

	t->next = p;
	p->next = q;

	cout << endl << endl;
	p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                        //line 6

	}
	cout << endl;
	p = q = list;
	while (p->data != 5) {
		q = p;
		p = p->next;                       // delete 5
	} 
	p = p->next;
	q->next = p;

	p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                              //line 7 output

	}
	cout << endl << endl << endl << endl;

	p = q = list;
	while (p->next != NULL)
	{
		q = p;
		p =p->next;                        // delete last node

	}
	delete p;
	q->next = NULL;

	p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;                        //line 8

	}

	system("PAUSE");
	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////


