#include<stdio.h>
  /**
    *main - Entry point
    *
    *Return: Always 0 (success)
    */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", (unsigned long) sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long) sizeof(int));
printf("Size of a long int: %zu byte(s)\n", (unsigned long) sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", (long) sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", (unsigned long) sizeof(float));
return (0);
}
