#include <iostream>
#include <string>

using namespace std;

#define N 5
#define M 5

void user_init(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		cout << "\n" << i + 1 << ") ";
		for (int j = 0; j < M; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

string convert_matrix_to_string(int matrix[N][M]) {

	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}

bool upperTriangularMatrix(int matrix[N][M]) {

	bool isMatrixUpper = true;



	return isMatrixUpper;
}