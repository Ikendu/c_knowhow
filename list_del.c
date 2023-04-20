#include <stdio.h>

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
        head->next= new;
}

struct node* del_node(struct node *head)
{
        struct node *temp = head;
        head = head->next;
        free(temp);
        temp = NULL;

        return head;
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 56;
        head->next = NULL;

        add_node(head, 78);
        add_node(head, 90);
        add_node(head, 65);
        add_node(head, 10);

        head = del_node(head);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);

}