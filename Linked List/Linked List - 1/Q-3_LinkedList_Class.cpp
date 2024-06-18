/*
Q3. 
Implement a Linked List class.
The user defined LL should have insert (head,tail,idx) , 
delete(head,tail,idx) , get(idx) and display functions.
*/

#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class LinkedList{
    public:
    node* head;
    node* tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insert(int val, int idx){
        node* temp = new node(val);
        if(idx == 0){
            temp->next = head;
            head = temp;
            if(tail == NULL) tail = temp;
        }
        else{
            node* curr = head;
            for(int i=0; i<idx-1; i++){
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
            if(temp->next == NULL) tail = temp;
        }
    }
    void del(int idx){
        if(idx == 0){
            node* temp = head;
            head = head->next;
            delete temp;
        }
        else{
            node* curr = head;
            for(int i=0; i<idx-1; i++){
                curr = curr->next;
            }
            node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
            if(curr->next == NULL) tail = curr;
        }
    }
    int get(int idx){
        node* curr = head;
        for(int i=0; i<idx; i++){
            curr = curr->next;
        }
        return curr->data;
    }
    void display(){
        node* curr = head;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insert(1, 0);
    ll.insert(2, 1);
    ll.insert(3, 2);
    ll.insert(4, 3);
    ll.insert(5, 4);
    ll.display();
    ll.del(2);
    ll.display();
    cout<<ll.get(2)<<endl;
    return 0;
}
// Time Complexity: O(n) for insert, O(n) for delete, O(n) for get and O(n) for display
// Space Complexity: O(1)