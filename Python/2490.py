for _ in range(3) :
    lst=list(map(int,input().split()))
    cnt=0
    for i in range(4) :
        if lst[i]==0 :
            cnt+=1
    if cnt==0 :
        print('E')
    elif cnt==1 :
        print('A')
    elif cnt==2 :
        print('B')
    elif cnt==3 :
        print('C')
    else :
        print('D')