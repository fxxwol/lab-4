#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0, Pi;
	int n = 0;
	Pi = 4 * atan(1.0);

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "acos(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |" << endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk) {
		n = 1;
		a = (pow(x, 3)) / 6.;
		S = Pi / 2. - x - a;
		do {
			n++;
			R = pow((2 * n - 1) * x, 2) / (2. * n * (2 * n + 1));
			a *= R;
			S -= a;
		} while (abs(a) >= eps);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << acos(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
