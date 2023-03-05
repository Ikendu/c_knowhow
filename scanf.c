#include <stdio.h>

main()
{
        int x, y;
        float xy;
        char z[90];

        printf("Enter two figures \n");
        scanf("%d %d", &x, &y);

        printf("Enter a decimal point number \n");
        scanf("%f", &xy);

        printf("Enter a character string \n");
        scanf("%s", z);

        int i, convt = 'a' - 'A';

        i = 0;
        while(z[i])
        {
                if((z[i] >= 'a') && (z[i] <= 'z'))
                z[i] -= convt;
                ++i;
        }


        printf("The details entered are as follows \n");

        printf("\n %d %d \n %f \n %s", x, y, xy, z);

        return 0;

}