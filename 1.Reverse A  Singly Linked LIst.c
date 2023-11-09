#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*temp,*temp2;

int main(){

	//creating a node..............
  struct Node *head = NULL;
  head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 1;
  head->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->data = 2;
  head->next->next = (struct Node *)malloc(sizeof(struct Node));
  head->next->next->data = 3;
  head->next->next->next = NULL;

	
        //call the function...................
  reverse(&head);


	//Print The Reverse Node.......................
  while(head != NULL){
  	printf("[%d]->",head->data);
  	head=head->next;
  }
	return 0;
}


	//Function For Reverse a node.............................
void reverse(struct Node** head_ref){
	while(*head_ref != NULL){
		temp2=(*head_ref)->next;
		(*head_ref)->next=temp;
		temp=(*head_ref);
		(*head_ref)=temp2;
	}
	(*head_ref)=temp;
}
