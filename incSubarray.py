

def maxArr(arr):
    res = []
    count = 0
    for i in range(len(arr)-1):
        if(arr[i] < arr[i+1]):
            count+=1

        else:
            if(count != 0):
                res.append(count+1)
                count = 0
    if(count != 0):
        res.append(count+1)
    return res
    

def main():
    arr = [12,34,78,89,90,2,3,23,323,23,4,23,4,3,43,43,23,3,5,6,7,76,7676,2]
    print(maxArr(arr))


if __name__ == '__main__':
    main()



