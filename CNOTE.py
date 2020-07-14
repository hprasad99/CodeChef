def main(T):
    while(T):
        #X(Pages),Y(Pages left),K(Rubles left),N(Notebooks)
        X,Y,K,N =  map(int,input().split(" "))
        book = []
        for i in range(N):
            P, C = map(int,input().split(" "))
            book.append((P,C))
        for P,C in book:
            if(P>=X-Y and C<=K):
                print("LuckyChef")
                break
        else:
            print("UnluckyChef")
        T = T - 1 

if __name__ == "__main__":
    T = int(input())
    main(T)