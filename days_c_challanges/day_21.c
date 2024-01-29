#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
  struct Node *left;
  struct Node *right;
  int data;
} Node;
Node *newNode(int data)
{
  Node *node = (Node *)malloc(sizeof(Node));
  node->left = node->right = NULL;
  node->data = data;
  return node;
}

typedef struct Queue
{
  Node *data;
  struct Queue *next;
} Queue;

Queue *createQueue()
{
  return NULL;
}

void enqueue(Queue **q, Node *value)
{
  Queue *newNode = (Queue *)malloc(sizeof(Queue));
  newNode->data = value;
  newNode->next = NULL;

  if (*q == NULL)
  {
    *q = newNode;
  }
  else
  {
    Queue *temp = *q;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

Node *dequeue(Queue **q)
{
  if (*q == NULL)
  {
    return NULL;
  }
  Queue *temp = *q;
  Node *value = temp->data;
  *q = temp->next;
  free(temp);
  return value;
}

void levelOrder(Node *root)
{
  if (root == NULL)
    return;

  Queue *q = createQueue();
  enqueue(&q, root);

  while (q != NULL)
  {
    Node *current = dequeue(&q);
    printf("%d ", current->data);

    if (current->left != NULL)
    {
      enqueue(&q, current->left);
    }
    if (current->right != NULL)
    {
      enqueue(&q, current->right);
    }
  }
}

Node *insert(Node *root, int data)
{
  if (root == NULL)
    return newNode(data);
  else
  {
    Node *cur;
    if (data <= root->data)
    {
      cur = insert(root->left, data);
      root->left = cur;
    }
    else
    {
      cur = insert(root->right, data);
      root->right = cur;
    }
  }
  return root;
}
int main()
{
  Node *root = NULL;
  int T, data;
  scanf("%d", &T);
  while (T-- > 0)
  {
    scanf("%d", &data);
    root = insert(root, data);
  }
  levelOrder(root);
  return 0;
}
