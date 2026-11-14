word = input().lower()

palindrome = True
for i in range(len(word) // 2):
    if word[i] != word[len(word) - 1 - i]:
        palindrome = False

if palindrome:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")