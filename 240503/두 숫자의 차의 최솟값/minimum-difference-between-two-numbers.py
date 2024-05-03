n = int(input())
arr = list(map(int, input().split()))

ans = arr[1] - arr[0]
for i in range (2, n):
    sub = arr[i] - arr[i - 1]
    if ans > sub:
	    ans = sub

print(ans)