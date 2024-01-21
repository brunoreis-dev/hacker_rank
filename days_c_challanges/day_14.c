#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
  int data;
  struct Node *next;
} Node;

unsigned int hashFunction(const int *data)
{
  unsigned int hash = 0;
  while (*data)
  {
    hash = (hash * 31) + *data;
    data++;
  }
  return hash % 10000;
}

Node *insert(Node *head, int data)
{
  // Complete this function
  struct Node *newData = malloc(sizeof(struct Node));

  if (newData == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
  }

  newData->data = data;
  newData->next = NULL;

  if (head == NULL)
  {
    head = newData;
  }
  else
  {
    struct Node *current = head;

    while (current->next != NULL)
    {
      current = current->next;
    }

    current->next = newData;
  }

  return head;
}

void display(Node *head)
{
  Node *start = head;
  while (start)
  {
    printf("%d ", start->data);
    start = start->next;
  }
}
int main()
{
  int T, data;
  scanf("%d", &T);
  Node *head = NULL;
  while (T-- > 0)
  {
    scanf("%d", &data);
    head = insert(head, data);
  }
  display(head);
  free(head);
}
