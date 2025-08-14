#ifndef LIST_H
#define LIST_H

#include <stddef.h>
struct Node {
    char *str;
    unsigned int len;
    struct list_s *next;
};

size_t print_list(const list_t *h);

#endif
