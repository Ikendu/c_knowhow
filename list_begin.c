#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};
struct node* add_begin(struct node *head, int data)
{
        struct node *new = malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        new->next = head;
        head = new;

}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 60;
        head->next = NULL;

        head = add_begin(head, 56);//passed by value and not by reference
        head = add_begin(head, 30);
        head = add_begin(head, 15);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
 }