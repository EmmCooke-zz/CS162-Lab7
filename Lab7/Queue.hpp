/*************************************************
* Author: Emmet Cooke
* Date: 11/9/2017
* Description: This is the header file for the 
* Queue class.
*************************************************/
#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue
{
private:
	struct QueueNode
	{
		int val;
		QueueNode * prev;
		QueueNode * next;

		QueueNode(int valueIn, QueueNode * prevIn = nullptr, QueueNode * nextIn = nullptr)
		{
			val = valueIn;
			prev = prevIn;
			next = nextIn;
		}
	};

	QueueNode * head = nullptr;

public:
	// Default Constructor
	Queue();
	//  Destructor
	~Queue();

	// Checks is there are any values in the queue
	bool isEmpty();
	// Adds a new Node to the back of the queue
	void addBack(int val);
	// returns the value of the head node
	int getFront();
	// removes the head node
	void removeFront();
	// Prints the values in the queue
	void printQueue();
};

#endif
