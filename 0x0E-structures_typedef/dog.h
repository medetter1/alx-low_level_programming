#ifndef DOG
#define DOG
/**
 * description: infos dog
 * struct og - dog structure
 * @name: name of dog
 * @owner: the owner dog
 * @age: age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog first_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
first_dog *new_dog(char *name, float age, char *owner);
void free_dog(first_dog *d);
#endif
