while True:
    line_input = input().split()
    
    if len(line_input) == 1 and line_input[0] == '0':
        break
    n, p = map(int, line_input)

    adj_p = (p + 1) if (p % 2) else (p - 1)

    pages = {adj_p, n - p + 1, n - adj_p + 1}

    print(*sorted(list(pages)))