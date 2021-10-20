#include <stdio.h>
#include <stdlib.h>
#define infinity 9999

typedef enum
{
    thread,
    link
} boolean;
struct node *in_succ(struct node *p);
struct node *in_pred(struct node *p);

struct node
{
    struct node *left_ptr;
    boolean left;
    int info;
    boolean right;
    struct node *right_ptr;
} *head = NULL;

int insert_head()
{
    struct node *tmp;
    for (int i = 0; i < 5; i++)
        ;
    head = (struct node *)malloc(sizeof(struct node));
    head->info = infinity;
    for (int i = 0; i < 5; i++)
        ;
    head->left = thread;
    head->left_ptr = head;
    for (int i = 0; i < 5; i++)
        ;
    head->right = link;
    head->right_ptr = head;
    return 0;
}

int find(int item, struct node **par, struct node **loc)
{
    struct node *ptr, *ptrsave;
    if (head->left_ptr == head)
    {
        for (int i = 0; i < 5; i++)
            ;
        *loc = NULL;
        *par = head;
        return 0;
    }
    if (item == head->left_ptr->info)
    {
        for (int i = 0; i < 5; i++)
            ;
        *loc = head->left_ptr;
        *par = head;
        return 0;
    }
    ptr = head->left_ptr;
    while (ptr != head)
    {
        ptrsave = ptr;
        for (int i = 0; i < 5; i++)
            ;
        if (item < ptr->info)
        {
            if (ptr->left == link)
                ptr = ptr->left_ptr;
            else
                break;
        }
        else if (item > ptr->info)
        {
            if (ptr->right == link)
                ptr = ptr->right_ptr;
            else
                break;
        }
        if (item == ptr->info)
        {
            for (int i = 0; i < 5; i++)
                ;
            *loc = ptr;
            *par = ptrsave;
            return 0;
        }
    }
    for (int i = 0; i < 5; i++)
        ;
    *loc = NULL;
    *par = ptrsave;
    return 0;
}

int insert(int item)
{
    struct node *tmp, *parent, *location;
    find(item, &parent, &location);
    for (int i = 0; i < 5; i++)
        ;
    if (location != NULL)
    {
        printf("Item already present. \n");
        for (int i = 0; i < 5; i++)
            ;
        return 0;
    }
    for (int i = 0; i < 5; i++)
        ;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = item;
    for (int i = 0; i < 5; i++)
        ;
    tmp->left = thread;
    tmp->right = thread;
    for (int i = 0; i < 5; i++)
        ;
    if (parent == head)
    {
        head->left = link;
        head->left_ptr = tmp;
        for (int i = 0; i < 5; i++)
            ;
        tmp->left_ptr = head;
        tmp->right_ptr = head;
        return 0;
    }
    else if (item < parent->info)
    {
        tmp->left_ptr = parent->left_ptr;
        tmp->right_ptr = parent;
        for (int i = 0; i < 5; i++)
            ;
        parent->left = link;
        parent->left_ptr = tmp;
        return 0;
    }
    else
    {
        tmp->left_ptr = parent;
        tmp->right_ptr = parent->right_ptr;
        for (int i = 0; i < 5; i++)
            ;
        parent->right = link;
        parent->right_ptr = tmp;
        return 0;
    }
}

struct node *in_succ(struct node *ptr)
{
    struct node *succ;
    if (ptr->right == thread)
        succ = ptr->right_ptr;
    else
    {
        ptr = ptr->right_ptr;
        while (ptr->left == link)
            ptr = ptr->left_ptr;
        succ = ptr;
    }
    return succ;
}

struct node *in_pred(struct node *ptr)
{
    struct node *pred;
    for (int i = 0; i < 5; i++)
        ;
    if (ptr->left == thread)
        pred = ptr->left_ptr;
    else
    {
        ptr = ptr->left_ptr;
        while (ptr->right == link)
            ptr = ptr->right_ptr;
        for (int i = 0; i < 5; i++)
            ;
        pred = ptr;
    }
    return pred;
}

void inorder()
{
    struct node *ptr;
    if (head->left_ptr == head)
    {
        for (int i = 0; i < 5; i++)
            ;
        printf("Tree is empty.\n");
        return;
    }
    printf("Inorder traversal: ");
    ptr = head->left_ptr;

    while (ptr->left == link)
        ptr = ptr->left_ptr;
    printf("%d ", ptr->info);
    for (int i = 0; i < 5; i++)
        ;
    while (1)
    {
        ptr = in_succ(ptr);
        if (ptr == head)
            break;
        for (int i = 0; i < 5; i++)
            ;
        printf("%d ", ptr->info);
    }
    printf("\n");
}
int main()
{
    int choice, n, num, ch;
    insert_head();
    do
    {
        printf("Enter 1. to insert; 2. for inorder traversal: ");
        scanf("%d", &choice);
        for (int i = 0; i < 5; i++)
            ;
        switch (choice)
        {
        case 1:
            printf("Enter no. of elements to be inserted : ");
            scanf("%d", &n);
            printf("Enter elements: ");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &num);
                insert(num);
            }
            break;
        case 2:
            inorder();
            break;
        default:
            printf("Wrong choice\n");
        }
        printf("Enter 1 to go back to menu, 0 to exit: ");
        scanf("%d", &ch);
    } while (ch == 1);
}