#pragma once
#include<iostream>


template<typename T>

class Node
{
private:
	T data; 
	Node<T> *next = NULL;

public:
	Node<T>(T item)
	{
		data = item;

	}

	void setdata(T data)
	{
		this->data = data;
	}

	void setNext(Node * next)
	{
		this->next = next;
	}

	Node<T> * getNext() const
	{
		return (this->next);
	}

	T getData() const
	{
		return (this->data);
	}
};