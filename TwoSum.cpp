#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> v;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                v.clear();
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
}

int main()
{
    vector<int> num={3,3};
    int target=6;
    vector<int> v=twoSum(num,target);
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}