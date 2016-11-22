#include <iostream>
using namespace std;
int main()
{
	float number = 0.00, sum = 0.00;
	while (cin >> number)
	{
		if (number != 0.00)
		{
			for (int i = 2;; i++)
			{
				sum = sum + (1 / (float(i)));
				if (sum >= number)
				{
					cout << i - 1 << " " << "card(s)" << endl;
					sum = 0.00;
					break;
				}
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}