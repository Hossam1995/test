/*
 * operations.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>
#include "operations.h"

int play(int value, unsigned char place[3][3],unsigned char row,unsigned char column,unsigned int count){


	if(place[row][column]== '*'){
if(value==1){
		place[row][column]='x';

		return count;
	}
else if(value==0){
	place[row][column]='o';
return count;
}}
	else{
		printf("Error: \"Place is taken, choose other location\"\n");
		return --count;
	}
return 0;
}
int check_status(unsigned char m[3][3]){
	if( ((m[0][0]+m[0][1]+m[0][2])==('x'*3)) || ((m[1][0]+m[1][1]+m[1][2])==('x'*3)) ||
		((m[2][0]+m[2][1]+m[2][2])==('x'*3)) || ((m[0][0]+m[1][0]+m[2][0])==('x'*3)) ||
		((m[0][1]+m[1][1]+m[2][1])==('x'*3)) || ((m[0][2]+m[1][2]+m[2][2])==('x'*3)) ||
		((m[0][0]+m[1][1]+m[2][2])==('x'*3)) || ((m[2][0]+m[1][1]+m[0][2])==('x'*3))){
		printf("player X is the winner \n");
		return 1;
		}
	else if( ((m[0][0]+m[0][1]+m[0][2])==('o'*3)) || ((m[1][0]+m[1][1]+m[1][2])==('o'*3)) ||
			((m[2][0]+m[2][1]+m[2][2])==('o'*3)) || ((m[0][0]+m[1][0]+m[2][0])==('o'*3)) ||
			((m[0][1]+m[1][1]+m[2][1])==('o'*3)) || ((m[0][2]+m[1][2]+m[2][2])==('o'*3)) ||
			((m[0][0]+m[1][1]+m[2][2])==('o'*3)) || ((m[2][0]+m[1][1]+m[0][2])==('o'*3))){
		printf("Player O is the winner \n");
		return 1;
	}
	else{
		return 0;
	}

}

void reset_matrix(unsigned char m[3][3]){
	unsigned char i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m[i][j]='*';
}
	}
}


