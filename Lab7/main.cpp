/*************************************************
* Program: Lab 7 - Int Queue
* Author: Emmet Cooke
* Date: 11/9/2017
* Description: This file runs Lab 7, where the user
* is asked to enter some values into a queue.
*************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Queue class
#include "Queue.hpp"
// Tools to help with questions
#include "Menu.hpp"
#include "validateInput.hpp"

int main()
{	// Initialize the menu and options
	Menu mainMenu("Please choose from the following options: ", 5);
	mainMenu.setOption(0, "Add a value to the back of the queue");
	mainMenu.setOption(1, "Display the first node value");
	mainMenu.setOption(2, "Remove the first node value");
	mainMenu.setOption(3, "Print the values in the queue");
	mainMenu.setOption(4, "Exit");

	// Variables to run the menu
	string validateInput;
	bool exitChoice = false;
	int menuChoice,
		val;
	Queue linkedList;
	// Loop until the user chooses to end
	do
	{	// print options
		mainMenu.printPrompt();
		mainMenu.printOptions();
		// get menu choice
		getline(cin, validateInput);
		menuChoice = getInt(validateInput);

		switch (menuChoice)
		{
		case 1: // add number to back of the queue
			getNum(val);
			linkedList.addBack(val);
			break;
		case 2: // print the value in the head node
			if (!linkedList.isEmpty())
			{
				cout << "Front Node Value: " << linkedList.getFront() << endl;
			}
			else
			{
				cout << "There is nothing there!" << endl;
			}
			break;
		case 3:	// remove the front node
			linkedList.removeFront();
			break;
		case 4:	// print the values in the queue
			linkedList.printQueue();
			break;
		case 5: // exit the program
			exitChoice = true;
			break;
		default: // An incorrect choice has been entered
			cout << "Please enter a choice between 1 and 5." << endl;
		}
		cout << endl;
	} while (!exitChoice);

	return 0;
}