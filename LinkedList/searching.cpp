//     =%^_
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL; 
    }
};

int search(Node *head, int f){
    if(head=NULL){
        return -1;
    }
    if(head->data== f){
        return ;
    }
}


int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    return 0;
}