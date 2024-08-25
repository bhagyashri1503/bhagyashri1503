#include <stdio.h>
#include <stdlib.h> 

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *p, *q, *r, *s;

    // Allocate memory for each node first
    p = (struct node*)malloc(sizeof(struct node));
    q = (struct node*)malloc(sizeof(struct node));
    r = (struct node*)malloc(sizeof(struct node));
    s = (struct node*)malloc(sizeof(struct node));

    // Now assign values and link the nodes
    p->data = 5;
    p->next = q;

    q->data = 10;
    q->next = r;

    r->data = 15;
    r->next = s;

    s->data = 20;
    s->next = NULL;

    // Print the values and addresses
    printf("The value of p = %d\nAddress of p->next = %p\n", p->data, p->next);
    printf("The value of q = %d\nAddress of q->next = %p\n", q->data, q->next);
    printf("The value of r = %d\nAddress of r->next = %p\n", r->data, r->next);
    printf("The value of s = %d\nAddress of s->next = %p\n", s->data, s->next);
}

<!---
bhagyashri1503/bhagyashri1503 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
