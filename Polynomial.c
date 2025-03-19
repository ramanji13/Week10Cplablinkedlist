#include<stdio.h>
#include<stdlib.h>
 typedef struct polynomial{
    int power;
    int coeff;
    struct polynomial *next;
 }P;
 P *head=NULL;
 
 void create(){
  P *new,*temp;
  char ch;
  do{
  new = (P*)malloc(sizeof(P));
  printf("enter coefficient of a polynomial");
  scanf("%d",&new->coeff);
  printf("enter degree of a polynomial");
  scanf("%d",&new->power);
  new->next=NULL;
     if(head==NULL){
       head=temp=new;
 	}
 	else{
  	temp->next=new;
  	temp=new;
 	}printf("do you want to add more(Y/N)");
 	scanf(" %c",&ch);
  }while(ch=='Y'||ch=='y');
  return;
 }    
 void display(){
  P *temp=head;
  while(temp!=NULL){
     if(temp->next!=NULL){
        if(temp->next->coeff<0){
           if(temp->coeff==0){
          printf("0");   
         }else if(temp->power==0){
          printf("1");   
         }else
          printf("%dX^(%d)",temp->coeff,temp->power);
        }else{
         if(temp->coeff==0){
          printf("0+");   
        }else if(temp->power==0){
          printf("1");   
        }else
         printf("%dX^(%d)+",temp->coeff,temp->power);
      }
    }  
     else{
         if(temp->coeff==0){
          printf("0");   
        }
        else if(temp->power==0){
          printf("1");   
        }
         else  
           printf("%dX^(%d)",temp->coeff,temp->power);           
     } 
      
      temp=temp->next;
  }printf("=0");
  return;
 }
 void main(){
   create();
   display();
}
