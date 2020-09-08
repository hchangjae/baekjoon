def tri(num):
  
  if num == 3:
    return [['*','*','*'],['*',' ','*'],['*','*','*']]

  if num == -3:
    return [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]

  if num < 0:
    return [[tri(num/3) , tri(num/3) , tri(num/3)] , [tri(num/3) , tri(num/3) , tri(num/3)] , [tri(num/3) , tri(num/3) , tri(num/3)]]

  return [[tri(num/3) , tri(num/3) , tri(num/3)] , [tri(num/3) , tri(num/3 * (-1)) , tri(num/3)] , [tri(num/3) , tri(num/3) , tri(num/3)]]

def sumRow(row_list):

  if type(row_list[0][0]) == str:
    return row_list

  row_list_new = list()

  for row in row_list:

    a = list()
    b = list()
    c = list()
    temp = list()
    for item in row:
      item_new = item
      if type(item[0][0]) == list:
        item_new = sumRow(item)
      for i,line in enumerate(item_new):
        if len(temp) <= i:
          temp.append(line)
        else:  
          temp[i].extend(line)
    
    row_list_new.extend(temp)

  return row_list_new

N = int(input())

row_list = sumRow(tri(N))

result = ''
for row in row_list:
  result += ''.join(row) + '\n'
print(result.strip())