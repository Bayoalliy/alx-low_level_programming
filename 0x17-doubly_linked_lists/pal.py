#!/usr/bin/python3
pal = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        mult = str(i * j)
        if mult == mult[::-1]:
            if int(mult) > int(pal):    
                pal = mult
print(pal)
