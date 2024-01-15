def count_valid_integers(t, test_cases):
    results = []

    for _ in range(t):
        n, constraints = test_cases[_][0], test_cases[_][1:]

        min_val = float('-inf')
        max_val = float('inf')

        for a, x in constraints:
            if a == 1:
                min_val = max(min_val, x)
            elif a == 2:
                max_val = min(max_val, x - 1)
        
        # Check if there is a gap between the two ranges
        if min_val > max_val:
            results.append(0)
        else:
            results.append(max_val - min_val + 1)

    return results

# Input reading
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    constraints = [list(map(int, input().split())) for _ in range(n)]
    test_cases.append((n, constraints))

# Output the results
results = count_valid_integers(t, test_cases)
for result in results:
    print("ans:",result)
