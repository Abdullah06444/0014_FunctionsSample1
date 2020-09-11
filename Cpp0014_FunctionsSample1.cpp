#include <iostream>
using namespace std;

int isTriangular(int number)
{

	int i;
	for (i = 1; number > 0; i++)
		number -= i;
	if(number == 0)
		return 1;
	return 0;
}

int main()
{

	int x;
	do
	{

		cin >> x;
		if (x > 0)
			if (isTriangular(x))
				cout << x << " is a triangular number" << endl;
			else
				cout << x << " is NOT a triangular number" << endl;

	} while (x > 0);
}