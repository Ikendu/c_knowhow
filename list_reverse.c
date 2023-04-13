#include <stdlib.h>
#include <stdio.h>

struct node
{
        int data;
        struct node *link;
};
struct node* reverse(struct node *head)
{
        struct node *prev = NULL;
        struct node *next = NULL;

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
void new_node(struct node *head, int data)
{
        struct node *new = malloc(sizeof(struct node));
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
        struct node *head = malloc(sizeof(struct node));
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