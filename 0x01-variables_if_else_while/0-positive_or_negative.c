#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n=0; n<10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
