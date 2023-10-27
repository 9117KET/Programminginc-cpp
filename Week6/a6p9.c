/*
a6p79
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

An enhanced linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list *next;
};

//tutorial push_front function
struct list * push_front (struct list *my_list, int value)
{
    struct list * newe1;
    newe1 = (struct list *)malloc(sizeof(struct list));
    if (newe1 == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newe1 -> info = value;
    newe1 -> next = my_list;
    return newe1;
}
//tutorial push_back function
struct list * push_back(struct list * my_list, int value)
{
    struct list * cursor, *newe1;
    cursor = my_list;
    newe1 = ( struct list *)malloc (sizeof(struct list));
    if( newe1 == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newe1 -> info = value;
    newe1 -> next = NULL;
    if(my_list == NULL )
        return newe1;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newe1;
    return my_list;
}
//tutorial dispose_list function
void dispose_list(struct list* my_list)
{
    struct list *nextelem;
    while(my_list != NULL)
    {
        nextelem = my_list -> next;
        free(my_list);
        my_list = nextelem;
    }
}
//tutorial print_list function
void print_list(struct list* my_list)
{
    struct list *p;
    for (p = my_list; p; p = p->next)
    {
        printf("%d ", p -> info);
    }
    printf("\n");
}
//function to get the size of list
int get_size(struct list* my_list)
{
    int count = 0;
    struct list* p;

    for(p = my_list; p; p = p -> next)
        count++;
    return count;
}
   struct list *  insert_elem(struct list* my_list)
   {
    struct list *newe1 = NULL, *cursor, *elem = NULL;
    int size = get_size(my_list);
    int a, b;

    //memory allocation
    newe1 = (struct list*)malloc(sizeof(struct list));
    if(newe1 == NULL)
    {
        printf("Memory not allocated");
        exit(1);
    }
    //initializing cursor
    cursor = my_list;
    scanf("%d", &a);
    scanf("%d", &b);
    getchar();

    //invalid position entered prompt
    if(a < 0 || a>size)
    {
        printf("%s\n", "Invalid position!");
        return my_list;
    }
    //if position is at the start
    if(a == 0)
    {
        my_list = push_front(my_list, b);
        return my_list;
    }
    // if position is at the end
    if(a == size)
    {
        my_list = push_back(my_list, b);
        return my_list;
    }
    //if position is random
    for (int i = 0; i<a-1; i++)
    {
        cursor = cursor -> next;
    }
    elem = cursor -> next;
    newe1 -> info = b;
    cursor -> next = newe1;
    newe1 -> next = elem;
    return my_list;
    }
    void reverse_the_list(struct list **my_list)
    {
        struct list *ptr=NULL, *cursor = *my_list, *temp;
        while(cursor != NULL)
        {
            //reversing the list node by node using temp variable
            temp = cursor -> next;
            cursor -> next = ptr;
            ptr = cursor;
            cursor = temp;
        }
        *my_list = ptr;
    }
    int main()
    {
        char ch;
        int done = 0, n;

        //definition of a list and initialization
        struct list *my_list = NULL;
        struct list *elem = NULL;

        while(!done)
        {
            scanf("%c", &ch);
            switch(ch)
            {
            case 'a':
                scanf("%d", &n);
                getchar();
                my_list = push_back(my_list, n);
                break;
            case 'b':
                scanf("%d", &n);
                getchar();
                my_list = push_front(my_list, n);
                break;
            case 'r':
                if(my_list == NULL)
                {
                    elem = my_list -> next;
                    free(my_list);
                    my_list = elem;
                    break;
            case 'p':
                print_list(my_list);
                break;
            case 'q':
                dispose_list(my_list);
                done = 1;
                break;
            case 'i':
                my_list = insert_elem(my_list);
                break;
            case 'R':
                reverse_the_list(&my_list);
                break;
                }
            }
        }
        return 0;
    }
