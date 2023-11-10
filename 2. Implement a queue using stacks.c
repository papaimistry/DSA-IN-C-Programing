#include<stdio.h>

#define max 10
int s1[max],s2[max];
int top1=-1,top2=-1,count=0;


void push1(int data){
	if(top1 == max-1){
		printf("\nStack is full.");
	}else{
		top1++;
		s1[top1]=data;
	}
}
void enqueue(int data){
		push1(data);
		count++;
}
void push2(int data){
	if(top2 == max-1){
		printf("\nStack is full.");
	}else{
		top2++;
		s2[top2]=data;
	}
}
int pop1(){
	return s1[top1--];
}
int pop2(){
	return s2[top2--];
}
void dequeue(){
	if(top1==-1 && top2==-1){
		printf("\nStack is empty.");
	}else{
		int i;
		for( i=0;i<count;i++){
			int a=pop1();
			push2(a);
		}
		int b=pop2();
		printf("%d is Dequeue.\n",b);
		count--;
		for(i=0;i<count;i++){
			int c=pop2();
			push1(c);
		}
	}
}
void display(){
	int i;
	for(i=0;i<=top1;i++){
		printf("[%d]->",s1[i]);
	}
}



int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	enqueue(4);
	display();
	
	
	return 0;
}
