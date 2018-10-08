#include <stdio.h>

void push(void);
void pop(void);
void Display(void);
#define size 5
int arr[size];
int top=-1;

main(){
	int choice;
	
		do{
	printf("\nEnter your choice:\n 1-Insert Data  2-Delete Data\n 3-Display\n 4-Exit\n");
	scanf("%d",&choice);
		switch(choice){
			case 1:{
				push();
			}
			break;
			case 2:{
				pop();
				Display();
			}	
			break;
			case 3:{
				Display();
				break;
			}
			default:
				printf("Wrong Input");
		}
	}
	while(choice!=4);
}
void push(void){
	if (top==size-1)
	printf("Stack overflow");
	else{
		int value;
		printf ("Enter marks:\t");
		scanf("%d",&value);
		top=top+1;
		arr[top]=value;
	}
}
void pop(void){
	if (top<0)
	printf("List is empty");
	else{
		arr[top--];
	}
}
void Display(void){
	if(top==-1)
	printf("Stack is empty");
	else{
		printf("\n********Stack********\n");
	for (int i=top;i>=0;i--){
		printf("\n Value:%d",arr[i]);
	}
	printf("\n\n");
	}
}
