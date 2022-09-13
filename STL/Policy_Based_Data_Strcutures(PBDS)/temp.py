num=int(input())
for i in range(num):
        k,d1,d2=map(int, input().split())
        s=d1+d2
        add=0
        d=(d1+d2)%10
        if(k==2):
            if(s%3==0):
                print("YES")
            else:
                print("NO")
        elif(d%2==0 and d!=0):
            m=(k-2)//4
            n=(k-2)%4
            for x in range (n):
                add+=d%10
                d=d*2 
            sum1=add+s+(m*2)
            if(sum1%3==0):
                print("YES")
            else:
                print("NO")
        elif(k==3 and d%2==1):
            if((s+d)%3==0):
                print("YES")
            else:
                print("NO")
        elif(d%2==1 and d!=5):
            d1=(d*2)%10
            m=(k-3)//4
            n=(k-3)%4
            for x in range (n):
                add+=d1%10
                d1=d1*2 
            sum1=add+(m*2)+d+s
            if(sum1%3==0):
                print("YES")
            else:
                print("NO")
        elif(d==0):
            if(s%3==0):
                print("YES")
            else:
                print("NO")
        elif(d==5):
            if((s+d)%3==0):
                print("YES")
            else:
                print("NO")
                
            
            
     
  
     
        
   
        

    

