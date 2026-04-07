
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>


int main()
{
    std::cout << "Hello World!\n";
}

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> res;
    for (const auto& s : strs) {
        std::string sorted = s;
        sort(sorted.begin(), sorted.end());
        res[sorted].push_back(s);
    }
    std::vector<std::vector<std::string>> result;
    for (auto& p : res )
    {
        result.push_back(p.second);
    }
    return result;

}