#include <stdlib.h>
#include <stdio.h>

typedef struct node //using typedef
{
        int data;
        struct node *link;
}Node;
Node* reverse(Node *head)
{
        Node *prev = NULL;
        Node *next = NULL;

        while (head != NULL)
        {
                next = head->link;
                head->link = prev;
                prev = head;
                head = next;
        }
        head = prev;
        return (head);
}
void new_node(Node *head, int data)
{
        struct node *new = malloc(sizeof(Node));
        new->data = data;
        new->link = NULL;

        while (head->link != NULL)
        {
                head = head->link;
        }
        head->link = new;
}
int main()
{
        Node *head = malloc(sizeof(struct node));
        head->data = 40;
        head->link = NULL;

        new_node(head, 60);
        new_node(head, 45);
        new_node(head, 30);
        new_node(head, 55);
        new_node(head, 70);

        head = reverse(head);


        while (head != NULL)
        {
                printf("%d\n", head->data);
                head = head->link;
        }
        return (0);
}