#pragma once
#include<iostream>
#include"Node.h"
using namespace std;

template<typename T>
class LinkedList
{

private:
	Node<T> *head ;
	int size;

public:
	//Adding Node to LinkedList:

	LinkedList()
	{
		head = NULL; 
		size = 0;
	
	}

	//getSize

	int getSize() const
	{
		return size;
	}

	Node<T>* getHead() const
	{
		return head;
	}

	void append(int item)
	{
		Node <T>*n = new Node<T>(item);

		if (head == NULL)
		{
			head = n;
			size++;
		}

		else {

			Node<T>*temp = head;
			while (temp->getNext() != NULL)
			{
				temp = temp->getNext();
			}

			temp->setNext(n);
			size++;
		}

	}

	//insert()

	void insertAtBegin(T item)
	{
		Node<T>*n = new Node<T>(item);

		if (head == NULL)
		{
			head = n;
			cout << "Element inserted at head" << endl;
			size++;
		}
		else
		{
			Node<T> * temp = head;
			head = n;
			head->setNext(temp);
			size++;
			cout << "Element inserted at head" << endl;

		}
	}


	void insertAtEnd(T item)
	{
		if (head == NULL)
		{
			insertAtBegin(item);
		}
		
		Node <T>*n = new Node<T>(item);

		Node <T>*temp = head;

		while (temp->getNext() != NULL)
		{
			temp = temp->getNext();
		}

		temp->setNext(n);
		size++;
		cout << "Element inserted at the End" << endl;

	}

	void insertAtPos(int pos, T item)
	{
		Node<T> *n = new Node<T>(item);

		if (pos == 0)
			insertAtBegin(item);
		else if (pos == size)
			insertAtEnd(item);
		else
		{
			int cnt = 1;
			Node <T>*previous = NULL;
			Node <T>*Next = head;

			while (cnt < pos)
			{
				
				previous = Next;
				cnt++;
				Next = Next->getNext();
			}
			previous->setNext(n);
			n->setNext(Next);
			cout << "Element inserted at the position = "<<pos << endl;
		}

	}



	//delete()

	void deleteAtBegin()
	{
		if (head == NULL)
			throw "List Empty";

		else
		{
			Node <T>* temp =  head;
			head = head->getNext();
			delete temp;
			size--;
			cout << "Element deleted at the begining of the list" << endl;
		}


	}


	void deleteAtEnd()
	{
		if (size == 0)
			throw "List is Empty";
		else
		{
			Node <T>*Previous = NULL;
			Node <T>*Next = head;

			while (Next->getNext() != NULL)
			{
				Previous = Next;
				Next = Next->getNext();
			}

			Previous->setNext(NULL);
			cout << "Element deleted at the end of the list" << endl;
		}
	}

	void deleteItem(T item)
	{
		Node <T>*Next = head;
		Node <T>*previous = NULL;

		while (Next->getData() != item && Next->getNext() != NULL)
		{
			previous = Next;
			Next = Next->getNext();

		}

			
		if (Next->getNext() == NULL && item == Next->getData())
			deleteAtEnd();

		if (Next->getNext() == NULL && item != Next->getData())
			cout << "Item not found" << endl;
		else
		{
			Node  <T>* temp = Next->getNext();
			previous->setNext(temp);
			cout << "Element deleted "<< endl;
			size--;
		}
				
		delete Next;
	}

	//update()
	
	void updateAtBegin(T item)
	{
		Node <T>*n = new Node<T>(item);

		if (head == NULL)
		{
			throw "List empty";
		}
		else
		{
			head->setData(item);
			cout << "item updated at the beginning" << endl;
		}
	}


	void updateAtEnd(T item)
	{
		
		Node <T>*temp = head;

		while (temp->getNext() != NULL)
		{
			temp = temp->getNext();
		}

		temp->setData(item);
		cout << "Element updated at the End" << endl;

	}

	void updateAtPos(int pos, T item)
	{
		
		if (pos == 0)
			updateAtBegin(item);
		else if (pos == size)
			updateAtEnd(item);
		else
		{
			int cnt = 1;
			Node<T> *previous = NULL;
			Node <T>*Next = head;

			while (cnt < pos)
			{

				previous = Next;
				cnt++;
				Next = Next->getNext();
			}
			Next->setData(item);
			cout << "Element updaed at the pos = "<< pos <<endl;
		}

	}


	//Printing the Data

	void PrintData()
	{
		if (head == NULL)
		{
			std::cout << "List Empty" <<std::endl;
		}

		else
		{
			Node <T>* temp = head;
			while (temp != NULL)
			{
				std::cout << temp->getData() <<std::endl;
				temp = temp->getNext();
			}
		}

	}
};
