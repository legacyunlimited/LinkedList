#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <chrono> 
using namespace std;
using namespace std::chrono;

void printList(LinkedList* list) {
	Node* ptr = list->gethead();
	cout << "The List is :: ";
	while (ptr != nullptr) {
		cout << ptr->getData() << " -> ";
		ptr = ptr->next;
	}
	if (ptr == nullptr) cout << " <--End--> \n\n\n";
}
int main() {
	int mainchoice=0;
	start:
	cout << "*********Welcome**********" << endl;
	cout << "Choose Option\n 1. User Testing\n 2. Perform Automatic Testing\n 3. Exit\n Please Enter : ";
	cin >> mainchoice;
	if (mainchoice == 1) {
		int numberOfNodes,subChoice;
		cout << "\n Please Enter the Number of Nodes : ";
		cin >> numberOfNodes;
		cout << "Choose Option\n 1. Add\n 2. Delete the Added\n 3. Exit\n Please Enter : ";
		cin >> subChoice;
		if (subChoice == 1) {
			cout << "\nPerforming Add Test for "<<numberOfNodes<<" Random Integers\n";
			LinkedList *list1 = new LinkedList();
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < numberOfNodes; i++)
			{
				int num = (rand() % 1000) + 1;
				Node* n1 = new Node(num);
				list1->addNodeAtEnd(n1);
				n1 = NULL;
			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			printList(list1);
			cout << "Time to Add "<<numberOfNodes<<" Integers is: "
				<< duration.count() << " microseconds" << endl;
		}
		else if (subChoice == 2) {
			cout << "\nPerforming Delete Test for " << numberOfNodes << " Random Integers\n";
			LinkedList* list1 = new LinkedList();
			for (int i = 0; i < numberOfNodes; i++)
			{
				int num = (rand() % 1000) + 1;
				Node* n1 = new Node(num);
				list1->addNodeAtEnd(n1);
				n1 = NULL;
			}
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < numberOfNodes; i++)
			{
				list1->deleteNodeAtEnd();
			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			printList(list1);
			cout << "Time to Delete "<<numberOfNodes<<" Integers is: "
				<< duration.count() << " microseconds" << endl;
		}
		else if (subChoice == 3) {
			cout << "\n\n You Exited the Code \n\n";
			return 0;
		}
		else {
			cout << "\n\n You Entered the Wrong Input \n\n";
			return 0;
		}
	}
	else if (mainchoice == 2) {
		{
			cout << "\nPerforming Add Test for 100 Random Integers\n";
			LinkedList *list1 =new LinkedList();
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				int num = (rand() % 1000) + 1;
				Node* n1 = new Node(num);
				list1->addNodeAtEnd(n1);
				n1 = NULL;
			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 100 Integers is: "
				<< duration.count() << " microseconds" << endl; 
		

			cout << "\nPerforming Delete Test for 100 Random Integers\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 100; i++)
			{
				list1->deleteNodeAtEnd();
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Delete 100 Integers is: "
				<< duration1.count() << " microseconds\n\n\n" << endl;
		
		}
		




		{
			cout << "\nPerforming ADD Test for 1000 Random Integers\n";
			LinkedList *list1 =new LinkedList();
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				int num = (rand() % 1000) + 1;
				Node* n1 = new Node(num);
				list1->addNodeAtEnd(n1);
				n1 = NULL;
			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 100 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Delete Test for 1000 Random Integers\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 1000; i++)
			{
				list1->deleteNodeAtEnd();
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Delete 1000 Integers is: "
				<< duration1.count() << " microseconds\n\n\n" << endl;
		}
		




		{
			cout << "\nPerforming ADD Test for 10000 Random Integers\n";
			LinkedList *list1 =new LinkedList();
			auto start = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				int num = (rand() % 1000) + 1;
				Node* n1 = new Node(num);
				list1->addNodeAtEnd(n1);
				n1 = NULL;
			}
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Add 10000 Integers is: "
				<< duration.count() << " microseconds" << endl;


			cout << "\nPerforming Delete Test for 10000 Random Integers\n";
			auto start1 = chrono::high_resolution_clock::now();
			for (int i = 0; i < 10000; i++)
			{
				list1->deleteNodeAtEnd();
			}
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Delete 10000 Integers is: "
				<< duration1.count() << " microseconds\n\n\n" << endl;
		}

	}
	else if (mainchoice == 3) {
		cout << "\n\n You Exited the Code \n\n";
		return 0;
	}
	else {
		cout << "\n\n You Entered the Wrong Choice\n\n";
		goto start;
	}

	return 0;
}