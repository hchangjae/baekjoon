while True:
  a, b, c = map(int, input().split())

  if a == b == c == 0:
    break

  num_min = min(a,b,c)
  num_max = max(a,b,c)
  num_mid = a ^ b ^ c ^ num_max ^ num_min

  if num_min*num_min + num_mid*num_mid == num_max*num_max:
    result = 'right'
  else:
    result = 'wrong'

  print(result)