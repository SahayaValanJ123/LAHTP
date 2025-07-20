import math

class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
    def calc(self):
        return math.sqrt(self.x * self.y + self.x+self.y)

if  __name__== "__main__":
    p=Point(1,2)
    p.calc()