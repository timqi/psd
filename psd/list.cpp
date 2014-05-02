#include "primitive.h"

void insert(Complex n, RNode *r)
{
    RNode *tmp = (RNode *)malloc(sizeof(RNode));
    tmp->dt = n;
    tmp->prev = r->prev;
    r->prev = tmp;
}

void destroy(RNode *r)
{
    RNode *tmp;
    for(tmp = r->prev; tmp != NULL; tmp = tmp->prev)
        free(tmp);
}

void insert_d(double n, KNode *r)
{
    KNode *tmp = (KNode *)malloc(sizeof(KNode));
    tmp->dt = n;
    tmp->prev = r->prev;
    r->prev = tmp;
}

void destroy_d(KNode *r)
{
    KNode *tmp;
    for(tmp = r->prev; tmp != NULL; tmp = tmp->prev)
        free(tmp);
}
