/******************************************************************
��һ���������飬дһ������ʵ�����������ҵ��� k ���Ԫ�ء�

ע�����

����Խ��������е�Ԫ�ص�λ�á�

��ʽ��

������������һ�����������һ������ k �������������е� k ���Ԫ�ء�

��������

[ 9��3��2��6��11 ]
k = 1

�������

11
*******************************************************************
�㷨˼�룺
	ֻҪ����������������У����num[n-1]���ɡ�
	���rank�������������ɴ�С���������num[n-1]
******************************************************************/
#include<stdio.h>


int rank(int num[],int n)
{	//���򡪡��ɴ�С
	int i,j;
	int temp;
	for( i=0;i<n;i++ )
	{
		for( j=i+1;j<n;j++ )
		{
			if( num[i]<num[j] )
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	return 0;
}


int input(int num[])
{	//��������Ԫ�ص�ֵ
	int count = 0;
	char ch;
	do
	{
		scanf("%d",&num[count]);
		count ++;
	}while( (ch = getchar())!='\n' );
	return count;
}


int num_output(int num[],int n)
{	//�����n���ֵ
	printf("%d \n",num[n-1]);
	return 0;
}


int main()
{
	int num[20] = {0};
	int count;
	int n;

	printf("��������Ԫ�أ�\n");
	count = input(num);	//���������ֵ

	rank(num,count);	//�ɴ�С����

	printf("���������n���ֵ,������n��ֵ:");

	scanf("%d",&n);		//����n��ֵ

	num_output(num,n);	//�����n��ֵ

	return 0;
}