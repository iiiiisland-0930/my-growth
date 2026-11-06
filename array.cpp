#include <iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[20];
	for (int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i < n - 1;i++)
	{
		for (int j = 0;j < n - 1 - i;j++)
		{
			if (a[j] <a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += a[i];
	}
	cout << sum / n << endl;
	a[n] = sum / n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - i;j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < n + 1;i++)
	{
		cout <<setw(6)<< a[i];
	}

	
	return 0;
}