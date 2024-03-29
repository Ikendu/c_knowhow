#include <stdio.h>
#include <string.h>
/*
Learning string array with pointer functions
*/
int main(void) {
	char str1[] = {'a', ' ',
	               's', 't', 'r', 'i', 'n', 'g', ' ',
	               'c', 'o', 'n', 's', 't', 'a', 'n', 't', ' ',
	               'a', 'r', 'r', 'a', 'y', 's', '\0'
	              };
	char str2[] = "Another character string";
	char *ptr_str = "Assign a string to a pointer.";
	int i;

	for (i = 0; str1[i]; i++)
		printf("%c ", str1[i]);
	printf("\n \n");

	for (i=0; str2[i]; i++)
		printf("%c ", str2[i]);

	printf("\n");
	printf("The length of str2 is %d ", strlen(str2));
	printf("\n \n");



	for (i = 0; *ptr_str; i++)
		printf("%c ", *ptr_str++);
	printf("\n");

	printf("%d", strlen(ptr_str));

	printf("\n \n");

	char str3[] = {};

	strcpy(str3, str2);

	printf("%s", str3);

	printf("\n \n");

	for (i = 0; str3[i]; i++)
		str3[i] = str1[i];
	str3[i] = '\0';

	printf("%s", str3);

	return 0;
}