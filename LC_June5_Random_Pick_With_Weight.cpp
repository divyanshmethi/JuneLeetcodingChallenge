#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> cumulative;
    Solution(vector<int>& w) {
        cumulative.push_back(w[0]);
        for(int i = 1;i<w.size();i++)
        {
            cumulative.push_back(w[i] + cumulative[i-1]);
        }
    }
    
    int pickIndex() {
        int end = cumulative.size() - 1;
        int random_num = rand()%cumulative[end] + 1;
        return lower_bound(cumulative.begin(),cumulative.end(),random_num) - cumulative.begin();
        // int end = cumulative.size() - 1;
        // int random_num = rand()%cumulative[end];
        // int start = 0;
        // while(start < end)
        // {
        //     int mid = (end-start)/2 + start;
        //     if(cumulative[mid] <= random_num)
        //     {
        //         start = mid+1;
        //     }
        //     else
        //     {
        //         end = mid;
        //     }
        // }
        // return end;
    }
};

int main(){
	int arr[] = {1,3};
	vector<int> v(arr,arr+2);
	Solution* obj = new Solution(v);
	cout<<obj->pickIndex()<<endl;
	cout<<obj->pickIndex()<<endl;
	cout<<obj->pickIndex()<<endl;
	cout<<obj->pickIndex()<<endl;
	cout<<obj->pickIndex()<<endl;
}
