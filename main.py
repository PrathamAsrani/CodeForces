def fun(arr):
    ans = 0
    for word in arr:
        ans = max(ans, len(word))
    return ans


def f(s):
    low, upp = 0, 0
    for ch in s:
        if ch >= 'a' and ch <= 'z':
            low += 1
        elif ch >= 'A' and ch <= 'Z':
            upp += 1

    return (low, upp)


arr = ["abc", "abcd", "ajajsjssjsj"]

print(fun(arr))

s = "absbdbAJSJDJJDDJMX"
print(f(s))

dict = {
    1: 1111,
    2: 2,
    3: 3
}
sss = set()
li = [1, 2, 3]
tu = (1, 2, 3)

sss.add(1)
sss.add(1)
sss.add(2)
sss.add(2)
sss.add(3)
sss.add(3)

print(dict)
print(sss)
print(li)
print(tu)

print(dict[1])


# continue, break, pass

class solution:
    def meth():
        pass
    
li = [10, 20, 30, 20, 20, 30, 40, 50, -20, 60, 60, -20, -20]
li.sort()

idx = 0
uni = [li[0]]
for i in range(1, len(li)):
    if li[i] != li[i-1]:
        uni.append(li[i])

print(uni, li, sep="\n")

# tc: o(nlogn), sc: o(n)


arr = [li[i] for i in range(1, len(li)) if li[i] != li[i-1]]
uni = [li[0]]
uni.extend(arr)
print(uni)

SELECT EMP, NVL(SALARY, 0) AS SALARY
FROM T
ORDER BY (SALARY) DESC
LIMIT = 3

