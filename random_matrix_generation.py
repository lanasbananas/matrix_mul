import random
import numpy as np


def generation(path, row, col):
    f = open(path, 'w')
    for i in range(row):
        for j in range(col):
            f.write(f'{random.randint(0, 10)} ')
        f.write('\n')


generation('D:\\1_3.txt', 3, 3)
generation('D:\\2_3.txt', 3, 3)

generation('D:\\1_10.txt', 10, 10)
generation('D:\\2_10.txt', 10, 10)

generation('D:\\1_100.txt', 100, 100)
generation('D:\\2_100.txt', 100, 100)
