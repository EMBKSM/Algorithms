def solution(arr, query):
    num = 0
    list_1 = arr
    for i in query:
        if num % 2 == 0:
            list_1 = list_1[:i+1]
            num += 1
        else:
            list_1 = list_1[i:]
            num += 1
    return list_1