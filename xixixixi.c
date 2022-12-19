//void sort(void* s,int sz,int (*cmp)(void* e1,void* e2),int width,int (*swap)(void*e1,void*e2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)s + j * width, (char*)s + (j + 1) * width) > 0)
//			{
//				//交换
//				swap((char*)s + j * width, (char*)s + (j + 1) * width,width*sz);
//			}
//		}
//	 }
//}
//
//void swap(void* e1, void* e2,int chang)
//{
//	for (int i = 0; i < chang; i++)
//	{
//		int temp = (char*)e1;
//		(char*)e1 = (char*)e2;
//		(char*)e2 = temp;
//	}
//}
//
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int s[5] = { 9,8,7,6,5 };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int width =sizeof(s[0]);
//	sort(s, sz,cmp_int,width,swap);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", s[i]);
//	}
//
//	return 0;
//}
//
//void sort (void*arr, int sz, int cmp_int(const void* e1,const void*e2),int width,void Swap(void*e1,void*e2,int chang))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//比较+交换
//			cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width);
//			if (cmp_int > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width*sz);
//			}
//		}
//	}
//}
//
//void Swap(void* e1, void* e2,int chang)
//{
//	for (int i = 0; i < chang; i++)
//	{
//		int temp = *(char*)e1;
//		*(char*)e1 = *(char*) e2;
//		*(char*)e2 = temp;
//		((char*)e1)++;
//		((char*)e2)++;
//	}
//}
//
//int cmp_int(const void* e1, const void* e2,int chang)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[10] = { 9,7,8,5,6,3,4,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	sort(arr, sz,cmp_int,width,Swap);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_double(const void* e1, const void* e2)
//{
//	return *(double*)e1 > *(double*)e2 ? 1 : -1;
//}
//
//
//
//int main()
//{
//	//复习
//	//int数组用qsort排序
//	int arr[5] = { 5,4,3,2,1 };
//	int sz_int = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz_int, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz_int; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//float数组用qsort排序
//	float arr2[5] = { 5.0,4.0,3.0,2.0,1.0 };
//	int sz_float = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz_float, sizeof(arr2[0]), cmp_float);
//	for (int i= 0; i < sz_float; i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//	printf("\n");
//	//double数组用qsort排序
//	double arr3[5] = { 5.0,4.0,3.0,2.0,1.0 };
//	int sz_double = sizeof(arr3) / sizeof(arr3[0]);
//	qsort(arr3, sz_double, sizeof(arr3[0]), cmp_double);
//	for (int i = 0; i < sz_double; i++)
//	{
//		printf("%lf ", arr3[i]);
//	}
//	//结构体用qsort排序
//
//	struct Sub s[3] = { {"b",15},{"a",10},{"c",20}};
//	int sz_struct = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz_struct, sizeof(s[0]), cmp_struct);
//	for (int i = 0; i < sz_struct; i++)
//	{
//		printf("%d", s[i].age);
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

struct Sub
{
	char name;
	int age;
};

int cmp_struct(const void* e1, const void* e2)
{
	int cmp = strcmp(((struct Sub*)e1)->name, ((struct Sub*)e2)->name);
	//return ((struct Sub*)e1)->age - ((struct Sub*)e2)->age;
	return cmp;
}

int main()
{
	struct Sub s[3] = { {"b",15},{"a",10},{"c",20} };
	int sz_struct = sizeof(s) / sizeof(s[0]);
	qsort(s, sz_struct, sizeof(s[0]), cmp_struct);
	for (int i = 0; i < sz_struct; i++)
	{
		printf("%c ", s[i].name);
	}
	return 0;
}