#ifndef DOG_H
#define DOG_H

/**
 * struct dog - структура для хранения информации о собаке
 * @name: имя собаки
 * @age: возраст собаки
 * @owner: владелец собаки
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
