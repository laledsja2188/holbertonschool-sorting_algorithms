#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    quick_sort(array, n);
    print_array(array, n);
    return (0);
}
