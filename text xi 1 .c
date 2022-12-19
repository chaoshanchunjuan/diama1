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
	return strcmp(((struct Sub*)e1)->name, ((struct Sub*)e2)->name);
}

void test()
{
	struct Sub s[3] = { {"a",10},{"c",5},{"b",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct);
	
}



int main()
{
	test();
}