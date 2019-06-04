# -*- coding: utf-8 -*-

def move(n, a, b, c):
        if n == 1:
            print(a, '-->', c)
        else:
            move(n-1, a, c, b) #先移动上面n-1个
            move(1, a, b, c)   #再移动最后一个
            move(n-1, b, a, c) #再将n-1个小的放上去

move(3, 'A', 'B', 'C')
