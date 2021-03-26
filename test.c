#include "binary_tree.h"

int main()
{
    unsigned int input = 0;
    node_t *root = NULL;

    while (1) {
        printf("Please select following options\n"
                "1. insert a node\n"
                "2. remove a node\n"
                "3. show data in inorder\n"
                "4. show data in preorder\n"
                "5. show data in postorder\n"
                "6. show data in inorder stack\n"
                "7. show data in preorder stack\n"
                "8. show data in postorder stack\n"
                "9. show leaf nodes\n"
                "Any. to exit\n");
        scanf("%d", &input);
        switch (input) {
            case 1:
                insert_node(&root);
                break;
            case 2:
                remove_node(&root);
                break;
            case 3:
                printf("In order\n");
                show_inorder(root);
                printf("NULL\n");
                break;
            case 4:
                printf("Pre order\n");
                show_preorder(root);
                printf("NULL\n");
                break;
            case 5:
                printf("Post order\n");
                show_postorder(root);
                printf("NULL\n");
                break;
            case 6:
                printf("Stack in order\n");
                show_stack_inorder(root);
                printf("NULL\n");
                break;
            case 7:
                printf("Stack preorder\n");
                show_stack_preorder(root);
                printf("NULL\n");
                break;
            case 8:
                printf("Stack postorder\n");
                show_stack_postorder(root);
                printf("NULL\n");
                break;
            case 9:
                printf("Leaf nodes\n");
                show_leaf(root);
                break;
            default:
                goto end;
        }
        input = 0;
    }

end:
    return 0;
}
