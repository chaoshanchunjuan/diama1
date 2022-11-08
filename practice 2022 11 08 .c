#include<stdio.h>
#pragma warning (disable:4996)
//ц╟ещеепР
void sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
	
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main()
{
	int arr[10] = { 0,9,8,7,6,5,4,3,2,1 };
	for (int k = 0; k < 10; k++)
	{
		scanf("%d",&arr[k]);
	
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}