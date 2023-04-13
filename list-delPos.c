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
void del_pos(struct node **head, int pos)
{
        struct node *curr = *head;
        struct node *prev = *head;

        if (*head == NULL)
        printf("The node is empty \n");
        else if (pos == 1)
        {
                *head = curr->next;
                free(curr);
                curr = NULL;
        }
        else
        {
                while (pos != 1)
                {
                        prev = curr;
                        curr = curr->next;
                        pos--;
                }
                prev->next = curr->next;
                free(curr);
                curr = NULL;
        }
}
int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 57;
        head->next = NULL;

        new_node(head, 67);
        new_node(head, 68);
        new_node(head, 63);
        new_node(head, 62);
        
        del_pos(&head, 2);

        while (head != NULL)
        {
                printf("%d \n", head->data);
                head = head->next;
        }
        return (0);
}