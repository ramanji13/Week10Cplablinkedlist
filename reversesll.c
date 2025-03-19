#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
  int data;
  struct node * next;
 }N;
 N *head=NULL;
 
 void create(){
  N *newnode,*temp;
  char ch;
  do{
   newnode = (N*)malloc(sizeof(N));
   printf("enter the node data");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
      if(head==NULL){
        head=temp=newnode;
      }else{
        temp->next=newnode;
        temp=newnode;
      }printf("do you want to enter more(Y/N)");
      scanf(" %c",&ch);
  }while(ch=='Y'||ch=='y');
  return;
 }
  
 void reverse(){
  N *temp=head,*prev=NULL,*nnode;
   if(head==NULL){
     printf("LIST IS EMPTY");
     return;
   }else{
   while(temp!=NULL){
       nnode=temp->next;
       temp->next=prev;
       prev=temp;
       temp=nnode;
   }head=prev;
  } 
   return;
 } 
 void display(){
    N *temp=head;
    while(temp!=NULL){
      printf("%d->",temp->data);
      temp=temp->next;
      }
      printf("NULL\n");
 }
 void main(){
  create();
  display();
  printf("list after reverse\n");
  reverse();
  display();
 }
