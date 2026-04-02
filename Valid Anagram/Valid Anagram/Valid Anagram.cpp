
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::cout << "Hello World!\n";
}

//bool isAnagram(std::string s, std::string t) {
//    if (s.size() != t.size()) {
//        return false;
//    }
//    std::sort(s.begin(), s.end());
//    std::sort(t.begin(), t.end());
//    return (s == t);
//} not optimized version
bool isAnagram(std::string s, std::string t) {

    if (s.size() != t.size()) {
        return false;
    }
    std::vector<int> countOne(26, 0);
    std::vector<int> countTwo(26, 0);

    for (size_t i = 0; i < s.size(); i++)
    {
        countOne[s[i] - 'a']++;
        countTwo[t[i] - 'a']++;
    }
    return (countOne == countTwo);
}
