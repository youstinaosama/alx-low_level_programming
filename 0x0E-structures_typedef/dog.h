#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>
/**
 *  * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
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
