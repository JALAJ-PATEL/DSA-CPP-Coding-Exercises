/*
Q-1.
Ques: Design Circular Deque [Leetcode - 641]
(Use Array / Vector)

Design your implementation of the circular double-ended queue (deque).

Implement the MyCircularDeque class:

MyCircularDeque(int k) Initializes the deque with a maximum size of k.
boolean insertFront() Adds an item at the front of Deque. Returns true if the operation is successful, or false otherwise.
boolean insertLast() Adds an item at the rear of Deque. Returns true if the operation is successful, or false otherwise.
boolean deleteFront() Deletes an item from the front of Deque. Returns true if the operation is successful, or false otherwise.
boolean deleteLast() Deletes an item from the rear of Deque. Returns true if the operation is successful, or false otherwise.
int getFront() Returns the front item from the Deque. Returns -1 if the deque is empty.
int getRear() Returns the last item from Deque. Returns -1 if the deque is empty.
boolean isEmpty() Returns true if the deque is empty, or false otherwise.
boolean isFull() Returns true if the deque is full, or false otherwise.
 
Example 1:
Input
["MyCircularDeque", "insertLast", "insertLast", "insertFront", "insertFront", "getRear", "isFull", "deleteLast", "insertFront", "getFront"]
[[3], [1], [2], [3], [4], [], [], [], [4], []]
Output
[null, true, true, true, false, 2, true, true, true, 4]

Explanation
MyCircularDeque myCircularDeque = new MyCircularDeque(3);
myCircularDeque.insertLast(1);  // return True
myCircularDeque.insertLast(2);  // return True
myCircularDeque.insertFront(3); // return True
myCircularDeque.insertFront(4); // return False, the queue is full.
myCircularDeque.getRear();      // return 2
myCircularDeque.isFull();       // return True
myCircularDeque.deleteLast();   // return True
myCircularDeque.insertFront(4); // return True
myCircularDeque.getFront();     // return 4
 
Constraints:
1 <= k <= 1000
0 <= value <= 1000
At most 2000 calls will be made to insertFront, insertLast, deleteFront, deleteLast, getFront, getRear, isEmpty, isFull.
*/

#include <bits/stdc++.h>
using namespace std;

class MyCircularDeque {
    vector<int> dq;
    int front, rear, size, capacity;
public:
    MyCircularDeque(int k) {
        dq.resize(k);
        front = 0;
        rear = k - 1;
        size = 0;
        capacity = k;
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;
        front = (front - 1 + capacity) % capacity;
        dq[front] = value;
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % capacity;
        dq[rear] = value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if (isEmpty()) return false;
        rear = (rear - 1 + capacity) % capacity;
        size--;
        return true;
    }
    
    int getFront() {
        return isEmpty() ? -1 : dq[front];
    }
    
    int getRear() {
        return isEmpty() ? -1 : dq[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

int main() {
    int k;
    cout << "Enter the maximum size of the deque: ";
    cin >> k;
    
    MyCircularDeque* obj = new MyCircularDeque(k);
    cout << (obj->insertLast(1) ? "true" : "false") << endl;
    cout << (obj->insertLast(2) ? "true" : "false") << endl;
    cout << (obj->insertFront(3) ? "true" : "false") << endl;
    cout << (obj->insertFront(4) ? "true" : "false") << endl;
    cout << "Rear: " << obj->getRear() << endl;
    cout << (obj->isFull() ? "true" : "false") << endl;
    cout << (obj->deleteLast() ? "true" : "false") << endl;
    cout << (obj->insertFront(4) ? "true" : "false") << endl;
    cout << "Front: " << obj->getFront() << endl;
    
    return 0;
}

// Time Complexity:
// MyCircularDeque: O(1)
// insertFront: O(1)
// insertLast: O(1)
// deleteFront: O(1)
// deleteLast: O(1)
// getFront: O(1)
// getRear: O(1)
// isEmpty: O(1)
// isFull: O(1)
// Space Complexity: O(N) where N is the maximum size of the deque