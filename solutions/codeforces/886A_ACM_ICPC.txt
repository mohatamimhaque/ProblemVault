from itertools import combinations
def solve(score,pairs):
    for x in pairs:
        if(score[x[0][0]]+score[x[0][1]]+score[x[0][2]] == score[x[1][0]]+score[x[1][1]]+score[x[1][2]]):
            print("YES")
            return
    print("NO")








index = {0, 1, 2, 3, 4, 5}
comb_list = list(combinations(index, 3))
bipartite_graph_pairs = []
for i in range(len(comb_list)):
    for j in range(i + 1, len(comb_list)):
        set1 = set(comb_list[i])
        set2 = set(comb_list[j])
        
        if set1.isdisjoint(set2):
            bipartite_graph_pairs.append((comb_list[i], comb_list[j]))
score = list(map(int,input().split()))
solve(score,bipartite_graph_pairs)