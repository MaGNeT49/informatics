vowels = "eyuioaEYUIOAауоыиэяюёеАУОЫИЭЯЮЁЕ"
count = 0

str = input()

for i in str:
    count += vowels.count(i)

print(count)
