//Defines the entry point for the console application.
#include<iostream>
#include"stdafx.h"
#include"Stack_T.h"
#include"Node.h"



int main()
{
	Stack_T<int> *s = new Stack_T<int>();
	
	try {
		//pushing data to stack ;
		s->pushData(10);
		//s->pushData(20);
		//s->pushData(30);
		//s->pushData(40);
		//s->pushData(50);
		//s->pushData(60);
		//s->pushData(70);

		//printing the stack
		s->printStack();

		//popping the data()
		Node<int> *p1 = s->pop();
		Node<int> *p2 = s->pop();


		//printing the data from pop Nodes
		std::cout << "p1 = " << p1->getData() << endl;
		std::cout << "p2 = " << p2->getData() << endl;

		//printinf the data after the pop operation
		s->printStack();
	}

	catch (...)
	{
		cerr << "Stack Empty Exception "<< endl;

	}

	s->pushData(20);
	s->pushData(30);

	s->printStack();
    return 0;
}

