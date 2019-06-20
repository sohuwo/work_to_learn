#include "chap8t15.h"
#include <ctype.h>
#include <stdio.h>

void chap8t15(void)
{
	char msg[80] = { 0 };
	char encrypted_msg[80] = { 0 };
	char ch;
	int i = 0, shift,last;
	printf("Enter message to encrypted: ");
	while ((ch = getchar()) != '\n')
	{
		msg[i] = ch;
		i++;
	}
	last = i;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	for (i = 0; i < last; i++)
	{
		if (isupper(msg[i]))
			encrypted_msg[i] = (msg[i] - 'A' + shift) % 26 + 'A';
		else if (islower(msg[i]))
			encrypted_msg[i] = (msg[i] - 'a' + shift) % 26 + 'a';
		else
			encrypted_msg[i] = msg[i];
	}

	printf("Encrypted message: ");

	for (i = 0; i < last; i++)
	{
		printf("%c", encrypted_msg[i]);
	}
}