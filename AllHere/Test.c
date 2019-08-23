
//This is main
//Here include file
#include <stdio.h>
#include <string.h>
int main(int c,char *v[])
{
	//checks planet names
	const int num_planet = 9;
	int i, j;
	char *planets[] = { "Mercury","Venus", "Earth", \
		"Mars", "Jupiter", "Saturn", \
		"Uranus", "Neptune", "Pluto" };
	for (i = 1; i < c; i++)
	{
		for (j = 0; j < num_planet; j++)
			if (strcmp(v[i], planets[j]) == 0)
			{
				printf("%s is planet %d\n", v[i], j + 1);
				break;
			}
		if (j == num_planet)
			printf("%s is not a planet\n", v[i]);
	}
	return 0;
}