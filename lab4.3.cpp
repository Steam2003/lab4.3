#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, a, b, c, F, xk, xp, dx;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	
	x = xp;
	cout << "----------------------------" << endl;
	cout << "|" << setw(7) << "x" << setw(5) << "|"
		<< setw(7) << "F" << setw(5) << "|" << endl;
	cout << "----------------------------"<< endl;

	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = -a * x * x + b;
		else
			if (x > 0 && b == 0)
				F = x / (x - c) + 5.5;
			else
				F = x / -c;
		cout << "|" << setw(7) << setprecision(2) << x << setw(5) << "|"
			<< setw(7) << setprecision(3) << F << setw(5) << "|" << endl;
		x += dx;
	
	}
	cin.get();
	return 0;
}
