import re



class Parser:
    def __init__(self):
        pass
    def parse(self,data):
        out = []
        if re.search(r"^\s*\d+",data):
            data = "+" + data
        x = re.compile(r"([+|-]\d*)(.)[\^]?(\d*)")
        r = x.findall(data)
        for mono in r:
            if mono[0] == '+' or mono[0] == '-':
                g = mono[0] + '1'
            else:
                g = mono[0]
            out = out + [(int(g),mono[1],int(mono[2]))]

        return out
        
   



#p = Parser()

#while True:
   # p.parse(input(">>"))
