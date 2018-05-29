#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<list>
#include<algorithm>

#define pb push_back

using namespace std;

typedef long long int ll;

int binary_search(int arr[],int start,int end,int key)
	{
		
		while(start<=end)
			{
			int mid=start+(end-start)/2;
				
				if(arr[mid]>key)
					{
						end=mid-1;
					}
				else if(arr[mid]<key)
					{
						start=mid+1;
					}
				else if(arr[mid]==key)
					{
						return mid;
					}
			}
			return -1;
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

