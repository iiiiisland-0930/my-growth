#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[30][21];
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> name[i];
	}
	for (int j = 0;j < n-1;j++)
	{
		if (name[j][0] > name[j + 1][0])
		{
			
			for (int k = 0;k < 21;k++)
			{
				char temp[21];//use the strcpy to achieve thr goal of exchangge of thr whole string .
				strcpy_s(temp, name[j]);//Here we should use the 'strcpy_s'rather than the 'strcpy' because the former is the safer version.
				strcpy_s(name[j], name[j + 1]);
				strcpy_s(name[j + 1], temp);

			}
	
		}
	}
	for (int i = 0;i <n;i++)
	{
		cout << name[i] << endl;//cout the row is ok
	}

	return 0;
}