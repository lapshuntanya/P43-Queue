//
// Created by Tetiana Perederii on 03.12.2025.
//

#ifndef P43_QUEUE_MYQUEUE_H
#define P43_QUEUE_MYQUEUE_H
#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myQueue {
    template <typename T>
    class Node {
    public:
        T info;
        Node* next;
        Node* prev;

        Node(T value) {
            info = value;
            next = prev = nullptr;
        }
    };

    //Queue - FIFO = first in, first out
    template <typename U>
    class Queue {
    protected:
        Node<U>* head;
        Node<U>* current;
    public:
        Queue() {
            head = current = nullptr;
        }
        ~Queue() { ... }//реалізація

        bool isEmpty()const {
            return head == nullptr || current == nullptr;
        }
        U first()const {
            if (isEmpty()) throw "Queue is empty!";
            return head->info;
        }

        void push_back(U value) {
            Node<U>* el = new Node<U>(value);

            if (isEmpty()) {
                head = current = el;
            }else {
                current->next = el;
                el->prev = current;
                current = el;
            }
        }
        void pop_front() {
            if (!isEmpty()) {
                if (head == current) {
                    delete head;
                    head = current = nullptr;
                }else {
                    head = head->next;
                    delete head->prev;
                    head->prev = nullptr;
                }
            }
        }

        void show()const {
            if (isEmpty()) cout << "Queue is empty!\n";
            else {
                Node<U> * p = head;
                while (p!=nullptr) {
                    cout << p->info << " ";
                    p = p->next;
                }
                cout << endl;
            }
        }
    };
}
#endif //P43_QUEUE_MYQUEUE_H