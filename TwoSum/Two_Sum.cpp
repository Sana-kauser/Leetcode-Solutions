//  Solve Two sum problem using c++

// Brute force solution Time Complexity: O(n square)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

// Optimized Solution eith Time Complexity:  O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        int diff;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if (m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                res.push_back(i);
                res.push_back(m.find(diff)->second);
                return res;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};