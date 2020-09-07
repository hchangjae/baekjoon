def distance(x1, y1, x2, y2):
  return ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** (1/2)

T = int(input())

for _ in range(T):
  x1, y1, r1, x2, y2, r2 = map(int, input().split())
  dist = distance(x1, y1, x2, y2)
  if dist > r1 + r2:
    print(0)
  elif dist == r1 + r2:
    print(1)
  else:
    r_max = max(r1, r2)
    r_min = min(r1, r2)
    if r_max > dist + r_min:
      print(0)
    elif r_max == dist + r_min:
      if dist == 0:
        print(-1)
      else:
        print(1)
    else:
      print(2)