def solution(n):
    a = 0
    if (n%2 == 1):
        for i in range(n,0,-2):
            a += i
    else:
        for i in range(n,0,-2):
            a += (i**2)
    return a
