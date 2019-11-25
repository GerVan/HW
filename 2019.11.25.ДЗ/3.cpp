/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
        int N, count;
        cin >> N;

	count = N;
	if (N <= 5)
		N += N + N + 1;
	else
		N += N;



	bool *isPrime = new bool[N + 1];

        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i <= N; i++)
        {
                isPrime[i] = true;
        };

        for (int i = 2; i*i <= N; i++)
        {
                if (isPrime[i] && i <= (int)sqrt(N))
                        for (int j = i*i; j <= N; j += i)
                                isPrime[j] = false;;
        };
	int i = 2;
	while (count > 0)
	{
		if(!isPrime[i])
		{
			cout << i << " ";
			count--;
		};
		i++;
	};
        cout << endl;
        return 0;
}
