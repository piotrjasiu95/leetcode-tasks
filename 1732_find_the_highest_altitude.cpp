// 1732. Find the Highest Altitude
// Solved
// Easy
// Topics
// Companies
// Hint
//
// There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes.
// The biker starts his trip on point 0 with altitude equal 0.
//
// You are given an integer array gain of length n where gain[i] is the net gain in altitude
// between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.
//
//  
//
// Example 1:
//
// Input: gain = [-5,1,5,0,-7]
// Output: 1
// Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
//
// Example 2:
//
// Input: gain = [-4,-3,-2,-1,4,3,2]
// Output: 0
// Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
//
//  
//
// Constraints:
//
//     n == gain.length
//     1 <= n <= 100
//     -100 <= gain[i] <= 100
//

#include <iostream>
#include <algorithm>
#include <ostream>
#include <vector>

// Solution
class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int maxAlt = 0;
        std::vector<int> alt = {0};
        for(int i = 0;i < gain.size();i++){
            alt.push_back(gain.at(i) + alt.back());
            maxAlt = std::max(maxAlt, alt.back());
        }
        std::cout << maxAlt << std::endl;
        return maxAlt;
    }
};


// quick test
int main() {
    std::vector<int> gain1 = {-5, 1, 5, 0, -7};
    std::vector<int> gain2 = {-4,-3,-2,-1,4,3,2};
    std::vector<int> gain3 = {44,32,-9,52,23,-50,50,
                              33,-84,47,-14,84,36,-62,
                              37,81,-36,-85,-39,67,-63,64,
                              -47,95,91,-40,65,67,92,-28,97,100,81};
    Solution solution;
    int result1 = solution.largestAltitude(gain1); //expected: 1 
    int result2 = solution.largestAltitude(gain2); //expected: 0 
    int result3 = solution.largestAltitude(gain3); //expected: 1 
    return 0;
}



