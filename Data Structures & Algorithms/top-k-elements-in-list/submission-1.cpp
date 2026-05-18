#include<unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int nums_len = nums.size();
        std::unordered_map<int, int> hmap = {};
        std::vector<std::vector<int>> bucket(nums_len+1);
        std::vector<int> vec = {};
        for(const auto& i: nums){
            hmap[i] += 1;
        }
        for(auto [key, value]: hmap){
            bucket[value].push_back(key);
        }
        for(int i=nums_len; i>0; i--){
            vec.insert(vec.end(), bucket[i].begin(), bucket[i].end());
        }

        vec.resize(k);
        return vec;
    }
};
