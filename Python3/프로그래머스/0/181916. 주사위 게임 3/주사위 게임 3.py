def solution(a, b, c, d):

    if a == b and b == c and c == d and d == a:
        sc = 1111 * a
    elif a == b == c or b == c == d or c == d == a or b == d == a:
        if a == b == c:
            sc = (10 * a + d) ** 2
        elif b == c == d:
            sc = (10 * b + a) ** 2
        elif b == d == a:
            sc = (10 * b + c) ** 2
        else:
            sc = (10 * c + b) ** 2
    elif (a == b and c == d) or (b == c and a == d) or (c == a and b == d):
        if (a == b and c == d):
            sc = (a + c) * abs(a - c)
        elif (b == c and a == d):
            sc = (a + b) * abs(a - b)
        else:
            sc = (c + b) * abs(c - b)
    elif a == b or b == c or c == d or d == a or c == a or b == d:
        if a == b:
            sc = c * d
        elif b == c:
            sc = a * d
        elif c == d:
            sc = a * b
        elif a == d:
            sc = c * b
        elif a == c:
            sc = b * d
        else:
            sc = a * c
    else:
        Z = [a, b, c, d]
        Z.sort()
        sc = Z[0]
    return sc
            