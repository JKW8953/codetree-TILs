arr = list(map(int, input().split()))
new_arr = []

for elem in arr:
    if elem < 250:
        new_arr.append(elem)
    else:
        break

hap = sum(new_arr)

print(hap, hap/len(new_arr))