# CSC 134
# M4T2 - Turtle and Loops
# mitchella
# 10/07/2026

# set up the turtle
# (choose your own colors)

import turtle
win = turtle.Screen()
win.bgcolor("lightgrey")

# set turtle config
t = turtle.Turtle()
t.color("olivedrab")
t.pencolor("midnightblue")
t.shape("turtle")
t.pensize(3)
t.fillcolor("lightseagreen")

# DRAW YOUR PICTURE HERE
# option 1 - for loop
sides = 4
length = 5
t.begin_fill()
for i in range(60):
    t.fillcolor("turquoise1")
    t.speed(10)
    t.forward(length)
    t.left(90)
    length = length + 4
t.end_fill()

    
t.teleport(300, 300)
t.begin_fill()
for i in range(10):
    t.fillcolor("orange")
    t.speed(10)
    t.circle(60)
    t.left(36)
t.end_fill()


# last line - keep window open
win.mainloop()