#ifndef dog_h
#define dog_h
void init_dog(struct dog *d, char *name, float age, char *owner);

#include <stdio.h>
#include <stdlib.h>

/**
 * *struct dog - a new type of data
 * *
 * *@name: name of dog
 * *@age: age of dog
 * *@owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};



#endif
