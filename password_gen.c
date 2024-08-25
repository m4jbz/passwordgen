#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARACTER_RANGE 93
#define CHARACTER_OFFSET 33

int* create_password(int n, int arr[]);
void print_password(int n, int pass[]);

int main()
{
	int n;

	printf("Password length: ");
	scanf("%d", &n);

	int* password = malloc(sizeof(int) * n);
	
	print_password(n, create_password(n, password));

	free(password);

	return 0;
}

int* create_password(int n, int arr[])
{
	srand(time(NULL));

	for (int i = 0; i < n; i++) 
	{
		int character = rand() % CHARACTER_RANGE + CHARACTER_OFFSET; 
		arr[i] = character;
	}

	return arr;

	free(arr);
}

void print_password(int n, int password[])
{
	for (int i = 0; i < n; i++)
		printf("%c", (char)password[i]);

	printf("\n");
}
