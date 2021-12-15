num = input().split(' ')

hou = int(num[0])
min = int(num[1])

min -= 45
if(min < 0):
    min += 60
    hou -= 1

if(hou < 0):
    hou = 23


print(hou,min)
