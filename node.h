#ifndef node_h
#define node_h
template <class T>
struct Node
{
    T value;
    Node<T> *l;
    Node<T> *r;
};

#endif
