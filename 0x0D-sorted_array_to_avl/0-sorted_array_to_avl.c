#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"



avl_t *sorted_array_to_avl(int *array, size_t size)
{   
    binary_tree_t *tree, *tree2 ;
    size_t n = size ;
    
    while( n !=0 ) {
        n = n / 2;
        tree -> n = array[n];
        tree->parent = NULL;
        tree2 = tree;

       

    }

}