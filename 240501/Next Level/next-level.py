class Character:
    def __init__(self, id, lvl):
        self.id = id
        self.lvl = lvl

id, lvl = input().split()
lvl = int(lvl)

char1 = Character("codetree", 10)
char2 = Character(id, lvl)
print(f"user {char1.id} lv {char1.lvl}")
print(f"user {char2.id} lv {char2.lvl}")