n = int(input())
arr = list(map(int, input().split()))
freq = {}

for num in arr:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1

for num in arr:
    if freq[num] != 0:
        print(num, freq[num])
        freq[num] = 0