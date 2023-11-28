#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int value):data(value),next(nullptr){}

};
class LinkedList
{
private:
    Node*head;
public:
    LinkedList():head(){}
    void insert(int value)
    {
        Node* newNode=new Node(value);
        if(!head)
        {
            head=newNode;

        }
        else{
            node*current=head;
            while(current->next)
            {
                current=current->next;
            }
            current->next=newNode;
        }
    }
    void remove(int value)
    {
        Node*current=head;
        Node*previous=nullptr;
        while(current && current->data !=value)
        {
            previous=current;
            current=current->next;
        }
        if (!current)
        {
            cout<<"Value not found"<<endl;
            return;
        }
        if(!previous)
        {
            head=current->next;
        }
        else
        {
            previous->next=current-next;
        }
        delete current;
    }
    bool search(int value)
    {
        Node*current=head;
        while(current)
        {
            if(current->data==value)
            {
                return true;
            }
            current=current->next;
        }
        return false
    }

};


void display() {
   Node*current=head;
   while (current)) {
      cout<< current->data <<" ";
      current = current->next;
   }
   cout<<"Display: "<<endl;
}
int main() {
    LinkedList mylist;
   mylist.insert(3);
   mylist.insert(1);
   mylist.insert(7);
   mylist.insert(2);
   mylist.insert(9);
   cout<<"The linked list is: ";
   mylist.display();
   int searchValue=3;
   mylist.search(searchValue);
   int deleteValue=2;
   mylist.delete(deleteValue);
   mylist.display();
   return 0;
}
