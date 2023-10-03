class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = 0
        
        n = len(nums)
        
        for idx in range(n):
            for idx2 in range(idx + 1, n):
                if nums[idx] == nums[idx2]:
                    count += 1
        
        return count