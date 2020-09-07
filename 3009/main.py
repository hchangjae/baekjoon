result_x = 0
result_y = 0
for _ in range(3):
  x, y = map(int, input().split())
  result_x ^= x
  result_y ^= y

print(result_x, result_y)