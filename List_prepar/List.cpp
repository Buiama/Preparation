#include "List.h"
#include <iostream>

using namespace std;

List::List()
{
	size = 0;
	head = nullptr;
	tail = nullptr;
}

int List::getSize() const
{
	return size;
}

Node* List::begin()
{
	return head;
}

Node* List::end()
{
	return tail;
}

Node* List::get(int index)
{
	if (index >= size or index < 0) return nullptr;
	Node* getPtr = head;
	for (size_t i = 0; i < index; i++)
	{
		getPtr = getPtr->next;
	}
	return getPtr;
}

void List::pushBack(int value)
{
	Node* newNode = new Node(value);
	if (size == 0) {
		head = newNode;
		tail = newNode;
		size = 1;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
		size++;
	}
}

void List::insert(int index, int value)
{
	Node* insertPtr;
	if (index == size) pushBack(value);
	else if (index == 0) {
		Node* newNode = new Node(value);
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
		size++;
	}
	else if (index < size) {
		insertPtr = get(index);
		Node* newNode = new Node(value);
		newNode->prev = insertPtr->prev;
		newNode->next = insertPtr;

		insertPtr->prev->next = newNode;
		insertPtr->prev = newNode;
		size++;
	}
}

void List::popBack()
{
	if (size == 1) {
		delete head;
		head = nullptr;
		tail = nullptr;
		size = 0;
	}
	else if (size > 1) {
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
		size--;
	}
}

void List::erase(int index)
{
	Node* erasePtr;
	if (index == size - 1) popBack();
	
	else if (index < size and index >= 0) {
		erasePtr = get(index);
		if (erasePtr == head) {
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}
		else {
			erasePtr->prev->next = erasePtr->next;
			erasePtr->next->prev = erasePtr->prev;
			delete erasePtr;
		}
		size--;
	}
}

int& List::operator[](int index)
{
	Node* iterator = head;
	for (size_t i = 0; i < index; i++)
	{
		head = head->next;
	}
	return head->value;
}

void List::generate(int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		pushBack(rand() % (max - min + 1) + min);
	}
}

void List::print()
{
	Node* printPtr = head;
	while (printPtr->next) {
		cout << printPtr->value << " ";
		printPtr = printPtr->next;
	}
	cout << printPtr->value <<"\n";
}

List::~List()
{
	Node* destructorPtr = head;
	while (destructorPtr->next) {
		destructorPtr = destructorPtr->next;
		delete destructorPtr->prev;
	}
	delete destructorPtr;
}
