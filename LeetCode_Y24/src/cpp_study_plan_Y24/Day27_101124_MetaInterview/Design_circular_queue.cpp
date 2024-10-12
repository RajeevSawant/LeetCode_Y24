/*
 * Design_circular_queue.cpp
 *
 *  Created on: Oct 11, 2024
 *      Author: Rajeev Sawant
 */



struct Node{
    int value;
    Node *next;
    Node(int x): value(x), next(NULL) {}
    Node(int x, Node* NEXT): value(x), next(NEXT) {}
};

class MyCircularQueue {
private:
        Node *head, *tail;
        int count;
        int capacity;
public:
    MyCircularQueue(int k) {
        this->capacity = k;
    }

    bool enQueue(int value) {
        if(this->count == this->capacity){
            return false;
        }

        if (this -> count < this -> capacity){
             Node* newNode = new Node(value);

            if (head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail -> next = newNode;
                tail = newNode;
            }

            this -> count += 1;
            return true;
        }

        return false;
    }

    bool deQueue() {
        if(this -> count == 0){
            return false;
        }

       if(this -> count > 0){
            Node* temp = head;
            head = head -> next;

            temp -> next = NULL;
            delete temp;

            this -> count -= 1;
            return true;
       }

       return false;
    }

    int Front() {
        if(this -> count == 0)
            return -1;
        else
            return head -> value;
    }

    int Rear() {
        if (this -> count == 0)
            return -1;
        else
            return tail -> value;
    }

    bool isEmpty() {
        return (this -> count == 0);
    }

    bool isFull() {
        return (this -> count == this -> capacity);
    }
};



