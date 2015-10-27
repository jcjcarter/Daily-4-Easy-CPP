// Daily 4 Easy CPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

char random(void);
int main(int argc, char *argv[])
{
	srand(time(NULL));

	int length = 10;
	int count = 1;

	int i, j;
	

	if (argc == 1)
		length = atoi(argv[1]);
	else if (argc >= 2) {
		length = atoi(argv[1]);
		count = atoi(argv[2]);
	}

	for (j = 0; j < length; j++)
	{
		for (i = 0; i < length; i++) {
			printf("%c", random());
		}
		printf("\n");
	}
    return 0;
}

char random(void) {

	char a;

	int i = rand() % (10 + 26 + 26);

	if (i < 10)
		a = i % 10 + '0';
	else if (i < (10 + 26))
		a = i % 26 + 'a';
	else
		a = i % 26 + 'A';
	return a;
}

