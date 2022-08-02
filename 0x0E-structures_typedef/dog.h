#ifndef _DOG_H_
#define _DOG_H_
/*
 *  dog_t - define s struct for a dog
 */
typedef struct dog dog_t;
/**
 * struct dog - define s struct for a dog
 * @name: params for dog name
 * @age: params for dog age
 * @owner: params for dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
