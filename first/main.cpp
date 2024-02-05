#include <iostream>

#define N 5
#define M 5

using namespace std;

void user_init(int matrix[N][M]);
string convert_matrix_to_string(int matrix[N][M]);

int main() {

	int matrix[N][M];

	cout << "Init the matrix:\n";
	user_init(matrix);
	cout << convert_matrix_to_string(matrix);

	return 0;
}