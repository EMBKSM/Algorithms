def solution(my_string, s, e):
    substring = my_string[s:e+1]
    reversed_substring = substring[::-1]
    return my_string[:s] + reversed_substring + my_string[e+1:]