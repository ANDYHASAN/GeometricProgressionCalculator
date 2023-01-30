#include <iostream>
using namespace std;

int main()
{
	int a, r, n;
	float sum = 0;

	cout << "Enter the first term of the Geometric Progression: ";
	cin >> a;

	cout << "Enter the common ratio of GP: ";
	cin >> r;

	cout << "Enter the number of terms in GP: ";
	cin >> n;

	// Using formula to find sum of GP = a(r^n - 1)/r-1

	sum = (a * (pow(r, n) - 1)) / (r - 1);

	cout << "\nSum of the Geometric Progression = " << sum << endl;

	return 0;
}