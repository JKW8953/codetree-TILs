class User:
    def __init__(self, codename, score):
        self.codename = codename
        self.score = score

users = []

for _ in range(5):
    codename, score = input().split()
    users.append(User(codename, int(score)))

min_idx = 0
for i in range(5):
    if users[min_idx].score > users[i].score:
        min_idx = i

print(users[min_idx].codename, users[min_idx].score)