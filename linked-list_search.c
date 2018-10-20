#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
}*start=NULL;
void create()
 do
 {
  struct node *new_node,*current;
  new_node=(struct node*) malloc(sizeof(struct node));
  printf("Enter data:\n");
  scanf("%d",&new_node->data);
  new_node->next=NULL;
  if(start==NULL)
   {
    start=new_node;
    current=new_node;
   }
  else
   {
    current->next=new_node;
    current=new_node;
   }
  printf("Enter 1 to continue or 0 to exit:\n");
  scanf("%d",&ch);
 }
 while(ch!=0);
}
void display()
{
 int data;
 struct node*current;
 current =start;
 printf("Linkedlist is:\n");
 while (current !=NULL)
 {
  printf("%d\n",current->data);
  current =current->next;
 }
}
void search()
{int i,item;
 struct node *current;
 printf("Enter element to be searched:\n");
 scanf("%d",&item;);
 while(current->next!=NULL)
 {if
