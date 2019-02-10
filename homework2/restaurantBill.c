/*
 * restaurantBill.c
 *
 *  Created on: Feb 8, 2019
 *      Author: jianchaosun
 */

#include<stdio.h>
int main(){
	double price = 88.67;
	double tax = 0.0675*price;
	double tips = (price+tax)*0.2;
	double total = price+tax+tips;
	printf("The Cost: %f\n",price);
	printf("The Tax: %f\n",tax);
	printf("The Tips: %f\n",tips);
	printf("The Total Bill: %f\n",total);
}
