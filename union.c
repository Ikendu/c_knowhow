#include <stdio.h>
#include <string.h>

int main(void)
{
        struct menu/*union*/{
                float price;
                char name[40];
                char define[40];
        } dish, tea, drinks;

        strcpy(dish.name, "Okro Soup");
        strcpy(tea.name, "chololate drink");
        strcpy(drinks.name, "OOmpa Beer");

        dish.price = 250.20;
        tea.price = 150.50;
        //strcpy(drinks.price, 20.60);

        strcpy(dish.define, "Localy");
        strcpy(drinks.define, "Foregn mix");
        strcpy(tea.define, "Local Mix");
        //tea.define = "Local mix";

        printf("The Following are the details of our menu:");
        printf("\n %s, %.2f, %s \n", dish.name, dish.price, dish.define);
        printf("\n %s, %.2f, %s \n", tea.name, tea.price, tea.define);
        printf("\n %s, %.2f, %s \n", drinks.name, drinks.price, drinks.define);

        return 0;


}