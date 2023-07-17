#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog Structure.
 * @name : Name of dog (char *).
 * @age : Age of dog (float).
 * @owner : Dog's owner (char *).
 * Description : This is a structure of dogs identity.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
