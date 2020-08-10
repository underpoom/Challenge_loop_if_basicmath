#include<iostream>
#include<math.h>
using namespace std;
int main() {
	double x1, x2, v = 0, _size, zm = 0;
	cin >> x1 >> x2;
	double cpx1 = x1, cpx2 = x2;
	_size = abs(x1 - x2) + 1;
	if (x1 < x2) {
		for (; x1 <= x2; v += x1, x1++)
			cout << x1 << " ";
		v /= _size;
		for (; cpx1 <= cpx2; cpx1++)
			zm += pow(cpx1 - v, 2);
	}
	else {
		for (; x1 >= x2; v += x1, x1--)
			cout << x1 << " ";
		v /= _size;
		for (; cpx1 >= cpx2; cpx1--)
			zm += pow(cpx1 - v, 2);
	}
	printf("\nAverage = %.1lf\nSD = %.2lf", v, sqrt(zm / (_size - 1)));
}