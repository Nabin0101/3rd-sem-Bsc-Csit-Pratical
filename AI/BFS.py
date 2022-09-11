# -*- coding: utf-8 -*-
"""
Created on Sun Sep 11 14:17:52 2022

@author: User
"""

graph={
    'A':['C','E'],
    'B':[],
    'C':['B','G'],
    'D':[],
    'E':['H'],
    'H':['D'],
    'G':[]
}

def bfs(graph,node):
    # node is the starting position
    # graph is the graph in dictionary format
    visited=[]
    queue=[]
    visited.append(node)
    queue.append(node)
    
    while queue:
        s=queue.pop(0)
        
        for x in graph[s]:
            if x not in visited:
                visited.append(x)
                queue.append(x)
    return visited