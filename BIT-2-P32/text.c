#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void text(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//8�ֽ�/4�ֽ�=2
//	printf("%d\n", sz);	//2
//}
//int main()
//{
//	int arr[10] = { 0 };
//	text(arr);	//���������Ԫ�صĵ�ַ��8�ֽڡ�
//	return 0;
//}

////�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);	//abcdef
//	printf("%s\n", pc);		//abcdef
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";	//��"abcdef"�����ַ��������ַ��������ַ��ĵ�ַ����ŵ�p��
//	//*p='w'���󡾳����ַ������ܸġ�
//	printf("%p\n", p);	//00007FF6B1919C10
//	printf("%c\n", *p);	//a
//	printf("%s\n", p);	//abcdef
//	return 0;
//}

////"abcdef"����ֻ�ô�һ��
////����������
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe");
//	//}
//	//else
//	//{
//	//	printf("haha");	//haha
//	//}
//	if (p1 == p2)
//	{
//		printf("hehe");	//hehe
//	}
//	else
//	{
//		printf("haha");	//haha
//	}
//	return 0;
//}

////ָ������
//int main()
//{
//	int arr[10] = { 0 };//��������
//	int* arr1[10]; //����ָ�������
//	char* arr2[4]; //һ���ַ�ָ�������
//	char** arr3[5];//�����ַ�ָ�������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));//10 20 30 40
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;			/*1 2 3 4 5 6
						2 3 4 5 6 7
						3 4 5 6 7 8*/		
}