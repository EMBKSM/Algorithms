def solution(num_list):
    list1 = str(0)
    list2 = str(0)
    for i in num_list:
        if i % 2 == 0:
            if list1 != 0:
                list1 += str(i)
            else:
                list1 = i
        else:
            if list2 != 0:
                list2 += str(i)
            else:
                list2 = i
    return (int(list1) + int(list2))
            