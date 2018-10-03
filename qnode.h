#ifndef qnode_h
#define qnode_h
template <class T>
struct QNode
{
    T value;
    QNode<T> *next;
    
};

#endif
