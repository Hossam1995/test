/*
 * operations.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
typedef enum t {Even,Odd}tt;
tt type;

int check_status(unsigned char m[3][3]);
int play(int value, unsigned char place[3][3],unsigned char row,unsigned char column,unsigned int count);
void reset_matrix(unsigned char m[3][3]);


#endif /* OPERATIONS_H_ */
