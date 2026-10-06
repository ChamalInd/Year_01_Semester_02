MEM_SIZE = 100

reg = {'r1':0, 'r2':0, 'r3':0, 'r4':0, 'r5':0,'r6':0,'sp':0,'acc':0, 'pc':0, 'ivec':0, 'int':0, 'timer':0, 'halt':False}

memory = [0] * MEM_SIZE

def mov(opr):
	reg[opr[0]] = reg[opr[1]]
	reg['pc'] += 1

def movv(opr):
	reg[opr[0]]=int(opr[1])
	reg['pc'] += 1

def sub(opr):
	reg['acc']=reg[opr[0]] - reg[opr[1]]
	reg['pc'] += 1

def mod(opr):
	reg['acc']=reg[opr[0]] % reg[opr[1]]
	reg['pc'] += 1

def out(opr):
	print(reg[opr[0]])
	reg['pc'] += 1

def halt(opr):
	reg['halt'] = True
	reg['pc'] += 1


f=open('ass-1.asm','r')

def runm():
	while reg['halt'] == False:
		i = reg['pc']
		op = globals()[memory[i][0]]
		op(memory[i][1:])
		pass;
	
		reg['timer'] = reg['timer']-1
		if reg['int'] == 1 and reg['timer']==0:
			reg['sp'] += 1
			memory[reg['sp']] = reg['pc']
			reg['pc'] = reg['ivec']
			reg['int'] = 0
		
	
	
for l in f:
	if l.startswith("#"):
		continue

	comm= l.split()
	if comm:
		memory[int(comm[0])] = comm[1:]
	
runm()
	
print(reg)
print(memory)
