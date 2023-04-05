#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *next;
};

void node_counter(struct node *head)
{
        int counter = 0;
        if (head == NULL)
        printf("The link list is empty \n");
        struct node *ptr;
        ptr = head;
        while (ptr != 0)
        {
                printf("we are in node %d \n", ptr->data);
                ptr = ptr->next;
                counter++;
        }
        printf("\n No. of node is %d \n", counter);

}
int main()
{
        struct node *head;

        head = malloc(sizeof(struct node));
        head->data = 45;
        head->next = NULL;

        struct node *current = malloc(sizeof(struct node));
        current->data = 98;
        current->next = NULL;
        head->next = current;

        current = malloc(sizeof(struct node));
        current->data = 150;
        current->next = NULL;
        head->next->next = current;

        current = malloc(sizeof(struct node));
        current->data = 110;
        current->next = NULL;
        head->next->next->next = current;

        current = malloc(sizeof(struct node));
        current->data = 28;
        current->next = NULL;
        head->next->next->next->next = current;

        current = malloc(sizeof(struct node));
        current->data = 75;
        current->next = NULL;
        head->next->next->next->next->next = current;

        current = malloc(sizeof(struct node));
        current->data= 100;
        current->next = NULL;
        head->next->next->next->next->next->next= current;
/**/
        node_counter(head);


        return 0;
}