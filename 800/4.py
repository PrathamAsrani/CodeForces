T = int(input())

while T > 0:
    n, m = map(int, input().split())
    ans = False
    x = list(map(int, input().split()))
    for i in x:
        if i == m:
            ans = True
            break
    if ans:
        print("Yes")
    else:
        print("No")
    T -= 1
