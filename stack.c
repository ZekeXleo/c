#include<stdio.h>
#include<stdlib.h>
#define size 50
int item,d,a[size],i,ch,top = -1;
void push()
{if(top>=size)
 {printf("Stack overflow");
 }
 else
 {top++;
  a[top]=item;
 }
}
void pop()
{if (top<0)
 {printf("stack underflow");
 }
 else
 {d=a[top];
  top--;
  printf("the deleted item is %d\n",&d);
 } 
}
int main()
{int c;
 do
 {printf("Do you want to 1.push or 2.pop:?\n");
  scanf("%d",&ch);
  printf("Enter item:\n");
  scanf("%d",&item);
  if(ch==1)
  {push();
   printf("Stack status:\n");
   for(i=0;i<top+1;i++)
   {printf("[%d]\n",a[i]);
   }
  }
  else if(ch==2)
  {pop();
   printf("Stack status:\n");
   for(i=0;i<top+1;i++)
   {printf("[%d]\n",a[i]);
   }
  }
 printf("Do you want to continue?(1=no)\n");
 scanf("%d",&c);
}
while(c!=1);
}  
