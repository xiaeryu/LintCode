class Solution:
    """
    @param numbers: Give an array numbers of n integer
    @param target : An integer
    @return : return the sum of the three integers, the sum closest target.
    """
    def threeSumClosest(self, numbers, target):
        total = len(numbers)
        if total < 3:
            return None
        
        numbers.sort()
        outSum = numbers[0] + numbers[1] + numbers[2]
        mindiff = abs(outSum - target)
        for i in range(total):
            left = i + 1
            right = total - 1
            while(left < right):
                tmpSum = numbers[left] + numbers[right] + numbers[i]
                diff = abs(tmpSum - target)
                if diff < mindiff:
                    mindiff = diff
                    outSum = tmpSum
                
                if tmpSum == target:
                    return outSum
                elif tmpSum > target:
                    right -= 1
                else:
                    left += 1
        
        return outSum
