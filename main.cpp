#include <iostream>
#include <vector>
template<typename T>
std::vector<T> l_r(const std::vector<T> &arr)
{
    std::vector<T> awnser;
    for (int i = 1; i < arr.size() - 1; ++i)
        if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
            awnser.push_back(arr[i]);

    return awnser;
}

int main()
{
    for (auto i : l_r<int>({4, 5, 2, 7, 9}))
        std::cout << i << std::endl;
}