#include <stdio.h>
#include <time.h>

void local_time(void);
main()
{
        printf("About to call local time\n");
        local_time();
        printf("Just after calling local time \n");

        return (0);
}

void local_time(void)
{
        time_t now;
        //int i;
        //char *ptr;
        
        time(&now);
        
		printf("inside local_time function \n");
        //printf("The local time of your location is: ");
		// ptr = asctime(localtime(&now));
		 
		 //for (i = 0; ptr[i]; i++)
		//	 printf("%c", ptr[i]);
		printf("The local time of your current location is: %s\n", asctime(localtime(&now)));
        


}
