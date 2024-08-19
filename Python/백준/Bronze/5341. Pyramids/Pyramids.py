n = int(input())
sum =0
while(n):
    for i in range(0,n):
        sum += n - i
    print(sum)
    sum =0
    n = int(input())
