#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{ // O(n)
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }

    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        nums[index++] = 0;
    }

    for (int i = 0; i < count1; i++)
    {
        nums[index++] = 1;
    }

    for (int i = 0; i < count2; i++)
    {
        nums[index++] = 2;
    }
}

void printVector(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortColors(nums);
    printVector(nums);
}