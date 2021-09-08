days = int(input())

years = int(days/365)
days -= years*365
months = int(days/30)
days -= months*30

print(years, "ano(s)")
print(months, "mes(es)")
print(days, "dia(s)")