#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *link;
};

void print_list(struct node *head)
{
        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->link;
        }
}

void add_list(struct node *head, int data)
{
        struct node *newN = malloc(sizeof(struct node));
        newN->data = data;
        newN->link = NULL;

        while (head->link != NULL)
        {
                head = head->link;
        }
        head->link = newN; 
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 45;
        head->link = NULL;

        add_list(head, 50);
        add_list(head, 60);
        add_list(head, 39);
        add_list(head, 70);

        print_list(head);
}