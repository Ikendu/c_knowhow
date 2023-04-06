#include <stdio.h>

struct node
{
        int data;
        struct node *next;
};

void insert_end(struct node *head, int data)
{
        struct node *new;

        //ptr = head;
        new = malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        while (head->next != NULL)
        {
                head = head->next;
        }
        head->next = new;
}

void print_list(struct node *head)
{
        //struct node *getp;
        //getp = head;
        while (head != NULL)
        {
                printf("%d\n", head->data);
                head = head->next;
        }
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 45;
        head->next = NULL;

        insert_end(head, 58);
        insert_end(head, 60);
        insert_end(head, 70);
        insert_end(head, 75);
        insert_end(head, 45);

        print_list(head);

        return (0);

}