#include "stackvector.h"

stackvector::stackvector()
{

}
stackvector::stackvector(int n)
{
    this->n = n;
    v = new int[n];
    top = 0;
}
bool stackvector::Push(int o)
{
    if(top == n)
    {
        return false;
    }
    v[top] = o;
    top++;
    return true;
}
bool stackvector::Pop(int *p)
{
    if (!top)
    {
        return false;
    }
    top--;
    *p = v[top];
    return true;
}
bool stackvector::Isempty()
{
    return (!top);
}
bool stackvector::Isfull()
{
    return (!(n-top));
}
