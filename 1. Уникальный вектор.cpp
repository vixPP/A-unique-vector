#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

static std::vector<int> removeDuplic(const std::vector<int>& vec)
{
    std::set<int> uniqueElements(vec.begin(), vec.end());
    return std::vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main()
{
    std::vector<int> input = { 1, 1, 2, 5, 6, 1, 2, 4 };
    std::vector<int> result = removeDuplic(input);

    auto inputIt = input.begin();
    std::cout << "[IN]:";
    while (inputIt != input.end())
    {
        std::cout << *inputIt << " ";
        inputIt++;
    }
    std::cout << std::endl;

    auto resultIt = result.begin();
    std::cout << "[OUT]:";
    while (resultIt != result.end())
    {
        std::cout << *resultIt << " ";
        resultIt++;
    }

    return 0;
}
