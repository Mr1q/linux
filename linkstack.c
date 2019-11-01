/*
 * File:    stack.c
 * Author:  zentut.com
 * Purpose: linked stack implementation
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkstack.h"

/*
    init the stack
*/
void init(NODE *head)
{
    head = NULL;
}

/*
    push an element into stack
*/
NODE *push(NODE *head, int data)
{
    NODE *tmp = (NODE *)malloc(sizeof(NODE));
    if(tmp == NULL)
    {
        exit(0);
    }
    tmp->data = data;
    tmp->next = head;
    head = tmp;
    return head;
}
/*
    pop an element from the stack
*/
NODE *pop(NODE *head, int *element)
{
    NODE * tmp = head;
    *element = head->data;
    head = head->next;
    free(tmp);
    return head;
}
/*
    returns 1 if the stack is empty, otherwise returns 0
*/
int empty(NODE *head)
{
    return head == NULL ? 1 : 0;
}

/*
    display the stack content
*/
void display(NODE *head)
{
    NODE *current;
    current = head;
    if(current!= NULL)
    {
        printf("Stack: ");
        do
        {
            printf("%d ",current->data);
            current = current->next;
        }
        while (current!= NULL);
        printf("\n");
    }
    else
    {
        printf("The Stack is empty\n");
    }

}
