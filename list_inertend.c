#include <stdio.h>

struct node
{
        int data;
        struct node *next;
};

void insert_end(struct node *head, int data)
{
        struct node *ptr, *new;

        ptr = head;
        new = malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        while (ptr->next != NULL)
        {
                ptr = ptr->next;
        }
        ptr->next = new;
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 45;
        head->next = NULL;

        struct node *current = malloc(sizeof(struct node));
        current->data = 56;
        current->next = NULL;
        head->next = current;


        insert_end(head, 58);
        insert_end(head, 60);

        struct node *get;
        get = head;
        while (get != NULL)
        {
                printf("%d\n", get->data);
                get = get->next;
        }

        return (0);

}