//Code
def weightedUniformStrings(s, queries):
    weights = set()
    current_weight = ord(s[0]) - ord('a') + 1
    weights.add(current_weight)

    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            current_weight += ord(s[i]) - ord('a') + 1
        else:
            current_weight = ord(s[i]) - ord('a') + 1
        weights.add(current_weight)

    results = []
    for q in queries:
        if q in weights:
            results.append("Yes")
        else:
            results.append("No")

    return results
