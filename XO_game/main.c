/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>
#include <string.h>
#include <conio.h>

#include "operations.h"

int main(void){

	unsigned char matrix[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
	unsigned int count=1,row,column,i,j,status=0;
	unsigned char state;
	while(1){
		/* Represent the matrix*/
		for(i=0;i<3;i++){
			for(j=0;j<3;j++)
			{
				printf("%c \t",matrix[i][j]);

			}
			printf("\n");
		}


		if(count>=5){
			status=	check_status(matrix);
			if(status==1){

				printf("would you like to play another game [Y] [N] ?\n" );

				fflush(stdin);
						fflush(stdout);
				scanf("%c",&state);
					if(state == 'y'){

						reset_matrix(matrix);
						count=1;
						continue;

					}
					else if(state =='n'){
						printf("Thank you !");
						break;
					}
				}}
			 if((status == 0)    && (count>9)){

				printf("no winner !\n");
				printf("would you like to play another game [Y] [N] ?\n" );
				fflush(stdin);
						fflush(stdout);
				scanf("%c",&state);
					if(state=='y'){

						reset_matrix(matrix);
						count=1;
						continue;

					}
					else if(state =='n'){
						printf("Thank you !");
						break;
					}
				}


		printf("Enter raw:");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&row);

		printf("Enter column:");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&column);

		if(count%2 ==1){
			/*X player's turn "Odd" */
			count=play(1,matrix,row,column,count);

		}

		else if(count%2 == 0){
			/*O player's turn "Even" */
			count=play(0,matrix,row,column,count);

		}


		count++;


	}


	return 0;
}
