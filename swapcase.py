def swap_case(s):
    ch=""
    for word in s:
        if (word.isupper()):
            ch+=word.lower()
        else:
            ch+=word.upper()
    return(ch)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
