// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    

long long ans=0;

/*void merge(long long* arr,int s,int mid,int e)
{
	int n1=mid-s+1;
	int n2=e-mid;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++)
	{
		left[i]=arr[i+s];
	}
	for(int i=0;i<n2;i++)
	{
		right[i]=arr[i+mid+1];
	}
	int s1=0;
	int s2=0;
	int k=s;

	while(s1<n1 && s2<n2)
	{
		if(left[s1]<=right[s2])
		{
			arr[k]=left[s1];
			s1++;
			k++;
		}
		else
		{
			ans+=n1-s1;
			arr[k]=right[s2];
			s2++;
			k++;
		}
	}
	while(s1<n1)arr[k++]=left[s1++];
	while(s2<n2)arr[k++]=right[s2++];
	
	
}*/
typedef long long ll;
void merge(ll arr[], ll low, ll mid, ll high)
    {
        ll n1 = mid-low+1;
        ll n2 = high-mid;
        ll left[n1], right[n2];
        
        for(int i=0;i<n1;i++)
           left[i] = arr[low+i];
        
        for(int i=0;i<n2;i++)
           right[i] = arr[mid+1+i];
        
        ll i=0,j=0,k=low;
        
        while(i<n1&&j<n2)
        {
            if(left[i]<=right[j])
              arr[k++] = left[i++];
            else
            {
                ans+=(n1-i);
                arr[k++] = right[j++];
            }
        }
        
        while(i<n1) arr[k++] = left[i++];
        while(j<n2) arr[k++] = right[j++];
        
    }

void mergeSort(long long *arr,int s,int e)
{
	if(s>=e)return;
	int mid=s+(e-s)/2;
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	merge(arr,s,mid,e);
}





    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        mergeSort(arr,0,N-1);
	    return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends