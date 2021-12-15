data = input().split(' ')
A = int(data[0])
B = int(data[1])
C = int(data[2])


print( (A+B)%C )
print( ((A%C) + (B%C))%C)
print( (A*B)%C)
print(((A%C) * (B%C))%C)
