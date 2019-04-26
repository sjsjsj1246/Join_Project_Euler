#include <bits/stdc++.h>
using namespace std;

int main()
{
	int pibo[3] = { 1,2,0 };
	long long int sum = 2;
	for (int i = 0;; i++)
	{
		pibo[(i + 2) % 3] = pibo[(i + 1) % 3] + pibo[i % 3];
		if (pibo[(i + 2) % 3] > 4000000) break;
		else if (pibo[(i + 2) % 3] % 2 == 0)sum += pibo[(i + 2) % 3];
	}
	cout << sum;
}

/*
뻘짓
#include <bits/stdc++.h>
using namespace std;

#define ch(x) (x==0?0:x-'0')

void rev(char* arr, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}

void Plus(char* arr1, char* arr2, char* arr3)
{
	int len, up = 0;
	len = strlen(arr1) > strlen(arr2) ? strlen(arr1) : strlen(arr2);

	rev(arr1, strlen(arr1)); 
	rev(arr2, strlen(arr2));
	for (int i = 0; i <= len; i++)
	{
		arr3[i] = (ch(arr1[i]) + ch(arr2[i]) + up) % 10 + '0';
		up = ((ch(arr1[i])) + ch(arr2[i]) + up) > 9 ? 1 : 0;
	}
	if (arr3[len] == '0') arr3[len] = 0;
	rev(arr3, strlen(arr3));
	rev(arr1, strlen(arr1)); 
	rev(arr2, strlen(arr2));
}


int main()
{
	char A[3][10002] = { 0 };
	char sum[100000] = "2";
	int N;
	scanf("%d", &N);
	N -= 2;
	A[0][0] = '1'; A[1][0] = '2';
	for (int i = 0; i < N; i++)
	{
		Plus(A[i % 3], A[(i + 1) % 3], A[(i + 2) % 3]);

		rev(A[(i + 2) % 3], strlen(A[(i + 2) % 3]));
		if (ch(A[(i + 2) % 3][0]) % 2 == 0)
		{
			char temp[100000];
			strcpy(temp, sum);
			Plus(temp, A[(i + 2) % 3], sum);
		}
		rev(A[(i + 2) % 3], strlen(A[(i + 2) % 3]));
	}
	printf("%s ", sum);

	return 0;
}
*/