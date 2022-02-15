#pragma once
class Node {
private:
	int data;
public:
	Node* next;
	Node() {
		this->data = 0;
		this->next = nullptr;
	}
	Node(int d) {
		this->data = d;
		this->next = nullptr;
	}
	Node(int d, Node* nextptr) {
		this->data = d;
		this->next = nextptr;
	}
	int getData() {
		return this->data;
	}
	void setData(int d) {
		this->data = d;
	}
	
};