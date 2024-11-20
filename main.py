import sys

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