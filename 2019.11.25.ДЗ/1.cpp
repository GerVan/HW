/*Напишите программу, находящую натуральные корни уравнения
2020X +2021Y=78487894
эффективным перебором. В комментариях напишите, почему перебор - эффективный*/

#include <iostream>

using namespace std;

int main() {
	int y=0,r,i=0,x=0;

	r= 78487894 / 2020;

	for (i = 0; i < k; i++) {
		x = 78487894-y*2021;
		if (x % 2020 == 0) {
			cout << x / 2020 << "  " << y << endl;
    }
		y++;
}
}
