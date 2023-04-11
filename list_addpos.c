#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};
void add_node(struct node *head, int data)
{
        struct node *newN = malloc(sizeof(struct node));
        newN->data = data;
        newN->next = NULL;

        while (head->next != NULL)
        {
                head = head->next;
        }
        head->next = newN;
}
void add_pos(struct node *head, int data, int pos)
{
        struct node *newN = malloc(sizeof(struct node));
        newN->data = data;
        newN->next = NULL;

        pos--;
        while (pos != 2)
        {
                head = head->next;
                pos--;
        }
        newN->next = head->next;
        head->next = newN;
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 50;
        head->next = NULL;

        add_node(head, 40);
        add_node(head, 50);
        add_node(head, 55);

        add_pos(head, 90, 3);

        while (head != NULL)
        {
                printf("%d\n", head->data);
                head = head->next;
        }
        return (0);
}
