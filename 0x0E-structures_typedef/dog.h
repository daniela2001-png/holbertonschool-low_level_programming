#ifndef DOG_H
#define DOG_H
/**
 *struct dog - check the code for Holberton School students.
 *@name : name
 *@age : age
 *@owner : owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
