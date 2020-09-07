def pactorial(num):
  if num <= 1:
    return 1
  return pactorial(num-1) * num

N = int(input())

print(pactorial(N))