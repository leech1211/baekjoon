
A = int(input())
B = int(input())



hou = B // 100
ten = B // 10 % 10
one = B % 10

print(A * one)
print(A * ten)
print(A * hou)

print(A * B)
