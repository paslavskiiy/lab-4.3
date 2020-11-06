#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x,xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x - 1 < 0 && b - x != 0)
			F = a * (x * x) + b;
		if (x - 1 > 0 && b + x == 0);
		    F = (x - a) / x;
		if (!(x - 1 < 0 && b - x != 0))(!(x - 1 > 0 && b + x == 0));
		    F = x / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << c
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}