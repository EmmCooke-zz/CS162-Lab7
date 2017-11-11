/*************************************************
* Author: Emmet Cooke
* Date: 11/9/2017
* Description: This file contains the definitions
* for the functions declared in the Queue class.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;

#include "Queue.hpp"

/*************************************************
* Description: Default Constructor.
*************************************************/
Queue::Queue()
{
}

/*************************************************
* Description: Destructor.
*************************************************/
Queue::~Queue()
{
	// Delete the existing nodes
	while (!isEmpty())
	{
		removeFront();
	}
}

/*************************************************
* Description: This function checks to see if the 
* queue is empty. If it is, it returns true.
* Otherwise, it returns false.
*************************************************/
bool Queue::isEmpty()
{
	//if header equals nullptr, the queue is empty
	if (head == nullptr)
	{
		return true;
	}// Otherwise, there is a node
	return false;
}

/*************************************************
* Description: This function creates a new node
* that is then added at the end of the queue.
*************************************************/
void Queue::addBack(int val)
{
	// Check that a node exists
	if (!isEmpty())
	{
		QueueNode * temp = head->prev;	// temp object
		//while (temp->next != head)
		//{
		//	temp = head->next;	// Loop until the end
		//}
		QueueNode * newNode = new QueueNode(val, head->prev, head);
		temp->next = newNode;
		head->prev = newNode;
	}
	else
	{	// If no node exists, make a new one
		head = new QueueNode(val);
		head->next = head;
		head->prev = head;
	}
}

/*************************************************
* Description: This function returns the value
* that is currently in the head node.
*************************************************/
int Queue::getFront()
{
	// if head exists, return it's value
	if (!isEmpty())
	{
		return head->val;
	}
}

/*************************************************
* Description: This function removes the head node
* of the queue.
*************************************************/
void Queue::removeFront()
{
	// If a queue exists
	if (!isEmpty())
	{	// If there is only one node
		if (head->next == head)
		{
			delete head;
			head = nullptr;
		}
		else
		{	// pointer to hold head
			QueueNode * currentHead = head;
			// Set the real head to the next one
			head = head->next;
			// Set the new heads previous as the
			// former heads previous
			head->prev = currentHead->prev;
			// Set the old heads previous
			// to point to the new head
			currentHead->prev->next = head;
			// free the old head
			delete currentHead;
		}
	}
}

/*************************************************
* Description: This function goes through the nodes
* in the queue and prints their values.
*************************************************/
void Queue::printQueue()
{
	if (!isEmpty())
	{
		cout << "Your Queue: ";
		// Print the value in the head
		cout << head->val << " ";
		QueueNode * temp = head->next;
		// Go through queue printing values
		// until head is reached
		while (temp != head)
		{
			cout << temp->val << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}
