#include<stdio.h>
int Maxsubsequence(const A[],int N);
int main(void)
{
	int K,i,Maxsum;
	int A[K];
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		scanf("%d",&A[i]);
	}
	Maxsubsequence(A,K);
	return 0;
}

int Maxsubsequence(const A[],int N)
{
	int ThisSum,MaxSum,i,j,k;
	MaxSum=0;
	for(i=0;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			ThisSum=0;
			for(k=i;k<=j;k++)
				ThisSum+=A[k];
			if(ThisSum>MaxSum)
				MaxSum=ThisSum; 
		}
	
	}
	printf("%d\n",MaxSum);
	return 0;
	
}
