def fibonacci(num):
  if num == 1:
    return 1
  if num == 0:
    return 0
  return fibonacci(num - 2) + fibonacci(num - 1)

N = int(input())

print(fibonacci(N))