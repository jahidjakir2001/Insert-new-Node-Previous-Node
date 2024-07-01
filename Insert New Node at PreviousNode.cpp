#include<bits/stdc++.h>
using namespace std;
struct node
{
      int data;
      struct node *next;
};
void Traversal(struct node *head)
{
      while(head!=NULL)
      {
            cout<<"Element:"<<head->data<<endl;
            head=head->next;
      }
}
struct node *InsertNewNodeatPreviousNode(struct node *head,struct node *previus,int value)
{
      struct node *ptr=NULL;
      ptr=(struct node *)malloc(sizeof(struct node));
      ptr->data=value;
      ptr->next=previus->next;
      previus->next=ptr;
      return head;
}
int main()
{
       struct node *head=NULL,*first=NULL,*second=NULL,*third=NULL;
       head=(struct node *)malloc(sizeof(struct node));
       first=(struct node *)malloc(sizeof(struct node));
       second=(struct node *)malloc(sizeof(struct node));
       third=(struct node *)malloc(sizeof(struct node));
       head->data=10;
       head->next=first;
       first->data=20;
       first->next=second;
       second->data=30;
       second->next=third;
       third->data=40;
       third->next=NULL;
       cout<<"Traversal Node Before add New Node:"<<endl;
       Traversal(head);
       //Insert New Node at Previous Node
       head=InsertNewNodeatPreviousNode(head,head,50);
       cout<<"Traversal Node After add New Node at Previou Node:"<<endl;
       Traversal(head);
}
