## 이중 반복문 구조 활용
n, m = map(int, input().split())

result = 0 

for i in range(n):
  data=list(map(int, input().split()))
  min_value = 100
  for a in data:
    min_value = min(min_value,a)
  
  result = max(result, min_value)

print(result)
