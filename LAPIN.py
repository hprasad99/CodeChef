n = int(input())
while(n):
    s = input()
    if(len(s) % 2 == 1):
        x = s[len(s)//2+1:]
        y = s[:len(s)//2]
        if(sorted(x) == sorted(y)):
            print('YES')
        else:
            print('NO')
    else:
        x = s[len(s)//2:]
        y = s[:len(s)//2]
        if(sorted(x) == sorted(y)):
            print('YES')
        else:
            print('NO')
    n -= 1
