#include <iostream>

#define MAX 10

template <class T> 
class Stack 
{
    public:
    int top;
    T arr[MAX];
    Stack()
    {
        top = -1;
    }
    bool push(T x);
    int pop();
    bool isEmpty();
   
};

template <class T> 
bool Stack<T>::push(T x)
{
    if(top == MAX-1)
    {
        printf("stack is full");
    }
    top++;
    arr[top] = x;
}

template <class T> 
int Stack<T>::pop()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    T data = arr[top];
    top--;

    return data;
}

int main ()
{
    Stack<int>  number;
    number.push(2);
    int n = number.pop();
    printf("%d", n);
}

