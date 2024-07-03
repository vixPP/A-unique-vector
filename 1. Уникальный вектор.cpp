#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> removeDuplic(std::vector<int> vec)
{
    std::sort(vec.begin(), vec.end());

    auto it = std::unique(vec.begin(), vec.end());

    vec.erase(it, vec.end());

    return vec;
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
