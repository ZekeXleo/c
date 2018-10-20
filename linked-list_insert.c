

























































































































































































































































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
 printf("Linkedlist is:\n");
 while (current !=NULL)
 {
  printf("%d\n",current->data);
  current =current->next;
 }
}
void insert()
{
 int ch,c=0,p;
 struct node *new_node1,*current;
 new_node1=(struct node*) malloc(sizeof(struct node));
 printf("Enter your element:\n");
 scanf("%d",&new_node1->data);
 printf("Where would you like to insert element?\n1.At the beginnning\n2.In the middle\n3.At the end.\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:new_node1->next=start;
         start=new_node1;
	 break;
  case 2:current=start;
	 printf("Enter position to be inserted in:");
	 scanf("%d",&p);
	 while(c<p-2)
	 {c++;
	  current=current->next;
	 }
	 new_node1->next=current->next;
	 current->next=new_node1;
	 break;
  case 3:current=start;
	 while(current->next!=NULL)
	 { 
	  current=current->next;
 	 }
	 current->next=new_node1;
	 new_node1->next=NULL;
	 break;
 default: printf("no selections made.");
 }
}
void main()
{
 create();
 display();
 insert();
 display();
}
