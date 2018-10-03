#include <iostream>
using namespace std;
#include "tree.h"
int main()
{
    Tree<int> x;
    x.AddChild(6);
    x.AddChild(4);
    x.AddChild(5);
    x.AddChild(8);
    x.AddChild(9);
    x.AddChild(1);
    x.PreOrder();
    return 0;
}
