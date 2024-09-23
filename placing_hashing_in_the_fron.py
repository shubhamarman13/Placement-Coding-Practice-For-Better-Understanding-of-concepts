name = input()
new1 = ""
new2 = ""

for cha in name:
    if(cha=="#"):
        new1=new1+cha
for char in name:
    if(char!="#"):
        new2=new2+char
        
print(new1+new2);
