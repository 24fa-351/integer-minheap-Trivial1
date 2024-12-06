#include <stdio.h>
#include "some_heap.h"

int main() {
    // Create a heap with capacity of 10
    heap_t *heap = heap_create(10);

    // Insert elements into the heap
    heap_insert(heap, 5, NULL);
    heap_insert(heap, 3, NULL);
    heap_insert(heap, 8, NULL);
    heap_insert(heap, 1, NULL);
    heap_insert(heap, 6, NULL);

    printf("Heap after insertions:\n");
    heap_print(heap);

    // Remove the minimum element
    printf("Removing min element: %p\n", heap_remove_min(heap));
    printf("Heap after removal:\n");
    heap_print(heap);

    // Free the heap
    heap_free(heap);
    return 0;
}
