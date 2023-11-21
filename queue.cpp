#include<iostream>
using namespace std;
#define size 10
class queue
{
    int* arr;
int front;
int back;

public:
    queue()
    {
        //arr=new int[n];
        front=-1;
        back=-1;
    }
    bool isempty()
{
    if((front==-1)&&(back==-1))
    {
        return true;
    }
}
bool isfull()
{
    if(back==(size-1))
    {
        return true;
    }
}
void push(int value) {
        if (isfull()) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }

        if (isempty()) {
            front = back = 0;
        } else {
            back = (back + 1) % size;
        }

