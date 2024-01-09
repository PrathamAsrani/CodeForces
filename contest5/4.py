
def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    st = [arr[0]]
    
    for i in range(1, n):
        while len(st) > 1 and arr[i] < st[-1] and st[-1]-1 == st[-2]:
            st.pop()
        
        if arr[i] > st[-1]:
            st.append(arr[i])
        elif arr[i] == st[-1]-1:
            st[-1] = arr[i]
        elif arr[i] == st[-1]:
            if arr[i] == 0:
                print("NO")
                return 
        else:
            print("NO")
            return
    
    while len(st) > 1 and st[-1]-1 == st[-2]:
        st.pop()
    
    if len(st) == 1 and st[0] == 0:
        print("YES")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    solve()