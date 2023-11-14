def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
    final = defaultdict(list)
    
    for string in strs:
        count = [0] * 26
        for c in string:
            count[ord(c) - ord('a')] += 1
        
        final[tuple(count)].append(string)
    return final.values()