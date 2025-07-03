#ifndef DOG_H
#define DOG_H

/**
 * struct dog - структура собаки
 * @name: имя
 * @age: возраст
 * @owner: владелец
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
