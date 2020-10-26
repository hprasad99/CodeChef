# https://www.codechef.com/problems/PRB01
import math


def primal(n):
    if(n < 2):
        return "no"
    for x in range(2, int(math.sqrt(n))+1):
        if(n % x == 0):
            return "no"
    return "yes"


if __name__ == "__main__":
    t = int(input())
    while(t):
        n = int(input())
        print(primal(n))
        t -= 1
