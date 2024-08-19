a = int(input())
b=0
sum =1
for _ in range(a):
    b = int(input())
    for i in range(b,0,-1):
        sum *=i
    while(sum%10==0):
        sum //=10
    print(sum%10)
    sum = 1