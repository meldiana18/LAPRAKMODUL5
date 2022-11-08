def MaxBilangan(a,b,c,d):
    a=int(a); b=int(b); c= int(c); d= int (d);
    
    if a>b and b>c and c>d:
      return a
    elif a<b and b>c and c>d:
     return b
    elif b<c and c>a and d<c:
     return c
    else:
     return d
a, b, c, d=map (int ,input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)
