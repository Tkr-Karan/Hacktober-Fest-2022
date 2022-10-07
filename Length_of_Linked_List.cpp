#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

Node * take_Input()
{
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin>>data;
    }
    return head;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" -> ";
        temp =  temp -> next;
    }

    if(temp == NULL)
    {
        cout<<"NULL";
    }
}

int length(Node* head)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

int main()
{
    Node* head = take_Input();
    print(head);
    cout<<endl;
    cout<<"Length: "<<length(head);
    return 0;
}
