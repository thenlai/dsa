#include <stdlib.h>
#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

// stack link linked list

struct node {
	int num;
	struct node *next;
};

void init(struct node **head);
void add(struct node **head, int value);
void insert(struct node *head, int index, int value);
int empty(struct node *head);
int length(struct node *head);
void print(struct node *head);

int main(void) {
	struct node *head;

	init(&head);
	add(&head, 2);
	if(head == NULL) {
		printf("null head\n");
	}
	add(&head, 3);
	add(&head, 4);
	print(head);
	return 1;
}

void init(struct node **head) {
	*head = NULL;
}

void add(struct node **head, int value) {
	struct node *p;
	p = (struct node*) malloc(sizeof(struct node));
	p->next = NULL;
	p->num  = value;

	if(*head==NULL) {
		*head = p;
		printf("first %d\n", value);
	} else {
		//(*head)->next = p;
		p->next = *head;
		*head = p;
		printf("add %d\n", value);
	}
}

void insert(struct node *head, int index, int value) {

}

void clear(struct node *head) {
	
}

int empty(struct node *head) {
	return head==NULL;
}

int length(struct node *head) {
	int i = 0;
	struct node *p = head;
	while(p!=NULL || p->next!=NULL) {
		i++;
		p = p->next;
	}
	return i;
}

int get(struct node *head, int index) {
	return 1;
}

int set(struct node *head, int index, int value) {
	return 1;
}

// 删除元素
void delete(struct node *head, int index) {

}

//反转
struct node *reverse(struct node *head) {
	return head;
}

//
void print(struct node *head) {
	struct node *p = head;
	//printf("node = %d\n", head->next->num);
	if(p==NULL) return;

	while(1) {
		printf("node = %d\n", p->num);
		if(p->next==NULL) {
			break;
		}
		p = p->next;
	}

	// do {
	// 	printf("node = %d\n", p->num);
	// 	p = p->next;
	// } while (p->next != NULL);

	// while (p->next != NULL){
	// 	printf("node = %d\n", p->num);
	// 	p = p->next;
	// }
}