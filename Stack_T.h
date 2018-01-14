#pragma once
#include<iostream>
#include"Node.h"
using namespace std;

template<typename T>
class Stack_T
{

private:
	Node<T> *head;
	int size;


public:

	Stack_T()
	{
		head = NULL;
		size = 0;
	}

	//pushing data into stack 

	void pushData(T item)
	{
		Node<T> *n = new Node<T>(item);

		if (head == NULL)
		{
			head = n;
			size++;
		}


		else
		{
			Node<T> *temp = head;
			head = n;
			head->setNext(temp);
			size++;
		}

	}

	//popping data from stack 

	Node<T>* pop()
	{
		if (head == NULL || size == 0)
		{
			throw("empty stack");
		}

		else
		{
			Node<T> *temp = head;
			head = head->getNext();
			temp->setNext(NULL);
			size--;
			return temp;
			
		}
	}
	
	//getting size of stack
	int getSize() const
		{
			return size;
		}

	

	//print stack

	void printStack()_THROWS("Empty Exception")
	{
		if (head == NULL || size == 0)
		{
			//exception Stack Empty
			
		}
		else
		{
			Node<T>* temp = head;

			while (temp != NULL)
			{
				cout << "data = " << temp->getData() << endl;
				temp = temp->getNext();
			}
		}

	}
	
};