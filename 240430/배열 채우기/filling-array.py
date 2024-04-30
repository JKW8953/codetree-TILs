arr = list(map(int, input().split()))
new_arr = []

cnt = 0
for elem in arr:
    if elem == 0:
        break
    new_arr.append(elem)
    cnt += 1

for i in new_arr[cnt::-1]:
    print(i, end=' ')