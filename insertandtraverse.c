#include <stdio.h>
#include <stdlib.h>

struct student
{
    int value;
    struct student *next;
};

typedef struct student node;
node *p, *q, *h;

int main()
{
    int x;
    h = 0, q = 0;

    while (1)
    {
        printf("-99 to break\n");
        scanf("%d", &x);
        if (x == -99)
            break;

        p = (node *)malloc(sizeof(node));

        if (h == 0)
        {
            p->value = x;
            p->next = NULL;
            h = p;
            q = p;
        }
        else
        {
            p->value = x;
            p->next = NULL;
            q->next = p;
            q = p;
        }
    }
    node *ptr = h;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}

/// split merge search