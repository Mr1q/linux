/*
 * File:    stack.h
 * Author:  zentut.com
 * Purpose: linked stack header file
 */
#ifndef LINKSTACK_H_INCLUDED
#define LINKSTACK_H_INCLUDED

typedef struct node
{
    int data;
    struct node* next;
} NODE;

int empty(NODE *s);
NODE *push(NODE *s, int data);
NODE *pop(NODE *s, int *data);
void init(NODE *s);
void display(NODE *head);

#endif  // LINKSTACK_H_INCLUDED
