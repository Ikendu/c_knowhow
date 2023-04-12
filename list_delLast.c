#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void del_last(struct node *head)
{
        struct node *ptr = head;
        struct node *ptr2 = head;

        while (ptr->next != NULL)
        {
        }
}

void new_node(strunct node *head, int data)
{
        struct node *new = malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        while (head->next != NULL)
        {
                head = head->next;
        }
        head->next = new;
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 67;
        head->next = NULL;

        new_node(head, 90);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);
}