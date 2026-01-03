#include <iostream>
#include <vector>
using namespace std;

 int maxArea(vector<int>& height) {
    
    int area = 0, maxWater = 0;
        
    for (int i = 0; i < height.size(); i++) // select left
    {
        for (int j = i+1; j < height.size(); j++) // all posible combinations
        {
            int minHeight = min(height[i],height[j]);
            int width = j - i;

            area = minHeight * width;

            maxWater = max(area,maxWater);
        }
    }
    return maxWater;
}

int main(){

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(height) ;
    return 0;
}