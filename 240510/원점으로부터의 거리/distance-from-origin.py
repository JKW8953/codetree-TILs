class Distance:
    def __init__(self, dist, idx):
        self.dist, self.idx = dist, idx

n = int(input())
distances = []

for i in range(n):
    x, y = map(int, input().split())

    distances.append(Distance(abs(x) + abs(y), i + 1))

distances.sort(key = lambda d : (d.dist, d.idx))

for elem in distances:
    print(elem.idx)