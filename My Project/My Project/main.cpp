#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	if (y == 0)
	{
		cout << "You can't enter zero as the denominator" << endl;
	}
	else
	{
		cout << "x / y: " << x / y << endl;
	}
}