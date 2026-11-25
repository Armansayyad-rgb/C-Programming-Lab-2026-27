#include <stdio.h>
int prime(int n){if(n<2)return 0;for(int i=2;i<=n/i;i++)if(n%i==0)return 0;return 1;}
int main(void){int a,b;printf("Enter lower and upper limits: ");if(scanf("%d%d",&a,&b)!=2)return 1;for(int i=a;i<=b;i++)if(prime(i))printf("%d ",i);puts("");return 0;}
