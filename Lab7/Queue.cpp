/*************************************************
* Author: Emmet Cooke
* Date: 11/9/2017
* Description: This file contains the definitions
* for the functions declared in the Queue class.
*************************************************/
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
	// Delete the existing nodes?
}

/*************************************************
* Description: This function checks to see if the 
* queue is empty. If it is, it returns true.
* Otherwise, it returns false.
*************************************************/
bool Queue::isEmpty()
{
	//if header equals nullptr,
	// the queue is empty
	// Otherwise, there is a node
}

/*************************************************
* Description: This function creates a new node
* that is then added at the end of the queue.
*************************************************/
void Queue::addBack(int val)
{
	// The back is head prev
	// So create a new node and then
	// insert it between head->prev and head
}

/*************************************************
* Description: This function returns the value
* that is currently in the head node.
*************************************************/
int Queue::getFront()
{
	// if head exists, return it's value
}

/*************************************************
* Description: This function removes the head node
* of the queue.
*************************************************/
void Queue::removeFront()
{
	// if there is more than one node, 
	// set the head equal to head->next
	// and then prev equal to head->prev
}

/*************************************************
* Description: This function goes through the nodes
* in the queue and prints their values.
*************************************************/
void Queue::printQueue()
{
	// print head
	// while pointer != head
	// print pointer->next val
}
