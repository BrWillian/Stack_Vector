#ifndef STACKVECTOR_H
#define STACKVECTOR_H


class stackvector
{
private:
    int *v;
    int top;
    int n;
public:
    stackvector();
    stackvector(int n);
    bool Push(int o);
    bool Pop(int *p);
    bool Isempty();
    bool Isfull();
};

#endif // STACKVECTOR_H
