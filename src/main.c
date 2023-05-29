#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Fonction pour effectuer l'instruction "sa"
void swap_a(int *stack_a, int size_a)
{
    if (size_a < 2)
        return;
    int temp = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = temp;
    printf("sa\n");
}

// Fonction pour effectuer l'instruction "pb"
void push_b(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
    if (*size_a < 1)
        return;
    stack_b[*size_b] = stack_a[0];
    (*size_b)++;
    for (int i = 0; i < *size_a - 1; i++)
        stack_a[i] = stack_a[i + 1];
    (*size_a)--;
    printf("pb\n");
}

// Fonction pour effectuer l'instruction "ra"
void rotate_a(int *stack_a, int size_a)
{
    if (size_a < 2)
        return;
    int first = stack_a[0];
    for (int i = 0; i < size_a - 1; i++)
        stack_a[i] = stack_a[i + 1];
    stack_a[size_a - 1] = first;
    printf("ra\n");
}

// Fonction pour vérifier si la pile a est triée
bool is_sorted(int *stack_a, int size_a)
{
    for (int i = 0; i < size_a - 1; i++)
    {
        if (stack_a[i] > stack_a[i + 1])
            return false;
    }
    return true;
}

// Algorithme de tri par insertion
void insertion_sort(int *stack_a, int size_a)
{
    int *stack_b = malloc(size_a * sizeof(int));
    int size_b = 0;

    while (!is_sorted(stack_a, size_a) || size_b > 0)
    {
        if (size_a >= 2 && stack_a[0] > stack_a[1])
            swap_a(stack_a, size_a);
        else if (size_a >= 1 && size_b >= 1 && stack_a[0] > stack_b[0])
        {
            swap_a(stack_a, size_a);
            swap_a(stack_b, size_b);
        }
        else if (size_a >= 1)
            push_b(stack_a, &size_a, stack_b, &size_b);
        else if (size_b >= 1)
            rotate_a(stack_b, size_b);
    }

    free(stack_b);
}
 
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Error: No input provided.\n");
        return 0;
    }

    int size_a = argc - 1;
    int *stack_a = malloc(size_a * sizeof(int));

    // Convertir les arguments en entiers et les stocker dans la pile a
    for (int i = 0; i < size_a; i++)
    {
        stack_a[i] = atoi(argv[i + 1]);
    }

    insertion_sort(stack_a, size_a);

    free(stack_a);

    return 0;
}
