#include<stdio.h>

int main()
{
	int kor, eng, math;
	int sum = 0;

	math = 80;
	eng = 100;
	kor = 90;
	sum = 80 + 100 + 90;

	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("Sum : %d\n", sum);
	return 0;
}
warning: LF will be replaced by CRLF in report_card.c.
The file will have its original line endings in your working directory.
[1mdiff --git a/report_card.c b/report_card.c[m
[1mindex dba57ff..bf94047 100644[m
[1m--- a/report_card.c[m
[1m+++ b/report_card.c[m
[36m@@ -3,15 +3,18 @@[m
 int main()[m
 {[m
 	int kor, eng, math;[m
[32m+[m	[32mint sum = 0;[m
 [m
 	math = 80;[m
 	eng = 100;[m
 	kor = 90;[m
[32m+[m	[32msum = 80 + 100 + 90;[m
 [m
 	printf("This program print report card.\n");[m
 [m
 	printf("Korean : %d\n", kor);[m
 	printf("English : %d\n", eng);[m
 	printf("Math : %d\n", math);[m
[32m+[m	[32mprintf("Sum : %d\n", sum);[m
 	return 0;[m
 }[m
