#include <stdio.h>

int* returnDanglingPointer() {
int num = 20;
int* ptr = &num;
return ptr;
}

int main() {
int* danglingPtr = returnDanglingPointer();

return 0;
}