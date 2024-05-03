arr = list(map(int, input().split()))

biggerthan500 = 1001
smallerthan500 = 0

for elem in arr:
    if elem > 500 and elem < biggerthan500:
        biggerthan500 = elem
    elif elem < 500 and elem > smallerthan500:
        smallerthan500 = elem

print(smallerthan500, biggerthan500)