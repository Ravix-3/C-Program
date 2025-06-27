#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Here, malloc() reserves a memory block of the size of an integer variable on the heap, given by the sizeof(int). 
    We also use the type cast operator to indicate that the result of malloc() is an integer pointer, i.e., (int*).
    Next, we assign the value 42 t*/
int* ptr = (int*)malloc(sizeof(int));
*ptr = 42;

free(ptr);

printf("Dangling Pointer Value: %d\n", *ptr);
return 0;
}
// Dangling Pointer Value: [undefined behavior]
// first run:Dangling Pointer Value: 12523128
// second run:Dangling Pointer Value: 11212408