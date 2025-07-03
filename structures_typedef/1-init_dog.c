#include "dog.h"

/**
 * init_dog - инициализирует переменную типа struct dog
 * @d: указатель на структуру dog
 * @name: имя собаки
 * @age: возраст собаки
 * @owner: владелец собаки
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
