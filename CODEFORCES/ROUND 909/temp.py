from sys import stdin
def maxSubArraySum(temp, n):
    max_so_far = float("-inf")
    max_ending_here = 0
    for i in range(0, n):
        max_ending_here = max_ending_here + temp[i]
        if (max_so_far < max_ending_here):
            max_so_far = max_ending_here
        if max_ending_here < 0:
            max_ending_here = 0
    return max_so_far
def input(): return stdin.readline()[:-1]
for _ in range(int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	b=[True]*(n)
	idx=[]
	for i in range(n):
		if a[i]%2:
			b[i]=False
	st=-1
	end=-1
	for i in range(n-1):
		if b[i]!=b[i+1] and st==-1:
			st=i
		elif b[i]==b[i+1] and st!=-1 and end==-1:
			end=i
		if st!=-1 and end!=-1:
			idx+=[[st,end]]
			st=-1
			end=-1
	if st!=-1:
		idx+=[[st,n-1]]
	if not idx:
		print(max(a))
		continue
	ans=max(a)
	for i in range(len(idx)):
		temp=a[idx[i][0]:idx[i][1]+1]
		curr=maxSubArraySum(temp,len(temp))
		ans=max(ans,curr)
	print(ans)