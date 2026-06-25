#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1,rear=-1;

void input(){
    int n;
    if(rear==max-1){
        printf(" \n Queue Overflow !"); 
        return;
    }

    if(front==-1){
        front=0;
    }
    rear++;
    printf("\n Input : ");
    scanf("%d",&n);
     
    queue[rear]=n;

}

void display(){
    int i;
    if(front == -1){
        printf(" \n Queue Underflow");
    }
    if(front>rear){
        printf("\n Queue doesn't contain any element");
    }  
    i=front;
    while (i<=rear)
    {
       printf(" %d ",queue[i]);
       i++;
    }
    
}

void delete(){
    if(front == -1 || front > rear){
        printf("\n Queue Underflow !");
    }
    else{
    printf("\n Deleted Value: %d ",queue[front]);
    front++;
    }
}

int main(){
    int choice,k;
    

do{
    printf("\n1.Input \n2.Display \n3.Delete \n4.Exit \n Enter Choice: ");
    scanf("%d",&choice);
switch(choice)
{
case 1:
    input();
    break;

case 2:
    display();  
    break;

case 3:
    delete();
    break;

case 4:
    exit(0);
    break;

default:
    printf("\n Enter valid choice ");
}
printf("\n \nEnter 0 to select new choice =  ");
scanf("%d",&k);
}while(k==0);
return 0 ;
}