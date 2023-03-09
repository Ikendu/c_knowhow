#include <stdio.h>

char printcar(char *str);

main()
{
	char stringer[] = {"I love my wife so much"};

	char *pts_str;
	pts_str = stringer;

	pts_str = "I want to know alot about C";

	printcar(stringer);
	printcar(pts_str);

	return (0);
}

char printcar(char *str)
{
	printf("%s\n", str);
}
