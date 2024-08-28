def solution(a, b):
    a = str(a)
    b = str(b)
    if a + b >= b + a:
        answer = a + b
    else:
        answer = b + a
    return int(answer)