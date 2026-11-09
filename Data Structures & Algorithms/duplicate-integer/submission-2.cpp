#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> hmap;
        for(int num: nums){
            if(hmap.contains(num)==true){
                return true;
            }
            hmap[num] = 0;
        }
        return false;
    }
};