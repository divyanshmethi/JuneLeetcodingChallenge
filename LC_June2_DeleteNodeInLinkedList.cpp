#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int x) : data(x), next(nullptr) {}
};

void printLL(Node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void deleteNode(Node* node)
{
	node->data = node->next->data;
	node->next = node->next->next;
}

int main()
{
	Node* head = new Node(4);
	head->next = new Node(5);
	head->next->next = new Node(1);
	head->next->next->next = new Node(9);
	cout<<"Linked List Before Deleting the node"<<endl;
	printLL(head);
	deleteNode(head->next);
	cout<<"Linked List After Deleting the node"<<endl;
	printLL(head);
}
