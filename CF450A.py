import math

n, m = input().split(" ")
hunger = input().split(" ")

max = 0
pos = 0
for i, hungery in enumerate(hunger):
    weight = math.ceil(int(hungery) / int(m) ) * int(n) + int(i)
    if(weight >= max):
        max = weight
        pos = i

print(pos + 1)