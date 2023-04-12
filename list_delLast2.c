#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void add_node(struct node *head, int data)
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
void del_last(struct node *head)
{
        struct node *temp = head;
        struct node *temp2 = head;

        while (temp->next != NULL)
        {
                temp2 = temp;
                temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
        temp = NULL;

        return (0);
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 67;
        head->next = NULL;

        add_node(head, 69);
        add_node(head, 90);
        add_node(head, 92);

        del_last(head);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);
}