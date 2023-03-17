#include <stdio.h>

int main()
{
        int i;

        struct automobile{
                int year;
                char make[10];
                int engine_power;
                float weight;
        } merc, ikenga, ikendu, benz;

        struct automobile info = {
                1990,
                "mk2020",
                8500,
                1500
        };

        printf("The initial values for directions: \n");
        printf("Year: %d \n", info.year);
        printf("Car make: %s \n", info.make);
        printf("Car Engine power: %d \n", info.engine_power);
        printf("weight: %6.2f \n\n", info.weight);


        printf("Which year did you bought Ikendu car?\n");
          scanf("%d", &ikendu.year);
        printf("What is the make?\n");
          scanf("%s", &ikendu.make);
        printf("What is the weight of the car?\n");
          scanf("%f", &info.weight);

        printf("The details of your car are: \n");

        printf("Year: %d\n", ikendu.year);
        printf("Make: %s\n", ikendu.make);
        printf("Weight: %0.2f\n", info.weight);


            return (0);
}