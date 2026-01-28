#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main() // O(nlogn)
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sort(nums.begin(), nums.end());
    printVector(nums);
}