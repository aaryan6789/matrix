/*
 * matrix.h
 *
 *  Created on: Apr 25, 2018
 *      Author: hsahu
 */

#ifndef MATRIX_H_
#define MATRIX_H_

//void print_matrix(int** M, int rows, int cols);
void print_matrix(int rows, int cols, int M[rows][cols]);
void scaling(int rows, int cols, int M[rows][cols], int scale_factor);

#endif /* MATRIX_H_ */
