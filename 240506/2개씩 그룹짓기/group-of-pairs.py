n = int(input())
arr = list(map(int, input().split()))

arr.sort()

maximum = 0
for i in range(int(n)):
    min_maximum = arr[i] + arr[2*n-i-1]
    if maximum > min_maximum:
        min_maximum = maximum
    
print(min_maximum)