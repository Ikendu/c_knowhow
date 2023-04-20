#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
        int data;
        struct node *next;
}Node;
void new_node(Node *head, int data)
{
        Node *new = malloc(sizeof(Node));
        new->data = data;
        new->next = NULL;

        while (head->next != NULL)
        {
                head = head->next;
        }
        head->next = new;
}
void exchange(Node *head)
{
        Node *p, *q;
        int temp;

        if(!head || !head->next)
        return;

        p = head;
        q = head->next;
        while(q)
        {
                temp = p->data;
                p->data = q->data;
                q->data = temp;

                p = q->next;
                q = p? p->next : 0;

        }
}
int main()
{
        Node *head = malloc(sizeof(Node));
        head->data = 1;
        head->next = NULL;

        new_node(head, 2);
        new_node(head, 3);
        new_node(head, 4);
        new_node(head, 5);
        new_node(head, 6);
        new_node(head, 7);
        new_node(head, 8);

        exchange(head);

        while (head)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
}