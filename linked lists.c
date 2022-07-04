#include<stdio.h>
struct node{
	int data;
	struct node *link;
	
};

int main(){
	struct node *head =malloc(sizeof(struct node));
	head->data = 56;
	head ->link=NULL;
	
	head =malloc(sizeof(struct node));
	head->data = 98;
	head->link=NULL;
	return 0;
}