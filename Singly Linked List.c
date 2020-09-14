
/**********************************************

	Singly Linked List

***********************************************/

#include <stdio.h>
#include <stdlib.h>

/******** Global declaration of the node structure *********/

typedef struct node
{
    int data;
    struct node * link;
}NODE;

/*********************************************************/


/************************ Used Functions *****************/

NODE* insert_begin(NODE *head,int data);

NODE* insert_end(NODE *head,int data);

void display_list(NODE *head);

/********************************************************/


/*________________________ Main Function ________________*/

int main()
{
    NODE *head=NULL;
	
    NODE *n1=(NODE*)malloc(sizeof(NODE));
    n1->data=50;
    n1->link=NULL;

    head=n1;

    head=insert_begin(head,40);
    head=insert_begin(head,30);
    head=insert_begin(head,20);
    head=insert_begin(head,10);

    display_list(head);

    head=insert_end(head,60);
    head=insert_end(head,70);
    head=insert_end(head,80);
    head=insert_end(head,90);
    head=insert_end(head,100);

    display_list(head);
	
	return 0;
}

/*__________________END of Main Function ________________*/


NODE* insert_begin(NODE *head,int data)
{
    NODE *newNode=(NODE*)malloc(sizeof(NODE));
    newNode->data=data;
    newNode->link=head;
    head=newNode;
    return head;
}

NODE* insert_end(NODE *head,int data)
{
    NODE *newNode;
    NODE *temp=head;

    while(temp->link!=NULL)
        temp=temp->link;

    newNode=(NODE*)malloc(sizeof(NODE));
    newNode->data=data;
    newNode->link=temp->link;
    temp->link=newNode;
    return head;
}

void display_list(NODE *head)
{
    NODE* temp = head;
    while(temp!=NULL)
    {
        printf("\t%d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
