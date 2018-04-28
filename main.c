/* main.c  *  Created on: Apr 25, 2018 | Author: hsahu */

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(){

	int A[3][3] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};

	int B[4][4] = { {1, 2, 3, 4},
					{5, 6, 7, 8},
					{9, 10, 11, 12},
					{13, 14, 15, 16}};

	print_matrix(3, 3, A);
	print_matrix(4, 4, B);
	scaling(4, 4, B, 2);



}
