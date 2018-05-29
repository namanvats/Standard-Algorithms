#include<stdio.h>
int main()
{
	int m,n,arr1[1000],arr2[1000],arr3[10000];
	scanf("%d%d",&m,&n);//Taking the number of inputs in the both arrays
	int i=0,j=0;
	for(i=0;i<m;i++)
		{
			scanf("%d",&arr1[i]);
		}
	for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[j]);
		}
		//merging two sorted arrays in increasing order.
		i=0;j=0;int k=0;
		while(1)
			{
				if(arr1[i]>arr2[j])
					{
						arr3[k]=arr2[j];
						j++;k++;
							if(j==n)break;
					}
				if(arr2[j]>arr1[i])
					{
						arr3[k]=arr1[i];
						i++;k++;
							if(i==m)break;
					}
			}
		if(i==m && j<n)
			{
				while(j<=n)
					{
						arr3[k]=arr2[j];
						k++;j++;
					}
			}
		if(j==n && i<m)
			{
				while(i<=m)
					{
						arr3[k]=arr1[i];
						k++;i++;
					}
			}
		for(i=0;i<m+n;i++)
			{
				printf("%d ",arr3[i]);
			}
}
