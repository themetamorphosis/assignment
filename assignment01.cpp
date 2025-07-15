class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxStorage = 0;
        int left = 0, right = heights.size() - 1;

        while (left < right) {
            int dist = right - left;
            int tempStorage = min(heights[left], heights[right]) * dist;
            maxStorage = max(tempStorage, maxStorage);
            if (heights[left] <= heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxStorage;
    }
};
