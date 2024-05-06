month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
m1, d1, m2, d2 = map(int, input().split())
tmp1 = sum(month[1:m1]) + d1
tmp2 = sum(month[1:m2]) + d2
res = (tmp2 - tmp1) % 7
print(day[res])