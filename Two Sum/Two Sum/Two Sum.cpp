#include <iostream>
#include<vector>;
#include <unordered_map>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int n = nums.size();
    std::unordered_map<int, int> prevMap;

    for (int i = 0; i < n; i++)
    {
        int diff = target - nums[i];
        if (prevMap.find(diff) != prevMap.end()) {
            return { prevMap[diff], i };
        }
        prevMap.insert({ nums[i], i });
    }
    return {};
}

int main()
{
    std::vector<int> num = { 4,5,6 };
    twoSum(num, 10);
    return 0;
}







