/* Password generator by m4jbz */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Defines the range for the rand() function. */
#define SPECIAL_CHARACTER_RANGE 93
#define SPECIAL_CHARACTER_OFFSET 33

/* Declaration of the used functions. */
int* makePassword(int n, int arr[]);
void printPassword(int n, int pass[]);

int main() {

	int n;

	printf("Password length: ");
	scanf("%d", &n);

	int array[n];
	
	printPassword(n, makePassword(n, array));

	return 0;
}

int* makePassword(int n, int arr[]) {

	/* Initialize the srand() function to generate always a new random number. */
	srand((unsigned int)time(NULL));

	for (int i = 0; i < n; i++) 
	{
		/* Generates the random value with the assigned range. */
		int randomValue = rand() % SPECIAL_CHARACTER_RANGE + SPECIAL_CHARACTER_OFFSET; 
		int specialCharacters = randomValue;
		arr[i] = specialCharacters;
	}

	return arr;
}

void printPassword(int n, int pass[]) {

	for (int i = 0; i < n; i++) {
		printf("%c", (char)pass[i]);
	}
	printf("\n");

}
