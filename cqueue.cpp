#include<iostream>
using namespace std;

#define size 10

class Queue
{
    int* items;
    int front;
    int rear;

public:
    Queue()
    {
        items = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (front == 0 && rear == size - 1) || (front == rear + 1);
    }

    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % size;
            items[rear] = element;
            cout << endl
                 << "ENQUEUE " << element << endl;
        }
    }

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            element = items[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
            return (element);
        }
    }

    void display()
    {
        int i;
        if (isEmpty())
        {
            cout << endl << "Empty Queue" << endl;
        }
        else
        {
            cout << "Front -> " << front;
            cout << endl << "Items -> ";

            if (front <= rear)
            {
                for (i = front; i <= rear; i++)
                    cout << items[i] << " ";
            }
            else
            {
                for (i = front; i < size; i++)
                    cout << items[i] << " ";
                for (i = 0; i <= rear; i++)
                    cout << items[i] << " ";
            }

            cout << endl << "Rear -> " << rear;
        }
    }
};

int main()
{
    Queue q;

    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.enQueue(6);

    q.display();

    int elem = q.deQueue();

    if (elem != -1)
        cout << endl
             << "Deleted Element is " << elem;

    q.display();

    q.enQueue(7);

    q.display();

    q.enQueue(8);

    return 0;
}
