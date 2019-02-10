/*
 * oceanLevels.c
 *
 *  Created on: Feb 10, 2019
 *      Author: jianchaosun
 */



#include<stdio.h>
int main(){
	float oceanLevel = 0;
	for(int i =1;i<=10;i++){
		oceanLevel += 1.5;
		if(i == 5||i==7||i==10){
			printf("In %d",i);
			printf(" years, Ocean level will be %.2f", oceanLevel);
			printf(" higher than current level. \n");
		}
	}
	return 0;
}
