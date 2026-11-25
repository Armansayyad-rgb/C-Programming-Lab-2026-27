#include <stdio.h>
struct student_record{char name[50];int roll_number;float total_marks;};
int main(void){struct student_record s[5];int top=0;for(int i=0;i<5;i++){printf("Enter name, roll number and total marks: ");if(scanf("%49s%d%f",s[i].name,&s[i].roll_number,&s[i].total_marks)!=3)return 1;if(s[i].total_marks>s[top].total_marks)top=i;}printf("Topper: %s\nRoll: %d\nMarks: %.2f\n",s[top].name,s[top].roll_number,s[top].total_marks);return 0;}
