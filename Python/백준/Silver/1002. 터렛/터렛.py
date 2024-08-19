import math

t = int(input())

for _ in range(t):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    distance = math.sqrt((x1-x2)**2 + (y1-y2)**2) #두 원 사이의 거리계산

    array1 =[] #두 점에서 마린과의 거리 및 두점사이의 거리를 담을 리스트 선언
    array1.append(r1),array1.append(r2),array1.append(distance) 
    maxNum = max(array1) #3거리중 최대값을 다른 변수에 대입
    array1.remove(maxNum) #최대값을 리스트에서 제외하기(두 원이 만나지 않는 경우 계산에 필요하기 때문)

    if distance == 0 and r1 == r2 :  # 두 원이 동심원이고 반지름이 같을 때(두 원이 일치)
        print(-1)
    elif abs(r1-r2) == distance or r1 + r2 == distance:  # 두 원이 내접, 외접일 때
        print(1)
    elif abs(r1-r2) < distance < (r1+r2) :  # 두 원이 서로다른 두 점에서 만날 때
        print(2)
    elif maxNum > array1[0]+array1[1]: # 두 원이 만나지 않는 경우(두원이 외접하지않고 외부에 있거나 
    #하나의 원이 나머지 원 내부에 있는 경우)
        print(0)