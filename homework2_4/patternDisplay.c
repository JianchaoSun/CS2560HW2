/*
 * patternDisplay.c
 *
 *  Created on: Feb 10, 2019
 *      Author: jianchaosun
 */

#include<stdio.h>
int main(){
	int i =1;
	for(i =1;i<=10;i++){
		for(int j = 0; j <i ; j++){
			printf("*");
		}
		printf("\n");
	}

	for(i=10; i>0; i--){
		for(int j=0; j <i; j++){
			printf("*");
		}
		printf("\n");
	}
}
