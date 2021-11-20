//умова використання do-while
#include <iostream> 
#include <iomanip> 
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float minX, maxX, h, x;
	double y;

	cout << "Введіть minX ";
	cin >> minX;
	cout << "Введіть maxX ";
	cin >> maxX;
	cout << "Введіть h ";
	cin >> h;
	x = minX;
	// ya lublu zheku i igora
	while (x <= maxX + h / 2) {
		y = pow(x, 8) + 5 * pow(x, 5) - 5;
		cout << setw(10) << left << x << setw(8) << right << y << endl;
		x += h;
	}
}