#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue()
{
	size = 0;
	arr = new int[maxSize];
}

int Queue::getSize() const
{
	return 0;
}

int* Queue::begin()
{
	return arr;
}

int* Queue::end()
{
	return arr + size;
}

int Queue::getFirst()
{
	if (size == 0) {
		cout << "No elements in queue\n";
		return 0;
	}
	return arr[0];
}

int Queue::deleteFirst()
{
	if (size == 0) {
		cout << "No elements in queue\n";
		return 0;
	}
	int element = arr[0];
	for (size_t i = 0; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return element;
}

void Queue::addLast(int value)
{
	if (size >= maxSize) {
		cout << "Queue is full\n";
		return;
	}
	arr[size] = value;
	size++;
}

void Queue::generate(int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		addLast(rand() % (max - min + 1) + min);
	}
}

void Queue::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

Queue::~Queue()
{
	delete[] arr;
}
