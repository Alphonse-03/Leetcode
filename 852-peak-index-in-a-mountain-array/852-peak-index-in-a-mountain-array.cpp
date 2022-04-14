class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        if(arr[0]>arr[1])return 0;
        if(arr[e]>arr[e-1])return e;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(mid!=0 && mid!=arr.size()-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
            if(arr[mid]<arr[mid+1])s=mid+1;
            else e=mid-1;
        }
        return -1;
        
    }
};