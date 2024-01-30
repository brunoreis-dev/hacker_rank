#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

int contains(Node *head, int element)
{
  Node *current = head;
  while (current != NULL)
  {
    if (current->data == element)
    {
      return 1;
    }
    current = current->next;
  }
  return 0;
}

Node *removeDuplicates(Node *head)
{
  Node *current = head;
  Node *prev = NULL;
  Node *temp = NULL;
  while (current != NULL)
  {
    temp = current->next;

    if (contains(temp, current->data))
    {
      if (prev == NULL)
      {

        head = temp;
      }
      else
      {
        prev->next = temp;
      }
      free(current);
    }
    else
    {
      prev = current;
    }
    current = temp;
  }
  return head;
}

Node *insert(Node *head, int data)
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = data;
  p->next = NULL;

  if (head == NULL)
  {
    head = p;
  }
  else if (head->next == NULL)
  {
    head->next = p;
  }
  else
  {
    Node *start = head;
    while (start->next != NULL)
      start = start->next;

    start->next = p;
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
  head = removeDuplicates(head);
  display(head);
}
