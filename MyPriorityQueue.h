//
// Created by Tetiana Perederii on 03.12.2025.
//

#ifndef P43_QUEUE_MYPRIORITYQUEUE_H
#define P43_QUEUE_MYPRIORITYQUEUE_H
#include "MyQueue.h"

namespace myQueue {

    template<typename U>
    class PriorityQueue: public Queue<U>
    {
    public:
        void push_back(U value) {
            Node<U>* el = new Node<U>(value);

            if (Queue<U>::isEmpty()) {
                Queue<U>::head = Queue<U>::current = el;
            }
            else {
                Node<U>*p = Queue<U>::current;
                while (p!=nullptr && p->info < el->info) {
                    p = p->prev;
                }

                if (p == nullptr) {
                    el->next = Queue<U>::head;
                    Queue<U>::head->prev = el;
                    Queue<U>::head = el;
                }else if (p == Queue<U>::current) {
                    Queue<U>::push_back(el);
                }
                else {
                    Node<U>*p2 = p->next;
                    p->next = el;
                    el->prev = p;

                    p2->prev = el;
                    el->next = p2;
                }

            }
        }
    };

}
#endif //P43_QUEUE_MYPRIORITYQUEUE_H