#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 1000
#define TABLE_SIZE 100003

struct PhoneBookEntry
{
  char key[MAX_NAME_LENGTH];
  char value[MAX_NAME_LENGTH];
};

struct HashNode
{
  struct PhoneBookEntry entry;
  struct HashNode *next;
};

struct HashTable
{
  struct HashNode *table[TABLE_SIZE];
};

unsigned int hashFunction(const char *key)
{
  unsigned int hash = 0;
  while (*key)
  {
    hash = (hash * 31) + *key;
    key++;
  }
  return hash % TABLE_SIZE;
}

void insertEntry(struct HashTable *hashTable, struct PhoneBookEntry *entry)
{
  unsigned int index = hashFunction(entry->key);

  struct HashNode *newNode = malloc(sizeof(struct HashNode));
  if (newNode == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
  }

  newNode->entry = *entry;
  newNode->next = hashTable->table[index];
  hashTable->table[index] = newNode;
}

struct PhoneBookEntry *findEntry(struct HashTable *hashTable, const char *key)
{
  unsigned int index = hashFunction(key);
  struct HashNode *currentNode = hashTable->table[index];

  while (currentNode != NULL)
  {
    if (strcmp(currentNode->entry.key, key) == 0)
    {
      return &(currentNode->entry);
    }
    currentNode = currentNode->next;
  }

  return NULL;
}

void structure(int n, struct HashTable *hashTable)
{
  char new[MAX_NAME_LENGTH];

  for (int i = 0; i < n; i++)
  {
    scanf(" %[^\n]s", new);

    struct PhoneBookEntry entry;
    sscanf(new, "%s %s", entry.key, entry.value);

    insertEntry(hashTable, &entry);
  }
}

void verify(char query[MAX_NAME_LENGTH], struct HashTable *hashTable)
{
  struct PhoneBookEntry *entry = findEntry(hashTable, query);

  if (entry != NULL)
  {
    printf("%s=%s\n", entry->key, entry->value);
  }
  else
  {
    printf("Not found\n");
  }
}

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  scanf("%d", &n);

  struct HashTable hashTable;

  for (int i = 0; i < TABLE_SIZE; i++)
  {
    hashTable.table[i] = NULL;
  }

  structure(n, &hashTable);

  char query[MAX_NAME_LENGTH];

  while (scanf("%s", query) != EOF)
  {
    verify(query, &hashTable);
  }

  for (int i = 0; i < TABLE_SIZE; i++)
  {
    struct HashNode *currentNode = hashTable.table[i];
    while (currentNode != NULL)
    {
      struct HashNode *nextNode = currentNode->next;
      free(currentNode);
      currentNode = nextNode;
    }
  }

  return 0;
}
