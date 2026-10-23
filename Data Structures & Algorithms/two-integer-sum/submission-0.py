class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        d={}
        res=[]
        
      
        for i,n in enumerate(nums):
            if target-n in d:
                res=[d[target-n],i]
            d[n]=i
        return res



        