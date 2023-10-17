#include<iostream>
using namespace std;
#define size 5
int A[5], top=-1;
bool isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}
void push(int value)
{
    if(top==size-1)
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        top++;
        A[top]=value;
    }
}
void pop()
{
    if(isempty())
        cout<<"Stack is Empty"<<endl;
    else
        top--;
}
void show_top()
{
    if(isempty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Element at top is:"<<A[top]<<endl;
}
void displayStack()
{
    if(isempty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        for(int i=0;i<=top;i++)
            cout<<A[i]<<" "<<endl;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    displayStack();
    show_top();
    pop();
    displayStack();
    show_top();




}


