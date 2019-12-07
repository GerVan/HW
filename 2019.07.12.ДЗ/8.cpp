//Напишите программу, находящую k-ую порядковую статистику. Программа должна работать за время O(n) в среднем.

#include <iostream>

using namespace std;

int main()
{
	int i, j, n, x = 0, k;

	cin >> n >> k;
	int Array[n];

	for (i = 0; i < n; i++) {
		cin >> Array[i];
	}

	for (i = 0; i < (n - 1); i++) {
		for (j = (i + 1); j < n; j++) {
			if (Array[j] < Array[i]) {
				x = Array[j];
				Array[j] = Array[i];
				Array[i] = x;
			}
		}
	}

	cout << Array[k - 1];
}
