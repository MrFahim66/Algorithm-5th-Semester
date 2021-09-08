from math import *
initial_value = input()

value = int(initial_value)

note100 = floor(value / 100)
value = value-(note100*100)

note50 = floor(value / 50)
value = value - (note50*50)

note20 = floor(value / 20)
value = value - (note20*20)

note10 = floor(value / 10)
value = value - (note10*10)

note5 = floor(value / 5)
value = value - (note5*5)

note2 = floor(value / 2)
value = value - (note2*2)

note1 = floor(value/1)
value = value - (note1*1)

print(initial_value)
print(note100, "nota(s) de R$ 100,00")
print(note50, "nota(s) de R$ 50,00")
print(note20, "nota(s) de R$ 20,00")
print(note10, "nota(s) de R$ 10,00")
print(note5, "nota(s) de R$ 5,00")
print(note2, "nota(s) de R$ 2,00")
print(note1, "nota(s) de R$ 1,00")