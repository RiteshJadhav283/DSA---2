#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int value;
    Node*next;

};
Node* reverselist(Node *head)
{
    if (!head) return nullptr;

    stack<Node*> st;
    Node* current = head;

    while (current!=nullptr) 
    {
        st.push(current);
        current=current->next;
    }

    Node* newHead=st.top();
    st.pop();
    current=newHead;

    while (!st.empty()) 
    {
        current->next=st.top();
        st.pop();
        current=current->next;
    }

    current->next=nullptr;
    return newHead;
}
void printList(Node* head) 
{
    while (head!=nullptr) {
        cout << head->value <<" -> ";
        head=head->next;
    }
    cout << "NULL\n";
}



int main()
{
    Node* head=new Node;
    head->value=3;
    head->next=new Node;
    head->next->value=21;
    head->next->next=new Node;
    head->next->next->value=6;
    head->next->next->next=new Node;
    head->next->next->next->value=4;
    head->next->next->next->next=nullptr;

    cout << "Original list: ";
    printList(head);

    head = reverselist(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}