def keyValue(t):
    return (t[1],t[2])
def lessThan(t1,t2):
    if t1[1] < t2[1]:
        return True
    elif t1[1] > t2[1]:
        return False
    else: 
        return int(t1[2]) < int(t2[2]) 
def isZero(mono):
    return mono[0] == 0

def add(poly1,poly2):
    if poly1 == []:
        return poly2
    elif poly2 == []:
        return poly1
    else:
        mono1 = poly1[0]
        mono2 = poly2[0]
        if lessThan(mono1,mono2):
            return [mono1] + add(poly1[1:],poly2)
        elif lessThan(mono2,mono1):
            return [mono2] + add(poly1,poly2[1:])
        else:
            mono = (mono1[0]+mono2[0],mono1[1],mono2[2])
            if isZero(mono):
                return add(poly1[1:],poly2[1:])
            else:
                return [mono] + add(poly1[1:],poly2[1:])

class Poly:
    def __init__(self,listj=[]):
        self.poly = listj
    def normalised(self):
        return sorted(self.poly,key=keyValue)
    
    def __add__(self,other):
        poly1 = self.normalised() 
        poly2 = other.normalised()
        return Poly(add(poly1,poly2))
    def __str__(self):
        string = ''
        for mono in self.poly:
            c = ''
            if mono[0] >= 0:
                c = '+'
            string = string + ' ' + c + str(mono[0]) + mono[1] + '^' + str(mono[2])
        return string


