#include <stdio.h>
#include <stdlib.h>

int* createValidPointer() {
int* ptr = (int*)malloc(sizeof(int)); // Allocate memory using dynamic memory allocation

if (ptr == NULL) {
// Handle allocation failure if needed
exit(1); // Exit the program with an error code
}

*ptr = 20; // Assign a value to the allocated memory
return ptr; // Return the dynamically allocated pointer
}

int main() {
int* validPtr = createValidPointer();

// Use the valid pointer safely
printf("Value: %d\n", *validPtr);

// Don't forget to free the allocated memory when done
free(validPtr);

return 0;
}