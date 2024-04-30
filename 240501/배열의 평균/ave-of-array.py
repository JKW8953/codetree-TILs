arr_2d = [list(map(int, input().split())) for _ in range(2)]
for i in range(2):
    print(f"{sum(arr_2d[i])/4:.1f}", end=' ')
print()

for j in range(4):
    col_sum = sum(arr_2d[i][j] for i in range(2))
    print(f"{col_sum/2:.1f}", end=' ')
print()


avg = sum(sum(i) for i in arr_2d) / 8
print(f"{avg:.1f}")