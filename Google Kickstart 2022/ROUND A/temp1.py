for i in range(int(input())):
    num=int(input())
    
    #digit sum function
    def Sum(num):
        if (num == 0):
            return 0
        if (num % 9 == 0):
            return 9
        else:
           return (num % 9)
    
    find=9-Sum(num)
    str1=str(num)
    ans=str1+str(find)
    for j in range( 0 , len(str1)):
        temp=str1[0:j]+str(find)+str1[j:len(str1)]
        if(temp[0] == '0'):
            continue
        ans=min(temp,ans)
        
    print("Case #",i+1,": ",ans, sep="")