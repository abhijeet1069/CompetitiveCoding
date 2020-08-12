import matplotlib.pyplot as plt 
import math

class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

    def show(self):
        plt.scatter(self.x, self.y)

def distance(a,b):
    return math.sqrt(math.pow(b.x-a.x ,2) + math.pow(b.y-a.y ,2))
def main():
    a = Point(12,3);
    b = Point(14,66);
    a.show()
    b.show()
    print(distance(a,b))
    plt.xlabel('x - axis') #naming the x axis
    plt.ylabel('y - axis') #naming the y axis 
    plt.title('My first graph!') #giving a title to my graph  
    plt.show()  #function to show the plot


if __name__ == '__main__':
    main()
