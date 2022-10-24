#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char str1[60] = "Welcome";
	char str2[60];

	int len;
	strcpy_s(str2,strlen(str1)+1,str1);

	printf("str2 = %s\n", str2);

	len = strlen(str2);
	printf("¦r¦êªø«×¬°%d\n", len);

	system("pause");
	return 0;
}

