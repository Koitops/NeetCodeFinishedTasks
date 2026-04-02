
#include <iostream>
#include <vector>
#include <unordered_set>

int main()
{
    std::cout << "Hello World!\n";
}

bool hasDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> num;

    for (int i : num) {
        if (!num.insert(i).second) {
            return true;
        }
    }
    return false;
}
