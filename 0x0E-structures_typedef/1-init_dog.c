#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - check the code for Holberton School students.
 * @age : age
 * @name : name
 * @owner : owner
 * @d : pointer
 *return :pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

struct dog;

(*d).name = name;
(*d).owner = owner;
(*d).age = age;
}
