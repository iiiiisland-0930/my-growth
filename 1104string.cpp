#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	char b[51];
	cin >> b;
	int len = strlen(b);
	for (int i = 0;i <len;i++)
	{
		if (65 <= b[i] && b[i] <= 90)
		{
			b[i] += 32;
		}
		else if (97 <= b[i] && b[i] <= 122)
		{
			b[i] -= 32;
		}
		else if (48 <= b[i] && b[i] <= 57)
		{
			b[i] = 0;
		}

	}
	for (int i = 0;i < len;i++)
	{
		if (b[i] != 0)
		{
			cout << (char)b[i];
		}
	}
	

	return 0;
}