import sys
sys.stdin = open("maxcross.in.txt")
sys.stdout = open("maxcross.out.txt")
N,K,B = map(int,input().split())
broken = {int(input()) for _ in range(B)}


light = [0]*(N+1)
for i in range(1,N+1):
    light[i] = light[i-1] + (i in broken)
working_lights = B

for i in range(N-K+1):
    working_lights = min(light[i+K]-light[i],working_lights)
print(working_lights)
