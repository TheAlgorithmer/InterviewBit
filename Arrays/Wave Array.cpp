//#include <algorithm>
//#include <vector>

vector<int> Solution::wave(vector<int> &arr) {

    int len=arr.size();

    sort(arr.begin(),arr.end());
    
    for(int i=0; i<len-1; i+=2) swap(arr[i],arr[i+1]);
    
    return arr;
}
