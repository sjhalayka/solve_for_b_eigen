#include <iostream>
using namespace std;

#include "Eigen/Dense"
using namespace Eigen;

int main()
{
	MatrixXd X(2, 2);
	X(0, 0) = -4;
	X(1, 0) = 2;
	X(0, 1) = 3;
	X(1, 1) = -5;

	VectorXd y(2);
	y << 4, 5;

	VectorXd b(2);
	b = X.inverse() * y;

	cout << b << endl;

	return 0;
}