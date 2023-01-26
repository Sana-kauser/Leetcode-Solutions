<<<<<<< HEAD
// Approach 1
// Time complexity = O(n2)
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {

                if (nums1[i] == nums2[j])
                {
                    res.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
            }
        }
        return res;
    }
};

// Approach 2
// Time complexity = O(n+m)
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() == 0 || nums2.size() == 0)
            return vector<int>();
        unordered_map<long, int> map;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            map[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (map[nums2[i]] > 0)
            {
                res.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }
        return res;
    }
=======
// Approach 1
// Time complexity = O(n2)
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {

                if (nums1[i] == nums2[j])
                {
                    res.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j);
                    break;
                }
            }
        }
        return res;
    }
};

// Approach 2
// Time complexity = O(n+m)
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() == 0 || nums2.size() == 0)
            return vector<int>();
        unordered_map<long, int> map;
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++)
        {
            map[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (map[nums2[i]] > 0)
            {
                res.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }
        return res;
    }
>>>>>>> 90f5cfc74ed3e516f044831802188b57cf77ca0e
};