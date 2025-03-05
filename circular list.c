#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
 struct node *prev;
}N;
N *head=NULL;
int count=0;
 void create(){
    N *newnode,*temp=head;
    char ch;
    do{
     newnode=(N*)malloc(sizeof(N));
      printf("enter the node data\t");
      scanf("%d",&newnode->data);
      if(head==NULL){
         head=temp=newnode;
         newnode->prev=head;
         newnode->next=head;
         count++;
      }else{
           newnode->prev=temp;
           temp->next=newnode;
           temp=newnode;
           newnode->next=head;
           head->prev=newnode;
           count++;
      }
        printf("do you want to continue(Y/N)\t");
        scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y'); 
    return;
 }
 void insert_at_begin(){
   N *newnode;
   newnode=(N*)malloc(sizeof(N));
    printf("enter the node data\t");
    scanf("%d",&newnode->data);
   if(head==NULL){
   head=newnode;
   newnode->next=head;
   newnode->prev=head;
   count++;
   }
   else{ 
    newnode->next=head;
    newnode->prev=head->prev;
     head->prev=newnode;
    head=newnode;
    count++;
   }
   return;
 }
 void  insert_at_end(){
 N *newnode,*temp;
 temp=head;
 newnode=(N*)malloc(sizeof(N));
 printf("enter the node data\t");
 scanf("%d",&newnode->data);
     if(head==NULL){
        newnode->prev=head;
        newnode->next=head;
       head=newnode;
       count++;
     }
     else{
     do{
        temp=temp->next;
        }while(temp->next!=head);
      temp->next=newnode;
       newnode->prev=temp;
       newnode->next=head;
       head->prev=newnode;
       count++;
      }return;
 }
 void insert_at_pos(){
  int pos;
  printf("enter the position to add\t");
  scanf("%d",&pos); 
  if(pos==1){
   insert_at_begin();
  }else if(pos==count+1){
   insert_at_end();
  }
   else{
   N *newnode;
   newnode=(N*)malloc(sizeof(N));
   printf("enter the node data\t");
   scanf("%d",&newnode->data);
   N *temp=head;
    for(int i=1;i<(pos-1);i++){
      temp=temp->next;
    }newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next->prev=newnode;
    count++;
   }return;
 }
 void display(){
  N *temp=head;
   do{
   printf("%d->",temp->data);
   temp=temp->next;
   }while(temp!=head);
  printf("(back to head)");
  return;
 }
 void delete_at_begin(){
  if(head==NULL){
   printf("NOTHING TO DELETE");
   return;
  }
  else if(head->next==head){
  free(head);
   head=NULL;
   count--;
   return;
  }N *temp=head;
  do{
   temp=temp->next;
  }while(temp->next!=head);
  temp->next=head->next;
  free(head);
  head=temp->next;
  head->prev=temp;
  count--;
  return;
 }
 void delete_at_end(){
  N *temp=head;
  if(temp==NULL){
   printf("NOTHING TO DELETE");
   return;
  }else if(temp->next==head){
    count--;
    head=NULL;
    free(temp);
    return;
  }
  do{
   temp=temp->next;
  }while(temp->next!=head);
  head->prev=temp->prev;
  temp->prev->next=head;
  free(temp);
  count--;
  return;
 }
 void delete_at_pos(){
  int pos;
  printf("enter the position to delete a node\t");
  scanf("%d",&pos);
   if(pos==1){
   delete_at_begin();
  }else if(pos==count){
   delete_at_end();
  }else{
   N *temp=head;
   
   for(int i=1;i<pos;i++){
    temp=temp->next;
   }temp->next->prev=temp->prev;
   temp->prev->next=temp->next;
   count--;
   free(temp);
  }return;
 }
 
 
 int main(){
   create();
   display();
   printf("\nsize is : %d\n",count);
  insert_at_begin();
   display();
    printf("\nsize is : %d\n",count);
  insert_at_end();
   display();
    printf("\nsize is : %d\n",count);
  insert_at_pos();
  display();
   printf("\nsize is : %d\n",count);
  delete_at_begin();
  display();
   printf("\nsize is : %d\n",count);
  delete_at_end();
  display();
   printf("\nsize is : %d\n",count);
  delete_at_pos();
  display();
   printf("\nsize is : %d\n",count);
 }
