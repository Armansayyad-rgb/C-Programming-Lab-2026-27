#include <stdio.h>
struct Student{int id;char name[50];float marks;char grade;};
int main(void){struct Student s[100];int n=0,c,id,i;float sum;
menu: printf("1.Add 2.Display 3.Search 4.Average 5.Exit\n");if(scanf("%d",&c)!=1)return 1;
switch(c){case 1:if(n==100)break;printf("Enter ID, name, marks: ");if(scanf("%d%49s%f",&s[n].id,s[n].name,&s[n].marks)!=3)return 1;if(s[n].marks<0||s[n].marks>100)break;s[n].grade=s[n].marks>=90?'A':s[n].marks>=75?'B':s[n].marks>=60?'C':s[n].marks>=40?'D':'F';n++;break;
case 2:for(i=0;i<n;i++)printf("%d %s %.2f %c\n",s[i].id,s[i].name,s[i].marks,s[i].grade);break;
case 3:if(scanf("%d",&id)!=1)return 1;for(i=0;i<n;i++)if(s[i].id==id){printf("%s %.2f %c\n",s[i].name,s[i].marks,s[i].grade);break;}if(i==n)puts("Not found");break;
case 4:sum=0;for(i=0;i<n;i++)sum+=s[i].marks;if(n)printf("Average: %.2f\n",sum/n);break;case 5:return 0;default:puts("Invalid choice");}goto menu;}
