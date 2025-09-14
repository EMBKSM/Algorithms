n = int(input())
for i in range(0, n):
    A, B, X = map(int,input().split())
    print(A*(X-1)+B)