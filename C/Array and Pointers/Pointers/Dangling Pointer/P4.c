#include <stdio.h>

int main() {
int *ptr;

{
int x = 54;
ptr = &x; // acting as normal pointer
}

// now ptr is a dangling pointer
printf("%d %d", *ptr, x);

// prints garbage value
printf("%d", *ptr);

return 0;
}