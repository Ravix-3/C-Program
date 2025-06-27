#include <stdio.h>
#include <stdlib.h>

int* createAndReturnPointer() {
int num = 42;
int* numptr = &num;
return numptr;
}

int main() {
int* ptr = createAndReturnPointer();
printf("Pointer Value: %d\n", *ptr);
printf("Pointer Value: %d", *ptr);

return 0;
}
// Pointer Value: 42
// Pointer Value: 1877276165