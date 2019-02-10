/*
 * stockProgram.c
 *
 *  Created on: Feb 10, 2019
 *      Author: jianchaosun
 */

#include<stdio.h>
int main(){
	int numOfShare = 1000;
	float iniPrice = 45.50;
	float paid = iniPrice*numOfShare;
	float broker1 = paid*0.02;
	float sold = numOfShare*56.90;
	float broker2 = sold*0.02;
	float total = sold - broker2 - paid - broker1;
	printf("The amount paid: %.3f\n", paid);
	printf("Commission paid when bought: %.3f\n", broker1);

	printf("The amount sold: %.3f\n", sold);
	printf("Commission paid when sold: %.3f\n", broker2);

	printf("The total profit earned; %f\n", total);
	return 0;
}
