#include "Set.h"

#include <iostream>
#include <random>

using namespace std;

Set::Set()
{
	arr = new int[maxSize];
	size = 0;
}

int Set::getSize()
{
	return size;
}

void Set::addValue(int value)
{
	if (size == maxSize) {
		cout << "Buffer is full, can't add more elements\n";
		return;
	}

	if (size == 0) {
		arr[0] = value;
	}
	else {
		int insertIndex = 0;
		while (arr[insertIndex] < value and insertIndex < size) insertIndex++;

		if (arr[insertIndex] == value) return;

		for (size_t i = size; i > insertIndex; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[insertIndex] = value;
	}
	size++;
}

void Set::deleteValue(int value)
{
	int deleteIndex ;
	for (deleteIndex = 0; deleteIndex < size; deleteIndex++)
	{
		if (arr[deleteIndex] == value) break;
	}

	if (deleteIndex == size) return;

	for (size_t i = deleteIndex; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	size--;
}

int* Set::find(int value)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == value) return arr + i;
		else if (arr[i] > value) return nullptr;
	}
	return nullptr;
}

int* Set::begin()
{
	return arr;
}

int* Set::end()
{
	return arr + size;
}

void Set::generate(int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		addValue(rand() % (max - min + 1) + min);
	}
}

void Set::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

Set::~Set()
{
	delete[] arr;
}
