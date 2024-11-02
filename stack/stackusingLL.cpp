#include <bits/stdc++.h> // =%_^
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Stack
{
    public:
    Node *lastnode;
    Node *head;
    Node *curr= head;
    void push(int x){
        curr=new Node(x);
        curr=curr->next;
    }
    void printStack(Node *head){
        Node * currnode=head;
        while(currnode){
            cout<<currnode<<"->";
            currnode=currnode->next;
        }
    }
    void pop(Node *head){
        
    }

};

int main()
{
    //stack
    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
   

    return 0;
}