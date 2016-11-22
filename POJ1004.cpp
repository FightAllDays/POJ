#include <iostream>
using namespace std;
int main()
{
	float money = 0.0,totalmoney=0.0;
	for (int i = 0; i < 12; i++)
	{
		cin >> money;
		totalmoney = totalmoney + money;
	}
	cout << "$" << totalmoney / 12;
	return 0;
}