#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};
struct node* add_begin(struct node **head, int data)
{
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;

        temp->next = *head;
        *head = temp;
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 10;
        head->next = NULL;

        add_begin(&head, 40);
        add_begin(&head, 50);
        add_begin(&head, 70);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
}