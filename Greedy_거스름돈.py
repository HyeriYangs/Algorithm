n = 1260 # 거스름돈
count = 0 

# 거스름돈 단위 : 500원, 100원, 50원, 10원
coin_types = [500, 100, 50, 10 ]

for coin in coin_types:
  count += n // coin  #해당 화폐로 거슬러 줄 동전의 개수 세기 
  n %= coin 

print(count)


# // 연산자 : 몫을 구함. 
# % 연산자 : 나머지를 구함. 
