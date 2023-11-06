#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int value){
		data = value;
		next = nullptr;
	}
};

class LL{
public:
	Node * head;

	LL(){
		head = nullptr;

	}

	void append(int data){
		Node* new_node = new Node(data);
		if(head==nullptr){
			head = new_node;
		}
		else{
			Node* current = head;
			while(current->next!=nullptr){
				current = current->next;
			}
			current->next = new_node;
		}
	}
	void display(){
		Node* current = head;
		while(current!= nullptr){
			cout << current->data << endl;
			current = current->next;
		}
	}

};

int main(){
	LL ml;
	ml.append(1);
	ml.append(2);
	ml.append(3);

	ml.display();

	return 0;
}
