#include <stdio.h>
int main(void){int a,b,*p=&a,*q=&b;if(scanf("%d%d",p,q)!=2)return 1;printf("Sum = %d\n",*p+*q);return 0;}
