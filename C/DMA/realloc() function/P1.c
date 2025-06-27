// ptr=realloc(ptr, new-size)
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr, i , n1, n2;
 printf("Enter the number of elements to declare size required: ");
 scanf("%d", &n1);
 ptr = (int*) malloc(n1 * sizeof(int)); //memory allocated using malloc()
 printf("Addresses of previously allocated memory:\n");
 for(i = 0; i < n1; ++i)
 {
 printf("%p\n",ptr + i);
 }
 printf("\nEnter the number of elements to declare the new size required: ");
 scanf("%d", &n2);

 // rellocating the memory
 ptr = realloc(ptr, n2 * sizeof(int));
 printf("Addresses of newly allocated memory:\n");
 for(i = 0; i < n2; ++i)
 { 
 printf("%p\n", ptr + i);
 }
 free(ptr);
 return 0;
}
/*Addresses of previously allocated memory:
006E1678
006E167C
006E1680
006E1684
006E1688

Enter the number of elements to declare the new size required: 7
Addresses of newly allocated memory:
006E1678
006E167C
006E1680
006E1684
006E1688
006E168C*/