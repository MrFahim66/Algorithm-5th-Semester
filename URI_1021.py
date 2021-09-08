from math import *

value = float(input())

note100 = floor(value / 100)
value = value - (note100 * 100)

note50 = floor(value / 50)
value = value - (note50 * 50)

note20 = floor(value / 20)
value = value - (note20 * 20)

note10 = floor(value / 10)
value = value - (note10 * 10)

note5 = floor(value / 5)
value = value - (note5 * 5)

note2 = floor(value / 2)
value = value - (note2 * 2)

note1 = floor(value / 1)
value = value - (note1 * 1)

note050 = floor(value / 0.50)
value = value - (note050 * 0.50)

note025 = floor(value / 0.25)
value = value - (note025 * 0.25)

note010 = floor(value / 0.10)
value = value - (note010 * 0.10)

note05 = floor(value / 0.05)
value = value - (note05 * 0.05)

note01 = floor(value / 0.01)
value = value - (note01 * 0.01)

print("NOTAS:")
print(note100, "nota(s) de R$ 100.00")
print(note50, "nota(s) de R$ 50.00")
print(note20, "nota(s) de R$ 20.00")
print(note10, "nota(s) de R$ 10.00")
print(note5, "nota(s) de R$ 5.00")
print(note2, "nota(s) de R$ 2.00")
print("MOEDAS:")
print(note1, "nota(s) de R$ 1.00")
print(note050, "nota(s) de R$ 0.50")
print(note025, "nota(s) de R$ 0.25")
print(note010, "nota(s) de R$ 0.10")
print(note05, "nota(s) de R$ 0.05")
print(note01, "nota(s) de R$ 0.01")
