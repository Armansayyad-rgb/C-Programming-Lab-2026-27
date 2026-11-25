#include <stdio.h>
int main(void){char s[100];int n=0;printf("Enter a string: ");if(scanf("%99s",s)!=1)return 1;while(s[n])n++;printf("Length: %d\n",n);return 0;}
