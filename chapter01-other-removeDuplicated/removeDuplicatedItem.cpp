#include<stdio.h>
#include<string.h>
/*
ɾ�����������е��ظ�Ԫ�أ��������µĳ��ȣ�����ʹ���µ�����Ͷ���Ŀռ�

Given a sorted array, remove the duplicates in place such that each element appear only once
and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1,1,2],
Your function should return length = 2, and A is now [1,2].
*/

/********************************************************************
 Copyright (C), 2012-2013,
 FileName: removeDuplicatedItem.
 Description:
 Author: swinghu
 Created: 2015/02/28
 history: 28:2:2015 11:34 by
*********************************************************************/

int removeDuplicates(int A[], int n)
{
	if (n == 0)
		return 0;
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[index] != A[i])
			A[++index] = A[i];
	}
	return index + 1;
}

/*
	���ɾ����Ԫ����������ظ�����
*/

int removeDuplicates2(int A[], int n)
{
	if (n <= 2) return n;

	int index = 2;
	for (int i = 2; i < n;i++)
	{
		if (A[i] != A[i-2])
		{
			A[index++] = A[i];
		}
	}
	return index;
}
int main()
{
	int A[] = {1,2,3,3,4,4,5,6};
	int res = removeDuplicates(A, 8);
	printf("The new size of A: %d \n", res);
	for (int i = 0; i < res; i++)
	{
		printf("%d", A[i]);
	}
	return 0;
}