class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        
        for(int i = 0; i < 32; i++) {
            result = result << 1;      // Make space
            result = result | (n & 1); // Add last bit of n
            n = n >> 1;               // Remove last bit of n
        }
        
        return result;
    }
};
