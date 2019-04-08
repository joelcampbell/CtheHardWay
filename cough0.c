//One way to print cough three times

#include <stdio.h>

int main(void)
{
	print("cough\n");
	print("cough\n");
	print("cough\n");
}

//Better way with a function
#include <stdio.h>

int main(void)
{
	for (int i = 0, i < 3; i++)
	{
		printf("cough\n);
	}
}

//Better still by defining cough as a function
//void below means that cough neither takes a value as input or returns a value as output

#include <stdio.h>

void cough(void)
{
	printf("cough\n");
}

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		cough();
	}
}


//While the above works, it isn't good style as the main function doesn't come first
//To fix that place a "prototype" at the beginning for the function stating it shall exist

#include <stdio.h>

void cough(void); //this is the prototype line

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		cough();
	}
}

void cough(void)
{
	printf("cough\n");
}

//This can be even further abstracted

#include <stdio.h>

void cough(void); //this is the prototype line

int main(void)
{
	cough(3);
}

void cough(int n) //cough takes one input and it is an integer, call it what you want other than n
{
	for (int i = 0; i < n; i++)
	{
		printf("cough\n");
	}
}