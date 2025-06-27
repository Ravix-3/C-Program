#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,N;
    int sum=0;
    p=malloc(N*sizeof(int));
    printf("Enter the number of element N:");
    scanf("%d\n",&N);
     if(p==NULL) 
    { 
     printf("Unable to allocate memory");  
    }
    if(p!=NULL){
    for(int i=0;i<N;i++){
        scanf("%d",p+i);
        sum+=p[i];
    }
    for(int i=0;i<N;i++){
        printf("%d\t",p[i]);
    }
    }
    printf("\nSum of given element:%d",sum);
    free(p);
    return 0;
}