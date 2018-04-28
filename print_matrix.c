/*
 * print_matrix.c
 *
 *  Created on: Apr 25, 2018
 *      Author: hsahu
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void print_matrix(int rows, int cols, int M[rows][cols]){
	printf("Print Matrix of Dimension %d X %d\n", rows, cols);
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<cols; j++){
			printf("%d  ", M[i][j]);
		}
		printf("\n");				//<---- For Next Row
	}
	return;
}
