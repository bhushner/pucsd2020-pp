#include<stdio.h>
#include<stdlib.h>
#include"../include/addition.h"
#include"../include/division.h"  
#include"../include/multiplication.h"
#include"../include/percentage.h"
#include"../include/substraction.h"

int main(int argc,char *argv[]){
	char *str;
	char opr;
	int choice;
	unsigned long ff;
	double opr1,opr2,result;
	do{
		printf("------Calculator------\n");
		printf("1 .Addition\n");
		printf("2 .Substraction\n");
		printf("3 .Multiplication\n");
		printf("4 .Division\n");
		printf("5 .Percentage\n");
		printf("6. stop :: \n");
		scanf("%d",&choice);
		if(!((choice >= 1) && (choice <= 6 )))
			break;
		switch(choice){
			case 1 : printf("Enter first no.:\n");
				 scanf("%lf",&opr1);
				 printf("Enter Second no.:\n");
				 scanf("%lf",&opr2);
				 result=myAdd(opr1,opr2);
				 printf("\n%.2f + %.2f = %.2f\n",opr1,opr2,result);
				 break;
			case 2 : printf("Enter first no.:\n");
				 scanf("%lf",&opr1);
				 printf("Enter Second no.:\n");
				 scanf("%lf",&opr2);
				 result=mySub(opr1,opr2);
				 printf("\n%.2f - %.2f = %.2f\n",opr1,opr2,result);
				 break;
			case 3 : printf("Enter first no.:\n");
				 scanf("%lf",&opr1);
				 printf("Enter Second no.:\n");
				 scanf("%lf",&opr2);
				 result=myMult(opr1,opr2);
				 printf("\n%.2f * %.2f = %.2f\n",opr1,opr2,result);
				 break;
			case 4 : printf("Enter first no.:\n");
				 scanf("%lf",&opr1);
				 printf("Enter Second no.:\n");
				 scanf("%lf",&opr2);
				 result=myDiv(opr1,opr2);
				 printf("\n%.2f / %.2f = %.2f\n",opr1,opr2,result);
				 break;
			case 5 : printf("Enter first no.:\n");
				 scanf("%lf",&opr1);
				 printf("Enter Second no.:\n");
				 scanf("%lf",&opr2);
				 result=myPercentage(opr1,opr2);
				 printf("\n%.2f percentage of %.2f = %.2f\n",opr2,opr1,result);
				 break;
			case 6 : printf("EXIT\n");
				 exit(0);
			default : break;
				 
		}
	}while(choice != 6);
	return 0;
}
