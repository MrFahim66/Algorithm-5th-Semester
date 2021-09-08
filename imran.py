n1 = int(input())

rows, cols = (n1,n1)

User_Array=[]

for i in range(rows):

    col = []

    for j in range(cols):

        col.append(input())

    User_Array.append(col)

print('\nInput N: ',n1*n1)
print('Generated List: ',User_Array)