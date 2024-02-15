#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
      int number = atoi(argv[i]); // convert string to int

      node *n = malloc(sizeof(node));
      if (n == NULL)
      {
          return 1;
      }
      n->number = number; // n->number is equivalent to (*n).number
      n->next = list;
      list = n;
    }

    // print list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}

// ./linked_list.exe 1 2 3
