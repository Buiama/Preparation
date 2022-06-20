#include "Node.h"

Node::Node()
{
	value = 0;
	next = nullptr;
	prev = nullptr;
}

Node::Node(int value)
{
	this->value = value;

	next = nullptr;
	prev = nullptr;
}
