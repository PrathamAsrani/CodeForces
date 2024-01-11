def solve():
    n = int(input())
    arr = []
    for _ in range(n):
        a, b = map(int, input().split())
        arr.append((a, b))
    arr.sort()
    ans = 0
    for i in range(n):
        end = arr[i][1]
        for j in range(i + 1, n):
            if arr[j][1] <= end:
                ans += 1
    print(ans)

def main():
    t = int(input())
    while t > 0:
        solve()
        t -= 1

if __name__ == "__main__":
    main()
