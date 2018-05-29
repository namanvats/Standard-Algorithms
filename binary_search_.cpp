//Program to search element in array:popularly callled as binary search:Recursive binary search is in this program
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<list>
#include<set>

using namespace std;
int binary_search(int arr[],int start,int end,int key)
	{
		
		if(start<=end)
			{
				int mid=(start+end)/2;
		if(arr[mid]>key)
			{
				binary_search(arr,start,mid-1,key);
			}
		else if(arr[mid]<key)
			{
				binary_search(arr,mid+1,end,key);
			}
		else if(arr[mid]==key)
			{
				return mid;
			}
		}
			else
				{
					return -1;
				}
		
}

int main()
	{
		ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int num,i=0;
        cin>>num;//No. of elements in array
        int arr[10000];
        for(i=0;i<num;i++)
        	{
        		cin>>arr[i];//taking array
			}
			sort(arr,arr+num);
			int start=0,end=num-1;
			int key;
			cin>>key;//taking input to search in the array
		int q=binary_search(arr,start,end,key);
		cout<<q<<" ";
		return 0;
		
	}
