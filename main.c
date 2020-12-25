/*
 * spicoli piersilvio uniba - computer science
 *
 * 	Write a program that helps a student
	elementary school to train in remembering
	the multiplication table. Use the rand () function
	to produce two positive one-digit integers. The
	program will have to ask “How much is 4 for
	5? ". Then the student will have to type the
	answer. In case the student answers
	correctly display positive feedback
	(eg. BRAVO !!!) otherwise a feedback from
	encouragement with the correct answer.
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include <time.h>

int main(){

	setbuf(stdout, NULL);
	srand(time(NULL));
	menu();
	return 0;
}
