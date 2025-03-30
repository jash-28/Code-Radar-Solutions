def selection_sort_chars(n, chars):
    for i in range(n):
        min_index = i
        for j in range(i+1, n):
            if chars[j] < chars[min_index]:
                min_index = j
        chars[i], chars[min_index] = chars[min_index], chars[i]
    return ' '.join(chars)

# Input
n = int(input())
chars = input().split()

# Sorting using selection sort
result = selection_sort_chars(n, chars)
print(result)