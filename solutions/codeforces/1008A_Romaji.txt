def solve():
    vowel = ['a','e','i','o','u']
    string = input()
    if string[-1] not in vowel and string[-1] != 'n' or len(vowel)==1 and string[0] not in vowel:
        print("NO\n")
        return
    for i in range(0,len(string)-1):
        ch = string[i]
        if ch=='n':
            continue
        else:
            if ch not in vowel and string[i+1] not in vowel:
                print("NO\n")
                return
    
    print("YES\n")
        


solve()