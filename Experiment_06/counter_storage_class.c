#include <stdio.h>
void countCalls(void){static int count=0;printf("Function has been called %d time(s).\n",++count);}
int main(void){for(int i=0;i<4;i++)countCalls();return 0;}
