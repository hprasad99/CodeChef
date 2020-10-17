# https://www.codechef.com/problems/PRB01
def primal(n):
    flag = 0
    for i in range(4, n):
        if(n % 2 == 0 or n % 3 == 0 or n % i == 0):
            print("no")
            flag = 1
            break
    if(flag == 0):
        print("yes")


if __name__ == "__main__":
    t = int(input())
    while(t):
        n = int(input())
        primal(n)
        t -= 1
