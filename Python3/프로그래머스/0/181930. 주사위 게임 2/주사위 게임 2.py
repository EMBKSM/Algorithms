def solution(a, b, c):
    if a == b and b == c:
        num = a + b + c
        num *= (a ** 2) + (b ** 2) + (c ** 2)
        num *= (a ** 3) + (b ** 3) + (c ** 3)
        return num
    elif a == b or a == c or b == c:
        num = a + b + c
        num *= (a ** 2) + (b ** 2) + (c ** 2)
        return num
    else:
        num = a + b + c
        return num