#!/bin/python3


def gradingStudents(grades):    
    gr = []
    for i in grades:
        if(i < 38):
            gr.append(i)
        else:
            j = 1
            k = 5
            while(k<i):
                k = 5
                k = k*j
                j+=1
            if((k - i) < 3):                
                gr.append(k)
            else:
                gr.append(i)
            
    return gr

n = int(input())
grd = []
for i in range(0,n):
    grd.append(int(input()))
grade = gradingStudents(grd)
for i in grade:
    print(i)

    


