#include <stdio.h>

struct station{
        char id[10];
        char dept[15];
        char position[40];
        int deptcode;
};
typedef struct station ST;

struct personal{
        ST d;
        char name[30];
        char phone[12];
        char course[30];
};
typedef struct personal SP;

void infoDisplay(SP *ptr);
void getInfo(SP *ptr);
void showInfo(SP *ptr);

int main()
{
        SP info = {
                       {
                        "asp2020",
                        "Engineering",
                        "Chief Executive Officer",
                        20900,
                        },
                  "Aniede Chibundu David",
                  "08061632276",
                  "Computer Science",
                 };

                infoDisplay(&info);
                getInfo(&info);
                showInfo(&info);

}
void infoDisplay(SP *ptr)
{
        printf("The guiding info is displayed as follows: \n");
        printf("Officer's ID: %15s \n", ptr->d.id);
        printf("Officer's name: %27s \n", ptr->name);
        printf("Officer's Department: %s \n", ptr->d.dept);
        printf("Officer's Position: %25s \n", ptr->d.position);
        printf("Officer's Course: %20s \n", ptr->course);
        printf("Officer's Phone: %16s \n", ptr->phone);
}
void getInfo(SP *ptr)
{
        printf("\n Enter your details here: \n");
        printf("Name: \n");
        gets(ptr->name);
        printf("ID: \n");
        gets(ptr->d.id);
        printf("Department: \n");
        gets(ptr->d.dept);
        printf("Position: \n");
        gets(ptr->d.position);
        printf("Course Studied: \n");
        gets(ptr->course);
        printf("Phone: \n");
        gets(ptr->phone);
}
void showInfo(SP *ptr)
{
        printf("\n Confirm the details you have entered below\n\n");
        printf(" Name: %s \n", ptr->name);
        printf(" Office ID: %s \n", ptr->d.id);
        printf(" Department: %s \n", ptr->d.dept);
        printf(" Position: %s \n", ptr->d.position);
        printf(" Phone: %s \n", ptr->phone);
        printf(" Course Studied: %s \n", ptr->course);
}
