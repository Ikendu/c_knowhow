#include <stdio.h>

struct automobile{
                int year;
                char make[10];
                int engine_power;
                float cost;
        } merc, ikenga, ikendu, benz;

        struct automobile info = {
                1990,
                "mk2020",
                8500,
                1500
        };

typedef struct automobile STA;

 structfunc(STA *ptr);

int main(void)
{
        STA model;

        printf("The initial values for directions: \n");
        printf("Year: %d \n", info.year);
        printf("Car make: %s \n", info.make);
        printf("Car Engine power: %d \n", info.engine_power);
        printf("cost: $%6.2f \n\n", info.cost);

        structfunc(&model);

        printf("\n The details of your car are: \n");

        printf("Year: %d\n", model.year);
        printf("Make: %s\n", model.make);
        printf("Cost: $%0.2f\n", model.cost);
        printf("Car Engine power: %dmkg\n", model.engine_power);


            return (0);
}
 structfunc(STA *ptr)
{
        //s = &(*ptr);

         printf("Which year did you bought Ikendu car?\n");
          scanf("%d", &(*ptr).year);
        printf("What is the make?\n");
          scanf("%s", &ptr -> make);
        printf("What is the cost of the car?\n");
          scanf("%f", &(*ptr).cost);
        printf("What is the EngPower of the car?\n");
          scanf("%d", &ptr -> engine_power);

        //return (*ptr);
}