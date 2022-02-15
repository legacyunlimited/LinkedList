#include "pch.h"
#include "../Linked List/LinkedList.h"

TEST(AddAtFrontTest, AddAtFront) {
	Node* n1 = new Node(5);
	Node* n2 = new Node(5);
	Node* n3 = new Node(5);
	LinkedList *l1 =new LinkedList();
	l1->addNodeAtFront(n1);
	l1->addNodeAtFront(n2);
	l1->addNodeAtFront(n3);
	EXPECT_EQ(n3, l1->gethead());
	EXPECT_TRUE(true);
}


TEST(AddAtEndTest, AddAtEnd) {
	Node* n1 = new Node(5);
	Node* n2 = new Node(5);
	Node* n3 = new Node(5);
	LinkedList *l1 =new LinkedList();
	l1->addNodeAtEnd(n1);
	l1->addNodeAtEnd(n2);
	l1->addNodeAtEnd(n3);
	EXPECT_EQ(n1, l1->gethead());
	EXPECT_TRUE(true);
}


TEST(DeleteAtFrontTest, DeleteAtFront) {
	Node* n1 = new Node(5);
	Node* n2 = new Node(5);
	Node* n3 = new Node(5);
	LinkedList *l1 =new LinkedList();
	l1->addNodeAtFront(n1);
	l1->addNodeAtFront(n2);
	l1->addNodeAtFront(n3);
	EXPECT_EQ(n3, l1->deleteNodeAtFront());
	EXPECT_TRUE(true);
}
TEST(DeleteAtEndTest, DeleteAtEnd) {
	Node* n1 = new Node(5);
	Node* n2 = new Node(5);
	Node* n3 = new Node(5);
	LinkedList * l1 =new LinkedList();
	l1->addNodeAtFront(n1);
	l1->addNodeAtFront(n2);
	l1->addNodeAtFront(n3);
	EXPECT_EQ(n1, l1->deleteNodeAtEnd());
	EXPECT_TRUE(true);
}

