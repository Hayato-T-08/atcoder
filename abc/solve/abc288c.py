import networkx as nx
a=[int(i) for i in input().split()]
c=[]
n=a[0]
m=a[1]
for i in range(m):
    b=[int(j) for j in input().split()]
    c.append(b)


def count_simple_cycles(edges):
    G = nx.Graph(edges)
    H = G.to_directed()
    n = H.number_of_edges()
    simple_cycles = list(nx.simple_cycles(H))
    
    return (len(simple_cycles) - n // 2) // 2
d=count_simple_cycles(c)
print(d)