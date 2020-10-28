# //https://www.codechef.com/problems/HEADBOB

if __name__ == "__main__":
    t = int(input())
    while(t):
        try:
            n = int(input())
            s = [n for n in input()]
            if("I" in s):
                print("INDIAN")
            elif("Y" in s):
                print("NOT INDIAN")
            else:
                print("NOT SURE")
        except EOFError:
            print("EOFError")
            break
        t -= 1
