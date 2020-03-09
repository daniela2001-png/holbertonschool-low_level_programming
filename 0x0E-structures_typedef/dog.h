#ifndef dog_h
#define dog_h

/**
 * struct dog - check the code for Holberton School students.
 *@name : name
 *@age : age
 *@owner : owner
 * Return: Always 0.
 */

struct dog
{

char *name;
float age;
char *owner;


};

/**
 * struct dog_da - check the code for Holberton School students.
 *@name : name
 *@age : age
 *@owner : owner
 *Return: Always 0.
 */
typedef struct dog_da
{

char *name;
float age;
char *owner;
} dog_da;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_da *d);
#endif
