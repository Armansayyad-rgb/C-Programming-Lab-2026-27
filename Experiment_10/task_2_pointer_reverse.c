#include <stdio.h>
int main(void){int a[]={2,4,-6,5,8,-1};printf("Original: ");for(int *p=a;p<a+6;p++)printf("%d ",*p);printf("\nReverse: ");for(int *p=a+6;p!=a;)printf("%d ",*--p);puts("");return 0;}
