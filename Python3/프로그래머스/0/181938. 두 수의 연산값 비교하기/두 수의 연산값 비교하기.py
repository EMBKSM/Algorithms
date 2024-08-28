def solution(a, b):
    answer1 = int(str(a) + str(b))
    answer2 = 2 * a * b
    return answer1 if answer1 >= answer2 else answer2