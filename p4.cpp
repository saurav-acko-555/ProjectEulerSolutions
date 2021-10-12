def is_palindromic(n): n=str(n); return n==n[::-1]

dd = dict()
for i in range(101, 1000):
    for j in range(121, 1000, (1 if i%11==0 else 11)):
        p = i*j
        if p >= 101101 and is_palindromic(p): dd[p]=1
lst = sorted(list(dd), reverse=True)
K = int(input("Enter a number between 101101 and 999999? "))
q =  min(lst, key=lambda x:x>=K)
print ("the nearest palindrome less than", K, "is", q)
