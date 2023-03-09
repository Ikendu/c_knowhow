#include <stdio.h>

/*declaring functions*/
int pass_digit(int *list, int max);
void pass_char(char *chara);

main()
{
	int list[6] = {4, 5, 2, 1, 8, 10};
	int *ptr_digit;
	ptr_digit = list;

	pass_digit(list, 6);
	pass_digit(ptr_digit, 6);
	printf("The values returned by pass_digit are %d and %d \n", pass_digit(list, 6), pass_digit(ptr_digit, 6));

	char chara[] = {"how are u doing"};
	char *ptr_sent;
	ptr_sent = chara;

	pass_char(chara);
	pass_char(ptr_sent);
	//printf("The values returned by pass_chara are %s and %s\n",pass_char(chara), pass_char(ptr_sent));

	return (0);

}
int pass_digit(int *list, int max)
{
	int i, sum = 0;

	for (i = 0; i < max; i++)
		sum += list[i];

		   return (sum);
}

void pass_char(char *chara)
{
	printf("%s\n", chara);
}
