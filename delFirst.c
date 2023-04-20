#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void del_first(struct node *head)
{
        if (head == NULL)
        printf("the node is already empty");
        else
        {
                struct node *temp = head;
                head = head->next;
                free(temp);
                temp = NULL;
        }
}

void new_node(struct node *head, int data)
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
        new_node(head, 10);
        new_node(head, 37);
        new_node(head, 95);
        new_node(head, 65);

        del_first(head);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);
}