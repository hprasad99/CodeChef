def main(T):
    while(T):
        N = int(input())
        X = [int(N) for N in input().split(" ")]
        count = 1
        min = 100
        max = -1
        diff = [0]*N
        for i in range(1,N):
            diff[i] = X[i]-X[i-1]
        #print(diff)
        for i in range(1,N):
            if(diff[i]<=2):
                count+=1
            else:
                if(min>count):
                    min = count
                if(max<count):
                    max = count
                count = 1
        #print(str(min)+" "+str(max))
        if(min>count):
            min=count
        if(max<count):
            max = count
        print(str(min)+" "+str(max)) 
        T = T - 1

if __name__ == "__main__":
    T = int(input())
    main(T)
