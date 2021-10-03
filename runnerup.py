if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
f=-999
r=-999
for i in arr:
    if i>f:
        f=i
for i in arr:
    if i>r and i!=f:
        r=i
print(r)
        