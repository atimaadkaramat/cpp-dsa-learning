#include <iostream>
#include <vector>
using namespace std;

 int maxArea(vector<int>& height) {
    
    int area = 0, maxWater = 0;
    int left = 0, right = height.size()-1;
    
    while (left < right)
    {
        int width = right - left;
        int minHeight = min(height[left], height[right]);

       maxWater = max(maxWater, width * minHeight); 
        
        height[left] < height[right] ? left++ : right--;
    }
    
    
    return maxWater;
}

int main(){

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(height) ;
    return 0;
}