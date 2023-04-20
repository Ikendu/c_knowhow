#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void del_last(struct node *head)
{
       if (head == NULL)
       printf("The list is empty");
       else if (head->next == NULL)
       {
               free(head);
               head = NULL;
       }
       else
       {
               struct node *ptr = head;
               while (head->next != NULL)
               {
                       ptr = head;
                       head = head->next;
               }
                       ptr->next = NULL;
                       free(head);
                       ptr = NULL;
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

        del_last(head);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);
}