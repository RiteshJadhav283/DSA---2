#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* reverseList(Node* head) 
{
    if (head==nullptr || head->next==nullptr)
        return head;

    Node *revHead=reverseList(head->next);
    head->next->next=head;
    head->next=nullptr;
    return revHead;
}

void printList(Node* head) 
{
  	Node* curr=head;
    while (curr!=nullptr) 
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main() {

    Node* head=new Node;
    head->data=3;
    head->next=new Node;
    head->next->data=21;
    head->next->next=new Node;
    head->next->next->data=6;
    head->next->next->next=new Node;
    head->next->next->next->data=4;

    head = reverseList(head);
    printList(head);

    return 0;
}