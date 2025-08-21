#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

struct node *create(int);
void display(struct node*);
struct node *insert_front(struct node*, int);
struct node *insert_last(struct node*, int);
struct node *insert_after(struct node*,int,int);


int main(){
    struct node *p = NULL ;
    p = insert_front(p,20);
    p = insert_front(p,40);
    p = insert_front(p,30);
    p = insert_last(p,50);
    p = insert_after(p,40,45); 
    display(p);
    return 0;
}

struct node *create(int data)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    (*newnode).data = data;
    (*newnode).next = NULL;
    return newnode;
}

void display(struct node *head)
{   
    struct node *temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    temp = head;
    do {
        printf("%d ", temp->data);  
        temp = temp->next;          
    } while(temp != head);   
}

struct node *insert_front(struct node *head,int data)
{
    struct node *temp, *newnode;
    newnode = create(data);

    if (head == NULL) {
        (*newnode).next = newnode;
        head = newnode;
    } 
    else{
        temp = head;
        while ((*temp).next != head) {
            temp = (*temp).next;
        }

        (*temp).next = newnode;  
        (*newnode).next = head;   
        head = newnode;         
    }
    return head;
}

struct node *insert_last(struct node* head, int data)
{
    struct node *temp,*newnode;
    newnode = create(data);
    if(head == NULL){
        (*newnode).next = newnode;
        head = newnode;
    }
    else
    {
        temp = head;
        while((*temp).next != head){
            temp = (*temp).next;
        }
        (*temp).next = newnode;
        (*newnode).next = head;
    }
    return head;
}

struct node *insert_after(struct node* head, int target, int data)
{
    struct node *temp, *newnode;
    newnode = create(data);

    if (head == NULL) {
        (*newnode).next = newnode;
        return newnode;
    }

    temp = head;
    do {
        if ((*temp).data == target) {
            (*newnode).next = (*temp).next;
            (*temp).next = newnode;
            return head;
        }
        temp = (*temp).next;
    } while (temp != head);

    printf("Target %d not found!\n", target);
    free(newnode); // avoid leak
    return head;
}

