a, b = map(int, input().split(' '))
data = []

for i in range(a):
    data.append(int(input()))

data.sort()

opt = data[b-1]-data[0]

for i in range(b, a):
    temp = i-(b-1)
    temp2 = data[i] - data[temp]
    if temp2 < opt:
        opt = temp2

print(opt)
