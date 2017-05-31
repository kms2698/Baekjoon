i = ['0952', '5239', '1270', '8581', '7458']

for a in range(len(i)):
    for b in range(4):
        for c in range(b+1,4,1):
            if(int(i[a][b]) > int(i[a][c])):
                i[a][b],i[a][c] = i[a][c],i[a][b]

print(i)
