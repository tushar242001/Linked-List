
#include <iostream>
using namespace std;

struct node
{
    int data ;
    struct node *next;
};
struct node *p ,*h,*q;
void createNode(int x)
{
    h=(struct node *)malloc(sizeof(struct node));
    h->next=NULL;
    h->data=x;
}
void addLast(int x)
{
    if(h==NULL)
    {
        createNode(x);
    }
    else
    {
        p=h;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=(struct node *)malloc(sizeof(struct node));
        q->next=NULL;
        q->data=x;
        p->next=q;
        
    }
    
}
void addfirst(int x)
{
    if(h==NULL)
    {
        createNode(x);
    }
    else
    {
        q=(struct node *)malloc(sizeof(struct node));
        q->next=h;
        q->data=x;
        h=q;
    }
}
void display()
{
    if(h==NULL)
    {
        cout<<"Underflow";
    }
    else{
        p=h;
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
        
    }
}

int main()
{
    
    addLast(11);
    addLast(12);
    addLast(13);
    display();
    
    
//    while(n!=5)
//    {
//    cout<<"Enter which operation you want to perform \n\n1)Create New Node\n2)Insert Node in begining\n3)Insert Node in last\n4)Display all Nodes\n5)stop operations\n ";
//    cin>>n;
//    switch(n)
//    {
//        case 1:
//            cout<<"\nNode of Which element you want to create: ";
//            cin>>x;
//            createNode(x);
//            break;
//        case 2:
//            cout<<"\nNode of Which element you want to Insert: ";
//            cin>>x;
//            insertStart(x);
//            break;
//        case 3:
//            cout<<"\nNode of Which element you want to Insert: ";
//            cin>>x;
//            insertLast(x);
//            break;
//        case 4:
//            cout<<"\n\n";
//            display();
//            cout<<"\n\n";
//            break;
//        case 5:
//            break;
//    }
//}
  
}
