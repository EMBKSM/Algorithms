def solution(arr, queries):
    new_arr = arr

    for q in queries:
        first_num = new_arr[q[0]]
        second_num = new_arr[q[1]]
        new_arr[q[0]] = second_num
        new_arr[q[1]] = first_num
    return new_arr