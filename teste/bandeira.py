import turtle

t = turtle.Turtle()

def desenhaCirculo(cor,raio,x,y):
    t.penup()
    t.fillcolor(cor)
    t.goto(x,y)
    t.pendown()
    t.begin_fill()
    t.circle(raio)
    t.end_fill()

def desenhaRetangulo(cor,x,y):
    t.penup()
    t.fillcolor(cor)
    t.goto(x,y)
    t.pendown()
    t.begin_fill()
    t.goto(-x,y)
    t.goto(-x,-y)
    t.goto(x,-y)
    t.goto(x,y)
    t.end_fill()

def desenhaLosango(cor,x,y):
    t.penup()
    t.fillcolor(cor)
    t.goto(0,y)
    t.pendown()
    t.begin_fill()
    t.goto(x,0)
    t.goto(0,-y)
    t.goto(-x,0)
    t.goto(0,y)
    t.end_fill()

desenhaRetangulo("green",-150,90)
desenhaLosango("yellow",-140,80)
desenhaCirculo("blue", 50, 0, -50)