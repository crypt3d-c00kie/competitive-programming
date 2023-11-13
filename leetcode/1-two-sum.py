class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       
        seen = set()

        for i, n in enumerate(nums):
            diff = target - n
            if diff in seen:
                return [nums.index(diff), i]
            seen.add(n)