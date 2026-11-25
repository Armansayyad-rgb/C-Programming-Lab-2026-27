#include <stdio.h>
int main(void){float p,c,m;printf("Enter PCM marks: ");if(scanf("%f%f%f",&p,&c,&m)!=3||p<0||p>100||c<0||c>100||m<0||m>100)return 1;float total=p+c+m,avg=total/3;printf("Total: %.2f\nAverage: %.2f%%\n%s\n",total,avg,avg>=50?"ELIGIBLE":"NOT ELIGIBLE");return 0;}
