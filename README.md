# Algorithm_Problem_Solving_Startegies
### Chapter6 Brute Force  
컴퓨터의 빠른 계산 능력을 이용해 가능한 경우의 수를 일일히 나열하면서 답을 찾는 방법  
완전 탐색(exhaustive search) : 가능한 경우의 수를 전부 만들어보는 알고리즘  
  
###### 6.4 PICNIC  
 * 재귀 호출을 이용한 완전탐색으로 가능한 경우의 수를 계산
###### 6.7 TSP(Traveling Salesman Problem)  
 * 각 정점을 방문했는지 여부를 확인하는 visited(boolean)값
 * 경로의 길이 currentLength, path 값을 이용해서 값을 쉽게 비교
### Chapter7 Divide&Conquer  
주어진 문제를 둘 이상의 부분 문제로 나눈 뒤 각 문제에 대한 답을 재귀 호출을 이용해 계산  
각 부분 문제에 대한 답으로부터 전체 문제의 답을 계산
##### 7.2 QUADTREE
 * 퀴드 트리(quad tree) : 주어진 공간을 항상 4개로 분할해 재귀적으로 표현
 * 점점 작을 문제로 이동해 가며 위와 아래를 바꾸는 방법을 통해 압축되 쿼드트리를 풀지 않고도 결과 계산