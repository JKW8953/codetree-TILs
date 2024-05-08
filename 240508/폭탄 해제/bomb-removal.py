class Bomb:
    def __init__(self, code, color, second):
        self.code = code
        self.color = color
        self.second = second

code, color, second = input().split()
second = int(second)

bomb1 = Bomb(code, color, second)
print("code :", bomb1.code)
print("color :", bomb1.color)
print("second :", bomb1.second)