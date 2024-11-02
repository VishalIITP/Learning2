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

void traversalLL(Node *node){
    while(node){
        cout<<node->data<<" ";
        node=node->next;
    }
}

void RtraverseLL(Node *node){
    if(node==NULL){
        return;
    }
    
    cout<<node->data<<" ";
    RtraverseLL(node->next);
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next= new Node(30);
    head->next->next->next=new Node(40);
    traversalLL(head);
    cout<<endl;
    RtraverseLL(head);

    return 0;
}