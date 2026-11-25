#include <stdio.h>
int main(void){int a,b,sum=0;printf("Enter starting and ending numbers: ");if(scanf("%d%d",&a,&b)!=2)return 1;for(int i=a;i<=b;i++)if(i%2)sum+=i;printf("Sum of odd numbers = %d\n",sum);return 0;}
