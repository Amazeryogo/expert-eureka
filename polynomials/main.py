
import Parser
import Polynomials as poly

filename = input("fn>>")
p = Parser.Parser()
polys = []
with open(filename,'r') as d:
    while True:
        con = d.readline()
        if con:
            polys = polys +  [poly.Poly(p.parse(con))]
        else:
            break
      
    d.close()

print(polys[0] + polys[1])
