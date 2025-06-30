class Solution(object):
    def rotate(self, nums, k):
        k = k%len(nums)
        if k!=0:
            nums[:k], nums[k:] = nums[-k:], nums[:-k]
        