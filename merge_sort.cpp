#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;
void merge(int arr[],int start,int mid,int end)
	{
		int A[1000];
		int i=start,j=mid+1,k=0;
		while(i<=mid && j<=end)
			{
				if(arr[i]>arr[j])
						A[k++]=arr[j++];
				else
						A[k++]=arr[i++];
			}
			if(i<=mid)
				{
					while(i<=mid)
							A[k++]=arr[i++];
				}
			if(j<=end)
				{
					while(j<=end)
							A[k++]=arr[j++];
				}
			int temp=0,l=start;
			for(l=start;l<=end;l++)
				{
					arr[l]=A[temp++];
				}
	}
void merge_sort(int arr[],int start,int end)
	{
		int mid=(start+end)/2;
		if(start<end)
			{
				merge_sort(arr,start,mid);
				merge_sort(arr,mid+1,end);
				merge(arr,start,mid,end);
			}
			
	}
int main()
	{
		int num,arr[10000],i=0;
		cin>>num;
		for(i=0;i<num;i++)
			{
				cin>>arr[i];
			}
		/*	sort(arr,arr+num);
			for(i=0;i<num;i++)
				{
					cout<<arr[i]<<" ";
				}
		*/
		int start=0,end=num-1;
		merge_sort(arr,start,end);
		for(i=0;i<num;i++)
			{
				cout<<arr[i]<<" ";
			}
				
	}
