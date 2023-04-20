#include<stdio.h>
/*
 * main - A program that prints the size of various computer types
 *
 * Return: 0 (Success
 * 
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of a int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long: %llu byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
