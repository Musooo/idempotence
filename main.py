import sys

def euclide(a, b):
    if a < b:
        a, b = b, a
    
    if a%b == 0:
        return b 
    
    return euclide(b, a%b)

def extendedEuclide(a, b):
    
    if b>a:
        a, b = b, a
    
    x = [1,0]
    y = [0,1]
    r = [a,b]

    while r[-1] != 0:
        q = r[-2]//r[-1]
        r.append(r[-2]%r[-1])
        x.append(x[-2] - q*x[-1])
        y.append(y[-2] - q*y[-1])
    
    return r[-2], x[-1], y[-1]

def binar(e):
    return list(map(int, bin(e)[2:]))[::-1]

def binexp(bas, exp, mod):
    E = binar(exp)
    r = 1
    for i in range(len(E)):
        if E[i] == 1:
            r = (r * bas) % mod
        bas = (bas * bas) % mod
        print("i = ", i, "r = ", r, "bas = ", bas)
    return r

if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: python3 main.py base exponent modulus")
        sys.exit(1)
    base = int(sys.argv[1])
    exp = int(sys.argv[2])
    mod = int(sys.argv[3])
    print(binexp(base, exp, mod))

