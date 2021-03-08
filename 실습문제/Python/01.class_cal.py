class cal():
    def __init__(self,first,second):
        self.first=first
        self.second=second
    def setdata(self, first, second):
        self.first = first
        self.second = second
    def plu(self):
        result = self.first+self.second
        return result
    def min(self):
        result = self.first-self.second
        return result
    def mul(self):
        result = self.first*self.second
        return result
    def div(self):
        result = self.first/self.second
        return result
        

class morecal(cal):
    def pow(self):
        result = self.first**self.second
        return result


class safecal(cal):
    def div(self):
        if self.second == 0:
            return 0
        else:
            return self.first / self.second
