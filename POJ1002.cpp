#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
string Letter2Number(string letters);
void PrintTheSame(string numberArray[],int k);
int main()
{
	int datanumber = 0;
	string temp,temp1;
	cin >> datanumber;
	string* NumberArray = new string[datanumber];
	for (int i = 0; i < datanumber; i++)
	{
		cin >> temp;
		temp1 = Letter2Number(temp);
		NumberArray[i] = temp1;
	}
	sort(NumberArray, NumberArray + datanumber);
	PrintTheSame(NumberArray,datanumber);
	return 0;
}
void PrintTheSame(string numberArray[], int k)
{
	int time = 1;
	int flag = 1;
	for (int i = 0; i < k-1; i++)
	{
		if ((numberArray[i] == numberArray[i + 1])&&i!=k-2)
		{
			time++;
		}
		else if ((numberArray[i] == numberArray[i + 1]) && i == k - 2)
		{
			time++;
			cout << numberArray[i] << " " << time << endl;
			flag = 0;
			time = 1;
		}
		else if (numberArray[i] != numberArray[i + 1])
		{
			if (time != 1)
			{
				cout << numberArray[i] << " " << time << endl;
				flag = 0;
				time = 1;
			}
			else
			{
				time = 1;
			}
		}
	}
	if (flag == 1)
	{
		cout << "No duplicates."<<endl;
	}
}
string Letter2Number(string letters)
{
	int i = 0;
	string stemp;
	for (i = 0; letters[i] != '\0'; i++)
	{
		if (letters[i] == '-')
		{
			stemp = letters.erase(i, 1);
			letters = stemp;
			i--;
		}
		else if (letters[i] == 'A' || letters[i] == 'B' || letters[i] == 'C')
		{
			letters[i] = '2';
		}
		else if (letters[i] == 'D' || letters[i] == 'E' || letters[i] == 'F')
		{
			letters[i] = '3';
		}
		else if (letters[i] == 'G' || letters[i] == 'H' || letters[i] == 'I')
		{
			letters[i] = '4';
		}
		else if (letters[i] == 'J' || letters[i] == 'K' || letters[i] == 'L')
		{
			letters[i] = '5';
		}
		else if (letters[i] == 'M' || letters[i] == 'N' || letters[i] == 'O')
		{
			letters[i] = '6';
		}
		else if (letters[i] == 'P' || letters[i] == 'R' || letters[i] == 'S')
		{
			letters[i] = '7';
		}
		else if (letters[i] == 'T' || letters[i] == 'U' || letters[i] == 'V')
		{
			letters[i] = '8';
		}
		else if (letters[i] == 'W' || letters[i] == 'X' || letters[i] == 'Y')
		{
			letters[i] = '9';
		}
	}
	stemp = letters.insert(3, 1, '-');
	return letters;
}