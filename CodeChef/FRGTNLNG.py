t = int(input())

for i in range(t):
    s = input()
    n,m = s.split(' ')
    n = int(n)
    m = int(m)
    words = {}
    line = input()
    words={word: 0 for word in line.split(' ')}
    for j in range(m):
        line = input()
        new_words = line.split(' ')
        for new_word in new_words:
            if new_word in words:
                words[new_word] = 1
    
    for new_word in words:
        if words[new_word]==1:
            print('YES',end=' ')
        else:
            print('NO',end=' ')
    print('')
        