#include <stdio.h>

int main()
{
        int i;

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

        printf("The initial values for directions: \n");
        printf("Year: %d \n", info.year);
        printf("Car make: %s \n", info.make);
        printf("Car Engine power: %d \n", info.engine_power);
        printf("cost: $%6.2f \n\n", info.cost);


        printf("Which year did you bought Ikendu car?\n");
          scanf("%d", &ikendu.year);
        printf("What is the make?\n");
          scanf("%s", &ikendu.make);
        printf("What is the cost of the car?\n");
          scanf("%f", &info.cost);
        printf("What is the EngPower of the car?\n");
          scanf("%d", &info.engine_power);

        printf("The details of your car are: \n");

        printf("Year: %d\n", ikendu.year);
        printf("Make: %s\n", ikendu.make);
        printf("Cost: $%0.2f\n", info.cost);
        printf("Car Engine power: %d \n", info.engine_power);


            return (0);
}