#include <C:\freeglut\include\GL\glut.h>
#include<iostream>
#include<windows.h>
#include<math.h>

float px = 2, py = 5, radio = 10, auxcalx, auxcaly;
double posicion_hora = 0.0f;

void iniciar()
{
	glClearColor(0.049, 0.159, 0.155, 1); // R,G,B,opacidad
	
	glLineWidth(3.f);
	
	gluOrtho2D(-20, 20, -20, 20); //camara (posicion, angulo, lejania)
	
	glMatrixMode(GL_MODELVIEW); //para trabajar con matrices
	
	glLoadIdentity(); // se carga la matriz
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT); //limpieza basada en el color
	
	
	
	glBegin(GL_POLYGON); //inicio
	
	
	//dubujando el circulo punto por punto
	for(double i = 0.0; i < 10; i += 0.001)
	{
		glColor3f(0.255, 0, 0);
		
		auxcalx = radio * cos(i);
		auxcaly = radio * sin(i);
		
		glVertex2f(auxcalx, auxcaly);
	}
	
	glEnd(); //fin
	
	glPushMatrix(); //crear
	glBegin(GL_LINES);
	
	glRotated(20, 0, 0, .5);
	
	//hora
	glColor3f(1, 0, 0);
	glVertex2f(0,8);
	glVertex2f(0,0);
	
	//minutos
	glColor3f(0, 1, 0);
	glVertex2f(0,7);
	glVertex2f(0,0);
	
	//segundos
	glColor3f(0, 0, 1);
	glVertex2f(0,6);
	glVertex2f(0,0);
	
	glEnd();
	
	glPopMatrix(); //destruir
	
	glFlush(); //limpia pantalla (buffer)
}


int main(int argc, char * args[])
{
	//pantalla
	glutInit(&argc, args); //inicia glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //modo de video
	glutInitWindowSize(600, 600); 
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Reloj Uriel Velazquez");
	
	iniciar();
	
	glutDisplayFunc(dibujar); //cada que dibuje se usara esa funcion
	
	
	glutMainLoop();
	
	
	/*codigo del reloj
    int segundos = 0, minutos = 0, horas = 0;
    bool ciclo = true;
    while(ciclo)
    {
        system("cls");
        std::cout<<horas<<":"<<minutos<<":"<<segundos<<std::endl;
        Sleep (1000);
        segundos ++; 
        if(segundos == 60)
        {
            minutos ++;
            segundos = 0;
        }
        if(minutos == 60)
        {
            horas ++;
            minutos = 0;
        }
        if(horas == 13)
        {
            horas = 1;
        }
    }*/
}
