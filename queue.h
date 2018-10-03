#ifndef queue_h
#define queue_h
#include "qnode.h"
template <class T>
class Queue
{
private:
    QNode<T> *head;
public:
    Queue()
    {
        head = 0;
    };
    void EnQueue(T v)
    {
        QNode<T> *n = new QNode<T>;
        n->value = v;
        n->next = 0;
        if (head == 0)
            head = n;
        else
        {
            QNode<T> *p = head;
            while (p->next != 0)
                p=p->next;
            p->next = n;
        }
    };
    T DeQueue()
    {
        T t = head->value;
        QNode<T> * p = head;
        head = head->next;
        delete p;
        return t;        
    };
    bool IsEmpty() const
    {
        return head == 0;
    };
};

#endif
