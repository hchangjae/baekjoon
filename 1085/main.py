x, y, w, h = map(int, input().split())

min_w = w/2 - abs(x - w/2)
min_h = h/2 - abs(y - h/2)

print(int(min(min_w,min_h)))