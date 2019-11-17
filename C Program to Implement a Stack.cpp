#include<stdio.h>
#define MAXSIZE 5
struct stack{
	int arr[MAXSIZE];
	int top;
};
stack s;
void push();
int pop();
void display();
int main(){
	while(1){
		printf("Enter a choice 1 push, 2 pop , 3 display : ");
		int x;
		scanf("%d",&x);
		switch(x){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default :
				printf("invalid input");
		}
	}
}
void push(){
	int num;
	if(s.top == (MAXSIZE-1)){
		printf("Stack is full! ");
		return ;
	}
	else{
		printf("Enter element to be inserted : ");
		scanf("%d",&num);
		s.top = s.top +1;
		s.arr[s.top] = num;
	}
	return ;
} 

int pop(){
	int num;
	if(s.top == -1){
		printf("Stack is empty! ");
		return s.top;
	}
	else{
		num = s.arr[s.top];
		printf("Element popped : %d", s.arr[s.top] );
		s.top = s.top -1;
	}
	return num;
}
void display(){
	int i;
	if(s.top == -1){
		printf("Stack is empty!");
	}
	else{
		for(i = s.top ; i >= 0 ; i--){
			printf("%d		",s.arr[i]);
		}
		
	}
	printf("\n");
	return;
}
