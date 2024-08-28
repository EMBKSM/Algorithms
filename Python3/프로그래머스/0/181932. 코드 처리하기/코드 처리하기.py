def solution(code):
    answer = ''
    mode = 0
    for i, c in enumerate(code):
        if c == '1':
            mode ^= 1
        else:
            if i % 2 == mode:
                answer += c
    return answer if answer else 'EMPTY'
