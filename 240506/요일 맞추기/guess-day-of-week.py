month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day1 = [6, 0, 1, 2, 3, 4, 5]
day2 = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]
m1, d1, m2, d2 = map(int, input().split())
tmp1 = sum(month[0:m1]) + d1
tmp2 = sum(month[0:m2]) + d2
res = (tmp2 - tmp1) % 7
print(day2[day1.index(res)])