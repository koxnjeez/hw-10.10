#include "settings.h"

int reverse(int num) {
	static int sum = 0, count_t = 0, count = 0, t = 1, v = 10;
	string str_num = to_string(num); 
	int count_recurs = str_num.length();
	if (count_t < count_recurs - 1) {
		count_t++;
		t *= 10;
		reverse(num);
	}
	if (count < count_recurs) {
		count++;
		sum += (num % v) / (v / 10) * t;
		t /= 10;
		v *= 10;
		reverse(num);
	}
	else {
		return sum;
	}
}

int degree(int n, int d) {
	if (d == 0) {
		return 1;
	}
	else if (d == 1) {
		return n;
	}
	else {
		return degree(n, d - 1) * n;
	}
}

int sum(int a, int b) {
	if (b == a) {
		return a;
	}
	else {
		return sum(a, b - 1) + b;
	}
}

int main() 
{
	// task1
	cout << "reverse - " << reverse(1792) << "\n\n";
	
	// task2
	cout << "degree - " << degree(3, 4) << "\n\n";

	// task3
	cout << "sum - " << sum(1, 13) << "\n\n";

	Sleep(INFINITE);
}