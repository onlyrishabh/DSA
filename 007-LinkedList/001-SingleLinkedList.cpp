#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* nodeOne = new Node(5);
    Node* head = nodeOne;
    print(head);

    insertAtHead(head, 8);
    print(head);

    return 0;
}