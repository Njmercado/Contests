def build_tree_leafs(n, l, i):
  if i+1 > l: return
  for j in range(0, n):
    print(' '*(n+l-(i+j)-2) + '*'*((i+j)*2 + 1))
  build_tree_leafs(n, l, i+1)

def build_tree_base(n, l):
  for i in range(0, n):
    print(' '*(n+l-2) + '*')
  print('*'*((n+l)*2-3))

if __name__ == '__main__':
  n = int(input('n: '))
  l = int(input('l: '))
  build_tree_leafs(n, l, 0)
  build_tree_base(n, l)