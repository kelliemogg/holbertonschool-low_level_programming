#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct of dog
 * description: name, age, owner of dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* _DOG_H_ */
