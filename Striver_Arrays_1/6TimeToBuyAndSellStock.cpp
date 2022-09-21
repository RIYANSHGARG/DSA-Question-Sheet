#include <iostream>
using namespace std;

int MyApproach(vector<int> nums)
{
    int profit = 0, maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            profit = nums[j] - nums[i];
            maxi = max(profit, maxi);
        }
    }
    return maxi;
}

int Optimised(vector<int> prices)
{
    // int dif = INT_MIN;
    // int maxi = max(prices.begin()+1,prices.end());
    // for(int i=0;i<prices;i++){
    //     if(prices[i] == maxi) continue;
    //     dif = (maxi-prices[i] > dif) ? maxi-prices[i] : continue;
    // }
    // return dif;
    int min = INT_MAX, profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        min = (prices[i] > min) ?: prices[i];
        if (prices[i] - min > profit)
        {
            profit = prices[i] - min;
        }
    }
    return profit;
}

int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        nums.push_back(element);
    }
    int ans = MyApproach(nums);
    return 0;
}