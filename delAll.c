#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};
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
struct node* del_all(struct node *head)
{
        struct node *temp = head;

        while (temp != NULL)
        {
                temp = temp->next;
                free(head);
                head = temp;
        }
        return (head);
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->next = NULL;
        head->data = 67;

        new_node(head, 60);
        new_node(head, 56);
        new_node(head, 89);
        new_node(head, 23);

        head = del_all(head);

        if (head == NULL)
        printf("The whole list is deleted");
        else
        {
                while (head != NULL)
                {
                      printf("%d\n", head->data);
                      head = head->next;
                }
        }
}