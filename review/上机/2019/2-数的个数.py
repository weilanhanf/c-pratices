
res = [0, 0, 0]
for i in range(100, 1000):
    li = [_ for _ in str(i)]
    n = li.count('6')
    if n>0:
        res[n-1] += 1

print(res)
