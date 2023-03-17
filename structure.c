#include <stdio.h>

int main()
{
        int i;

        struct automobile{
                int year;
                char make;
                int engine_power;
                float weight;
                char model;
        } merc, ikenga, ikendu, benz;

        printf("Which year did you bought Ikendu car?\n");
        scanf("%d", &ikendu.year);
        printf("What is the make?\n");
        scanf("%s", &ikendu.make);
        printf("What is the weight of the car?\n");
        scanf("%.2f", &ikendu.weight);
        printf("What are the model?\n");
            scanf("%s", &ikendu.model);

        printf("The details of your car are: \n");
        printf("Year: %d\n", ikendu.year);
        printf("Make: %s\n", ikendu.make);
        printf("Weight: %.2f\n", ikendu.weight);
        printf("Model available: %s\n");
            printf("%s", ikendu.model);
}