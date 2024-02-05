#include <iostream>

#define N 5
#define M 5

using namespace std;

void user_init(int matrix[N][M]);
string convert_matrix_to_string(int matrix[N][M]);
bool upperTriangularMatrix(int matrix[N][M]);
bool lowerTriangularMatrix(int matrix[N][M]);

int main() {

	int matrix[N][M];

	cout << "Init the matrix:\n";
	user_init(matrix);
	cout << convert_matrix_to_string(matrix);

	string msgUpper = upperTriangularMatrix(matrix) ? "" : "n't";
	string msgLower = lowerTriangularMatrix(matrix) ? "" : "n't";

	cout << "\nYour triangular matrix is" << msgUpper << " upper";
	cout << "\nYour triangular matrix is" << msgLower << " lower";

	return 0;
}