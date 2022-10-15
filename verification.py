import numpy as np


def verification(path1, path2, path3):
    f = open(path1, 'r')
    matrix1 = f.readlines()
    data_1 = np.loadtxt(matrix1)
    f.close()

    f = open(path2, 'r')
    matrix2 = f.readlines()
    data_2 = np.loadtxt(matrix2)
    f.close()

    f = open(path3, 'r')
    res = np.loadtxt(f)
    f.close()

    res_test = np.dot(data_1, data_2)
    print(np.array_equal(res, res_test))


verification("D:\\1_3.txt", "D:\\2_3.txt", "D:\\res_3.txt")
verification("D:\\1_10.txt", "D:\\2_10.txt", "D:\\res_10.txt")
verification("D:\\1_100.txt", "D:\\2_100.txt", "D:\\res_100.txt")
verification("D:\\1_500.txt", "D:\\2_500.txt", "D:\\res_500.txt")
verification("D:\\1_1000.txt", "D:\\2_1000.txt", "D:\\res_1000.txt")
