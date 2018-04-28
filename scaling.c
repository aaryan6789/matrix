/*
 * scaling.c
 *
 *  Created on: Apr 25, 2018
 *      Author: hsahu
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void scaling(int rows, int cols, int M[rows][cols], int scale_factor){
	printf("Scaling the Matrix by %d Scale_Factor\n", scale_factor);

	for(int i =0 ; i<rows; i++) {
		for(int j = 0; j<cols; j++) {
			M[i][j] = M[i][j]*scale_factor;
			printf("%d  ", M[i][j]);
		}
		printf("\n");
	}
}

void downScale(int rows, int cols, int M[rows][cols]){
	printf("Down Scaling the Matrix\n");
	int res[rows/2][cols/2];

	for(int i = 0; i< rows; i+2) {
		for(int j = 0; j<cols; j+2) {
			int sum = M[i][j] + M[i][j+1] + M[i+1][j]+ M[i+1][j+1];
			res[a][b] = sum;
		}
	}

}
