#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("sum=%d\n", c);
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	
	
	return 0;
}

