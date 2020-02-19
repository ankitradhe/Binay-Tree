#include "binary_tree.h"

void insert_node(node_t **root)
{
    unsigned int input = 0;

    printf("Please enter the value which needs to be stored\n");
    scanf("%d", &input);

    *root = insert_key(*root, input);
}

node_t *insert_key(node_t *root, unsigned int input)
{
    node_t *node = NULL;

    if (NULL == root) {
       node = (node_t *)malloc(sizeof(node_t)); 
       node->value = input;

       return node;
    }

    if (input > root->value) {
        root->right = insert_key(root->right, input);
    } else if (input < root->value) {
        root->left = insert_key(root->left, input);
    }

    return root;
}

void remove_node(node_t **root)
{
    unsigned int input = 0;

    printf("Please enter the value to be deleted\n");
    scanf("%d", &input);

    *root = remove_key(*root, input);
}

node_t *remove_key(node_t *root, unsigned int input)
{
    node_t *temp_node = NULL;

    if (NULL == root) {
        return NULL;
    }

    if (input > root->value) {
        root->right = remove_key(root->right, input);
    } else if (input < root->value) {
        root->left = remove_key(root->left, input);
    } else {
        if (NULL == root->left) {
            temp_node = root->right;
            free(root);
            return temp_node;
        } else if (NULL == root->right) {
            temp_node = root->left;
            free(root);
            return temp_node;
        }

        temp_node = minvalue(root->right);

        root->value = temp_node->value;
        root->right = remove_key(root->right, root->value);
    }

    return root;

}

node_t *minvalue(node_t *root)
{
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

node_t *maxvalue(node_t *root)
{
    while (root && root->right) {
        root = root->right;
    }
    return root;
}

void show_inorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    show_inorder(root->left);
    printf("%d->", root->value);
    show_inorder(root->right);
    return;
}

void show_preorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    printf("%d->", root->value);
    show_preorder(root->left);
    show_preorder(root->right);
    return;
}

void show_postorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    show_postorder(root->left);
    show_postorder(root->right);
    printf("%d->", root->value);
    return;
}

void show_stack_inorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    show_stack_inorder(root->right);
    printf("%d->", root->value);
    show_stack_inorder(root->left);
    return;
}

void show_stack_preorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    show_stack_preorder(root->right);
    show_stack_preorder(root->left);
    printf("%d->", root->value);
    return;
}

void show_stack_postorder(node_t *root)
{
    if (NULL == root) {
        return;
    }

    printf("%d->", root->value);
    show_stack_postorder(root->right);
    show_stack_postorder(root->left);
    return;
}
