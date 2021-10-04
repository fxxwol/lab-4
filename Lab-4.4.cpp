#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;

	cout << "xp= "; cin >> xp;
	cout << "xk= "; cin >> xk;
	cout << "dx= "; cin >> dx;
	cout << "R= "; cin >> R;


	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= 0)
			y = -1 / 2.0 * x;
		else
			if (x > 0 && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (x > R && x <= 2 * R)
					y = sqrt(R * R - pow(x - R, 2));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
		cout << endl;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
