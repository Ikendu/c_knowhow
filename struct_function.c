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

STA structfunc(STA s);

int main(void)
{
        STA model;




        printf("The initial values for directions: \n");
        printf("Year: %d \n", info.year);
        printf("Car make: %s \n", info.make);
        printf("Car Engine power: %d \n", info.engine_power);
        printf("cost: $%6.2f \n\n", info.cost);

        model = structfunc(model);

        printf("The details of your car are: \n");

        printf("Year: %d\n", model.year);
        printf("Make: %s\n", model.make);
        printf("Cost: $%0.2f\n", model.cost);
        printf("Car Engine power: %dmkg\n", model.engine_power);


            return (0);
}
STA structfunc(STA s)
{
         printf("Which year did you bought Ikendu car?\n");
          scanf("%d", &s.year);
        printf("What is the make?\n");
          scanf("%s", &s.make);
        printf("What is the cost of the car?\n");
          scanf("%f", &s.cost);
        printf("What is the EngPower of the car?\n");
          scanf("%d", &s.engine_power);

        return s;
}

 /*  struct automobile{
                int year;
                char make[10];
                int engine_power;
                float cost;
        } info = {
        1990,
        "mk2020",
        8500,
        1500};
        */