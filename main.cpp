#include <C:\freeglut\include\GL\glut.h>
#include<iostream>
#include<ctime>

int valor = 1;
GLfloat segundos = 0.0f;
GLfloat minutos = 0.0f;
GLfloat horas = 0.0f;

void tiempo(int param)
{
	glutPostRedisplay();
	glutTimerFunc(valor, tiempo, 0);
}

void iniciar()
{
	
	glClearColor(0, 0.20, 0.50, 1); // R,G,B,opacidad
	
	glLineWidth(3.f);
	glPointSize(8);
	
	glOrtho(800, 0, 600, 0, -1, 1);
	
	glMatrixMode(GL_MODELVIEW);
	
	glLoadIdentity();
	
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Lee e inicia marcando la misma hora que el pc
	time_t now = time(0);
	tm * time =localtime(&now);
	segundos = 6 * (- time->tm_sec);
	minutos = 6 * (- time->tm_min);
	horas = 30 * (- time->tm_hour);
	
	//Numeros/lineas
	//12
	glPushMatrix();
	glBegin(GL_POINTS);
	glColor3f(0.70, 0, 0);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//11
	glPushMatrix();
	glRotated(30, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//10
	glPushMatrix();
	glRotated(60, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//9
	glPushMatrix();
	glRotated(90, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(0.70, 0, 0);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//8
	glPushMatrix();
	glRotated(120, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//7
	glPushMatrix();
	glRotated(150, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//6
	glPushMatrix();
	glRotated(180, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(0.70, 0, 0);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//5
	glPushMatrix();
	glRotated(210, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//4
	glPushMatrix();
	glRotated(240, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//3
	glPushMatrix();
	glRotated(270, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(0.70, 0, 0);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//2
	glPushMatrix();
	glRotated(300, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//1
	glPushMatrix();
	glRotated(330, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//Segundos
	glPushMatrix();
	glRotated(segundos, 0, 0, 1);
	glColor3f(0.255,0.51,0.360);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.009, -0.16);
	glVertex2f(-0.009, -0.16);
	glVertex2f(0.0, 0.6);
	
	glEnd();
	glPopMatrix();
	
	//Minutos
	glPushMatrix();
	glRotated(minutos, 0, 0, 1);
	glColor3f(0.400,0.51,0.153);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.012, -0.14);
	glVertex2f(-0.012, -0.14);
	glVertex2f(0.0, 0.5);
	
	glEnd();
	
	glPopMatrix();
	
	//horas
	glPushMatrix();
	glRotated(horas, 0, 0, 1);
	glColor3f(0.360,0,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.012, -0.12);
	glVertex2f(-0.012, -0.12);
	glVertex2f(0.0, 0.4);
	
	glEnd();
	
	glPopMatrix();
	
	glFlush();
}

int main(int argc, char * args[])
{
	//pantalla
	glutInit(&argc, args); //inicia glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //modo de video
	glutInitWindowSize(600, 600); 
	glutInitWindowPosition(50, 50);
	glutCreateWindow("RELOJ. POR: URIEL UBALDO VELAZQUEZ ZAMORA");
	
	iniciar();
	
	glutDisplayFunc(dibujar); //cada que dibuje se usara esa funcion
	
	glutTimerFunc(valor, tiempo, 0);
	glutMainLoop();
}
