def optimal_play(t, test_cases):
    results = []
    for case in test_cases:
        n = case[0]
        array = case[1]

        prefix_sums = [0] * n
        prefix_sums[0] = array[0]

        for i in range(1, n):
            prefix_sums[i] = prefix_sums[i - 1] + array[i]

        remaining_numbers = [0] * n
        remaining_numbers[0] = array[0]

        for i in range(1, n):
            remaining_numbers[i] = max(remaining_numbers[i - 1], array[i])

        for k in range(1, n + 1):
            if k == 1:
                result = array[0]
            else:
                max_sum = prefix_sums[k - 1]
                max_remaining = remaining_numbers[k - 1]

                if k % 2 == 0:
                    result = max_sum
                else:
                    result = max(max_sum - max_remaining, max_remaining * 2)

            print(result, end=" ")

        print()

# Input
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    array = list(map(int, input().split()))
    test_cases.append((n, array))

# Output
optimal_play(t, test_cases)
