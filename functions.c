#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "functions.h"

int ris = 0;
int ans = 0;
int ch = 0;
int a_fun = 0, b_fun = 0;

void menu(){

	do{

		printf("Hello! let's start studying! \n\n");

		a_fun = a(a_fun);
		b_fun = b(b_fun);

		ris = a_fun * b_fun;

		//printf("%d", ris);
		printf("what is %d x %d? ", a_fun, b_fun);
		scanf("%d", &ans);

		feed(ris, ans);

		printf("do you want to try again? (1 - yes) (0 - no) \n");
		scanf("%d", &ch);

	}while(ch == 1);

	printf("thanks for playing with me! see you next time! \n");
}

void feed(int result, int answer){

	if(result == answer)
		printf("very good! your answer is correct! result -> %d\n", result);
	else
		printf("ouch! you were wrong! try again! result -> %d\n", result);
}
int a(int num1){ return rand()%10; }
int b(int num2){ return rand()%10; }
