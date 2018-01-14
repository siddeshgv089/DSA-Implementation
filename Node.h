#pragma once
#include<iostream>

template<typename T>
class Node
{
private:
	T data;
	Node <T>* next = NULL;

public:
	Node<T>(T item) :data(item) {}

	T getData() const
	{
		return data;
	}

	Node <T>* getNext() const
	{
		return next;
	}

	void setData(T data)
	{
		this->data = data;
	}

	void setNext(Node * next)
	{
		this->next = next;
	}

};
