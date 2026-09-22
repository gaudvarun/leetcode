class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int a = 0;
        
    //mast xor use krne ka loop laganeka
        for (int num : nums) {
            a ^= num;
        }
        
        return a;
    }
};
