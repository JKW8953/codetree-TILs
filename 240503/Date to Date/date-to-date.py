elapsed_days1, elapsed_days2 = 0, 0

num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

m1, d1, m2, d2 = map(int, input().split())

elapsed_days1 = sum(num_of_days[:m1+1]) + d1
elapsed_days2 = sum(num_of_days[:m2+1]) + d2

print(elapsed_days2-elapsed_days1)