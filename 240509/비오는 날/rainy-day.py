n = int(input())

class Data:
    def __init__(self, date, day, weather):
        self.date = date
        self.day = day
        self.weather = weather

result = Data("9999-99-99", "", "")
for _ in range(n):
    date, day, weather = input().split()

    data = Data(date, day, weather)
    if weather == "Rain":
        if result.date > data.date:
            result = data

print(result.date, result.day, result.weather)