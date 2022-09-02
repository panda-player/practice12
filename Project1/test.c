#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int print(int x)
//{
//
//	
//	if (x % 10 != 0)
//	{
//		print(x / 10);
//		printf("%d\n",x%10 );
//		
//	}
//	return 0;
//}
//int main()
//{
//
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//int print_n(int x)
//{
//	if (x >= 2)
//	{
//		
//		return x* print_n(x-1);
//		 
//	}
//	else
//	{
//		return 1;
//	}
//
//
//}
//int main()
//{
//	int b = 0;
//	int c;
//	scanf("%d", &c);
//	b=print_n(c);
//	printf("%d", b);
//	return 0;
//
//}
//int main()
//{
//	int d = 0;
//	int b = 1;
//	int c;
//	scanf("%d", &c);
//	while (c >1)
//	{
//		
//		b = b*c;
//		c--;
//	}
//	printf("%d", b);
//	return 0;
//
//
//int fake_strlen(char* arr)
//{
//	
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{	
//		return  1 + fake_strlen(arr + 1);
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	int c = fake_strlen(arr1);
//	
//	printf("%d", c);
//	return 0;
//}

