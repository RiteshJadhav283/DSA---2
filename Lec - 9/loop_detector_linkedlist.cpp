#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
bool loopdetect(Node* &head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return false;
    }

    Node* slow=head;
    Node* fast=head;

    if(fast->next!=nullptr)
    {
        fast=fast->next;
    }
    else
    {   
        return false;
    }
    while(fast != nullptr && fast->next != nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node* head = new Node;
    head->data = 3;
    head->next = new Node;
    head->next->data = 21;
    head->next->next = new Node;
    head->next->next->data = 6;
    head->next->next->next = new Node;
    head->next->next->next->data = 4;

    head->next->next->next->next = head->next;

    if(!loopdetect(head))
    {
        cout<<"NOT LOOPED";
    }
    else
    {
        cout<<"looped";
    }

    return 0;

}