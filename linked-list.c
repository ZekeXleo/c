#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
}*start=NULL;
void create()
{
 int ch;
 do
 {
  struct node *new_node,*current;
  new_node=(struct node*) malloc(sizeof(struct node));
  printf("Enter data:");
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
  printf("do you want to continue?\n");
  scanf("%d",&ch);
 }
 while(ch!=0);
}
void display()
{
 int data;
 struct node*current;
 current =start;
 while (current !=NULL)
 {
  printf("%d\n",current->data);
  current =current->next;
 }
}
void search()
{
 int key;
 struct node*current;
 current=start;
 printf("enter the key to be searched:");
 scanf("\n");
 scanf("%d",&key);
 int f=0;
 while(current!=NULL)
 {
  if (current->data==key)
  {
   printf("Key is found\n");
   f=1;
   break;}
  current=current->next;
 }
 if (f==0)
 {
  printf("key not found\n");
 }
}
void main()
{
 create();
 display();
 search();
}
