
class Square:
    def __init__(self):
        self.x = 0
        self.y = 0
        self.z = 0
    

    def setx(self,x):
        self.x = x
    def sety(self,y):
        self.y = y
    def setz(self,z):
        self.z = z
    
    def getx(self):
        return self.x
    def gety(self):
        return self.y
    def getz(self):
        return self.z
    

    def get(self):
        return (self.getx(),self.gety(),self.getz())
    def set(self,x,y,z):
        self.setx(x)
        self.sety(y)
        self.setz(z)
        