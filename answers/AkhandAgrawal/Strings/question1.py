str = input("enter the string: ")
CHARS = 26
condition = True

freq = [0]*CHARS

for i in range(len(str)):
    freq[ord(str[i])-ord('a')] += 1


freq1 = 0
count_freq1 = 0
for i in range(CHARS):

    if (freq[i] != 0):

        freq1 = freq[i]
        count_freq1 = 1
        break


freq2 = 0
count_freq2 = 0
for j in range(i+1, CHARS):

    if (freq[j] != 0):

        if (freq[j] == freq1):
            count_freq1 += 1
        else:

            count_freq2 = 1
            freq2 = freq[j]
            break

for k in range(j+1, CHARS):

    if (freq[k] != 0):

        if (freq[k] == freq1):
            count_freq1 += 1
        if (freq[k] == freq2):
            count_freq2 += 1

        else:
            condition = False

    if (count_freq1 > 1 and count_freq2 > 1):
        condition = False


if (condition == True):
    print("YES")
else:
    print("NO")
