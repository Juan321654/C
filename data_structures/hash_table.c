#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct
{
    char *key;
    char *value;
} ht_item;

typedef struct
{
    ht_item **items;
    int size;
    int count;
} ht_hash_table;

ht_item *create_item(const char *key, const char *value)
{
    ht_item *item = malloc(sizeof(ht_item));
    item->key = strdup(key);
    item->value = strdup(value);

    return item;
}

ht_hash_table *create_hash_table()
{
    ht_hash_table *ht = malloc(sizeof(ht_hash_table));

    ht->size = TABLE_SIZE;
    ht->count = 0;
    ht->items = calloc((size_t)ht->size, sizeof(ht_item *));

    return ht;
}

void delete_item(ht_item *item)
{
    free(item->key);
    free(item->value);
    free(item);
}

void delete_hash_table(ht_hash_table *ht)
{
    for (int i = 0; i < ht->size; i++)
    {
        ht_item *item = ht->items[i];
        if (item != NULL)
        {
            delete_item(item);
        }
    }

    free(ht->items);
    free(ht);
}

int main()
{
    ht_hash_table *ht = create_hash_table();
    // TODO: Add hash function and insert function to use the hash table

    delete_hash_table(ht);
    return 0;
}
