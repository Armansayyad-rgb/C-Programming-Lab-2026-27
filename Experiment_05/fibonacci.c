#include <stdio.h>
int fib(int n){return n<2?n:fib(n-1)+fib(n-2);}
int main(void){int n,a=0,b=1;printf("Enter number of terms: ");if(scanf("%d",&n)!=1||n<1||n>40)return 1;printf("Iterative: ");for(int i=0;i<n;i++){printf("%d ",a);int t=a+b;a=b;b=t;}printf("\nRecursive: ");for(int i=0;i<n;i++)printf("%d ",fib(i));puts("");return 0;}
