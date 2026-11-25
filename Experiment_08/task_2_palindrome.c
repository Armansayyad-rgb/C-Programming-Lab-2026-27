#include <stdio.h>
#include <string.h>
int main(void){char s[100];if(scanf("%99s",s)!=1)return 1;int n=strlen(s),ok=1;for(int i=0;i<n/2;i++)if(s[i]!=s[n-i-1])ok=0;printf("%s is %sa palindrome\n",s,ok?"":"not ");return 0;}
