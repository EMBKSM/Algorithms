def solution(q, r, code):
    answer = 0
    for i in range(len(code)):
        if (i) % q == r:
            if answer == 0:
                answer = code[i]
            else:
                answer += code[i]
    return answer