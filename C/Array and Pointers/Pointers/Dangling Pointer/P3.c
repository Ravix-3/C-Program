#include <stdio.h>
#include <stdlib.h>

int main() {
int* ptr = (int*)malloc(sizeof(int));
*ptr = 42;

free(ptr);

ptr = NULL;

if (ptr != NULL) {
printf("Dangling Pointer Value: %d\n", *ptr); // This will not be executed.
} else {
printf("The pointer is now NULL. It is safe to access it.\n");
}

return 0;
}