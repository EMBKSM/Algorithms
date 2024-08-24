from sys import stdin
import math
n = int(stdin.readline().strip())
a = list(map(int, stdin.readline().split()))
s = [0]
for i in range(n * 2) :
    s.append(s[-1] + a[i % n])
result = 0
for i in range(n - 1) :
    for i2 in range(1, n + 1) :
        if s[i2 + i] < s[i2 - 1] :
            result += math.ceil(abs(s[i2 + i] - s[i2 - 1]) / s[n])
print(result)