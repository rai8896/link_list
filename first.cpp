#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;//node isliye ki next jo hai wo ek node ka adress store kar rha hai
node(int d)
{
    this->data=d;
    next=NULL;
}
};
void print(node* head)
{
    while (head!= NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main(int argc, char const *argv[])
{
    //dynamically
    node* n1=new node(1);
    node*head=n1;
    node* n2=new node(2);

    node* n3=new node(3);

    node* n4=new node(4);

    node* n5=new node(5);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
     n4->next=n5;

    
print(head);



    return 0;
}
