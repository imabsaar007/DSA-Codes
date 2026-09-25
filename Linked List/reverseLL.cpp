#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class List{
    public:
    Node* head;
    List(){
        head = NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }else {
            newNode->next = head;
            head = newNode;
        }
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
    List linkedList;
    linkedList.push(45);
    linkedList.push(3);
    linkedList.push(5);
    linkedList.push(33);
    linkedList.push(445);
    linkedList.push(35);
    linkedList.print();
}