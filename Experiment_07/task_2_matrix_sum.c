#include <stdio.h>
int main(void){int r,c,a[10][10],b[10][10];if(scanf("%d%d",&r,&c)!=2||r<1||r>10||c<1||c>10)return 1;for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&b[i][j]);puts("Sum of matrices:");for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}return 0;}
