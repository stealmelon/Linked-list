//
//  main.c
//  Linked list
//
//  Created by s20181106115 on 2019/9/3.
//  Copyright © 2019 imnu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef int  ElemType;

typedef struct Node{
    int math;
    int data;
    struct Node *next;
}Node;

void InitList(Node *head,int n)
{
    Node *p,*s;
    head = (Node*)malloc(sizeof(Node));
    head -> next = NULL;
    p = head;
    for (int i = 1; i <= n; i++) {
        s = (Node*)malloc(sizeof(Node));
        scanf("%d",&s -> data);
        s -> next = NULL;
        p -> next = s;
        p = p -> next;
    }
}

void print(Node *head)
{
    Node *p;
    p = head -> next;
    while(p != NULL)
    {
        printf("%d ",p -> data);
        p = p -> next;
    }
}
int main(int argc, const char * argv[]) {
    Node *head;
    InitList(head, 5);
    print(head);
    return 0;
}
