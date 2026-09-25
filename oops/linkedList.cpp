#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_first(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        Node * temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void push_middle(int data,int pos){
        Node* newNode = new Node(data);
        if(pos < 0){
            return;
        }
        if(pos == 0){
            push_front(data);
        }
        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val <<" ";
            temp = temp->next;
        }
    }
};
int main(){
    List ll;
    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(5); 
    ll.push_back(8);
    ll.pop_first();
    ll.pop_back();
    ll.push_middle(7,2);
    ll.print();
    return 0;
}