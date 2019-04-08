//Demonstration of functionality of get_positive_int
#include <cs50.h>
#include (stdio.h>

int get_positive_int(string prompt); //prototype

int main(void)
{
	int i = get_positive_int("Positive Integer: ")
	printf("%i\n", i);
}

//Prompt user for positive integer
int get_positive_int(string prompt)  //prototype
{
	int n;
	do //will do something at least once before checking while condition
	{
		n = get_int(prompt);
	}
	while (n < 1);
	return n;
}