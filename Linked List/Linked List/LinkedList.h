#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node* head;

public:
	LinkedList() {
		this->head = nullptr;
	}
	LinkedList(Node* head) {
		this->head = head;
	}
	~LinkedList() {
		Node* ptr = this->head;
		while (ptr != nullptr) {
			ptr = ptr->next;
			delete(this->head);
			this->head = ptr;
		}
	}
	void addNodeAtFront(Node* ptr) {
		if (this->head==nullptr) {
			this->head = ptr;
		}
		else {
			ptr->next = this->head;
			this->head = ptr;
		}
	}
	void addNodeAtEnd(Node* ptr) {
		if (this->head==nullptr) {
			this->head = ptr;
		}
		else {
			Node* rptr = this->head;
			while (rptr->next!=nullptr) {
				rptr = rptr->next;
			}
			rptr->next = ptr;
		}
	}
	Node* deleteNodeAtFront() {
		Node* ptr = this->head;
		this->head = this->head->next;
		ptr->next = nullptr;
		return ptr;
	}
	Node* deleteNodeAtEnd() {
		Node* bptr=this->head,*rptr = this->head;
		Node* ptr = nullptr;
		while (rptr->next!=nullptr) {
			bptr = rptr;
			rptr = rptr->next;
		}
		bptr->next = rptr->next;
		rptr->next = nullptr;
		if (head == rptr)head =nullptr;
		return rptr;
	}
	Node* gethead() {
		return this->head;
	}

};

