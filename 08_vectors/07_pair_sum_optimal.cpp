#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;

    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{

    vector<int> nums = {1,2,3,4,5};
    int target = 9;

    vector<int> ans = pairSum(nums, target);

    if (ans.size() != 0)
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}