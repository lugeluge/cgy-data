#include <stdio.h>
int main6()
{
	const char* a = "I love Fishc.com!";
	printf("%s", a);
	int i;

	printf("The sixth character is %c\n\n", a[0]);

	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}

	printf("\n");
	return 0;
}
