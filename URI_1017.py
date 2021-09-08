spent_hour = input()
avg_speed = input()

spent_hour = int(spent_hour)
avg_speed =int(avg_speed)

total_distance = spent_hour*avg_speed

fuel_used = total_distance/12

print("%0.3f"%fuel_used)