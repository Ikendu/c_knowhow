#include <stdio.h>
#include <stdlib.h>

/*struct node
{
        int data;
        struct node *next;
};

struct node* insert_end(struct node *ptr, int data)
{
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;

        ptr->next = temp;
        return temp;
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 56;
        head->next = NULL;

        struct node *ptr = head;

        ptr = insert_end(ptr, 23);
        ptr = insert_end(ptr, 30);
        ptr = insert_end(ptr, 40);
        ptr = insert_end(ptr, 45);

       ptr = head;
       while(ptr != NULL)
       {
               printf("%d\n", ptr->data);
               ptr = ptr->next;
       }

}
*/
struct node
{
        int data;
        struct node *next;
};

struct node* add_end(struct node *head, int data)
{
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;

        head->next = temp;

        return temp;
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        head->data = 57;
        head->next = NULL;

        struct node *ptr = head;

        ptr = add_end(ptr, 45);
        ptr = add_end(ptr, 67);
        ptr = add_end(ptr, 78);
        ptr = add_end(ptr, 780);

        ptr = head;

        while (ptr != NULL)
        {
                printf("%d\n", ptr->data);
                ptr = ptr->next;
        }

}