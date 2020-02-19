#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct node_t_ {
    unsigned int value;
    struct node_t_ *left;
    struct node_t_ *right;
} node_t;

void insert_node(node_t **root);

node_t *insert_key(node_t *root, unsigned int input);

void remove_node(node_t **root);

node_t *remove_key(node_t *root, unsigned int input);

node_t *minvalue(node_t *root);

node_t *maxvalue(node_t *root);

void show_inorder(node_t *root);

void show_preorder(node_t *root);

void show_postorder(node_t *root);

void show_stack_inorder(node_t *root);

void show_stack_inorder(node_t *root);

void show_stack_preorder(node_t *root);

void show_stack_postorder(node_t *root);
