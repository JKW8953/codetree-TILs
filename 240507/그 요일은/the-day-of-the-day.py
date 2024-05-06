month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day1 = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
day2 = [0 for _ in range(7)]
m1, d1, m2, d2 = map(int, input().split())
A = input()
tmp1 = sum(month[1:m1]) + d1
tmp2 = sum(month[1:m2]) + d2
total = tmp2 - tmp1 + 1
res = total % 7
cnt1 = int(total / 7)
for i in range(7):
    day2[i] = cnt1
for i in range(res+1):
    day2[i] += 1
print(day2[day1.index(A)])