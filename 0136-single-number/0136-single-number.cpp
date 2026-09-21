class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        
    //mast xor use krne ka loop laganeka
        for (int num : nums) {
            result ^= num;
        }
        
        return result;
    }
};