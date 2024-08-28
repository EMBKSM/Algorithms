def solution(arr, queries):
    result = []


    for q in queries:
        new_arr = arr[q[0]:q[1]+1]
        new_num = []

        for n in new_arr:
            if n > q[-1]:
                new_num.append(n)

        if len(new_num) < 1: 
            result.append(-1)
        else: result.append(min(new_num))
        
    return result