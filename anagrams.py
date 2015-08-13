class Solution:
    """
    @param strs: a list of strings
    @return: a list of strings all of which have anagrams in the input
    """
    def anagrams(self, strs):
        if len(strs) < 2: return []
        
        storage = {} # key: sorted strings. vals: original strings
        for str in strs:
            tmpSort = ''.join(sorted(str))
            if tmpSort in storage:
                storage[tmpSort].append(str)
            else:
                storage[tmpSort] = [str]
        
        output = []
        for key in storage:
            if len(storage[key]) > 1:
                output.extend(storage[key])

        return output
