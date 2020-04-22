#include <C:\freeglut\include\GL\glut.h>
#include<ctime>

int valor = 1;
GLfloat segundos = 0.0f;
GLfloat minutos = 0.0f;
GLfloat horas = 0.0f;

void tiempo(int param)
{
	glutPostRedisplay();
	glutPopWindow();
	glutTimerFunc(valor, tiempo, 0);
}

void iniciar()
{
	glClearColor(0.30, 0.70, 0.50, 1); // R,G,B,opacidad
	
	glLineWidth(1.f);
	glPointSize(2);
	
	glOrtho(800, 0, 600, 0, -1, 1);
	
	glMatrixMode(GL_MODELVIEW);
	
	glLoadIdentity();
	
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Lee la hora del pc
	time_t now = time(0);
	tm * time =localtime(&now);
	segundos = 6 * (- time->tm_sec);
	minutos = 6 * (- time->tm_min);
	horas = 30 * (- time->tm_hour);
	
	// MINUTOS/SEGUNDOS
	// 1
	glPushMatrix();
	glRotated(-6, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 2
	glPushMatrix();
	glRotated(-12, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 3
	glPushMatrix();
	glRotated(-18, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 4
	glPushMatrix();
	glRotated(-24, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 5-1
	glPushMatrix();
	glRotated(-30, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glVertex2f(0.0, 0.71);
	glVertex2f(0.01, 0.71);
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(-0.01, 0.63);
	glEnd();
	glPopMatrix();
	// 6
	glPushMatrix();
	glRotated(-36, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 7
	glPushMatrix();
	glRotated(-42, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 8
	glPushMatrix();
	glRotated(-48, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 9
	glPushMatrix();
	glRotated(-54, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 10-2
	glPushMatrix();
	glRotated(-60, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(-0.01, 0.63);
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.0, 0.71);
	glVertex2f(-0.02, 0.71);
	glVertex2f(0.0, 0.63);
	glVertex2f(-0.02, 0.63);
	
	glVertex2f(0.02, 0.63);
	glVertex2f(0.02, 0.71);
	glVertex2f(0.03, 0.71);
	glVertex2f(0.01, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.03, 0.63);
	glEnd();
	glPopMatrix();
	// 11
	glPushMatrix();
	glRotated(-66, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 12
	glPushMatrix();
	glRotated(-72, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 13
	glPushMatrix();
	glRotated(-78, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 14
	glPushMatrix();
	glRotated(-84, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 15-3
	glPushMatrix();
	glRotated(-90, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(0.70, 0, 0);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.02, 0.71);
	glVertex2f(-0.04, 0.71);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.04, 0.63);
	
	glVertex2f(0.0, 0.63);
	glVertex2f(0.0, 0.71);
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.01, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(-0.01, 0.63);
	
	glVertex2f(0.03, 0.63);
	glVertex2f(0.03, 0.71);
	glVertex2f(0.02, 0.71);
	glVertex2f(0.04, 0.71);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.04, 0.63);
	glEnd();
	glPopMatrix();
	// 16
	glPushMatrix();
	glRotated(-96, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 17
	glPushMatrix();
	glRotated(-102, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 18
	glPushMatrix();
	glRotated(-108, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 19
	glPushMatrix();
	glRotated(-114, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 20-4
	glPushMatrix();
	glRotated(-120, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.01, 0.71);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.03, 0.71);
	
	glVertex2f(-0.01, 0.71);
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.01, 0.63);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.02, 0.71);
	glEnd();
	glPopMatrix();
	// 21
	glPushMatrix();
	glRotated(-126, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 22
	glPushMatrix();
	glRotated(-132, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 23
	glPushMatrix();
	glRotated(-138, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 24
	glPushMatrix();
	glRotated(-144, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 25-5
	glPushMatrix();
	glRotated(-150, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.0, 0.63);
	glVertex2f(0.01, 0.71);
	glEnd();
	glPopMatrix();
	// 26
	glPushMatrix();
	glRotated(-156, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 27
	glPushMatrix();
	glRotated(-162, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 28
	glPushMatrix();
	glRotated(-168, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 29
	glPushMatrix();
	glRotated(-174, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//30-6
	glPushMatrix();
	glRotated(-180, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(0.70, 0, 0);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.01, 0.71);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.03, 0.71);
	
	glVertex2f(0.01, 0.71);
	glVertex2f(0.03, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.02, 0.71);
	glEnd();
	glPopMatrix();
	// 31
	glPushMatrix();
	glRotated(-186, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 32
	glPushMatrix();
	glRotated(-192, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 33
	glPushMatrix();
	glRotated(-198, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 34
	glPushMatrix();
	glRotated(-204, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//35-7
	glPushMatrix();
	glRotated(-210, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(-0.04, 0.63);
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.04, 0.63);
	glVertex2f(-0.05, 0.71);
	
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.01, 0.71);
	glVertex2f(-0.01, 0.63);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.0, 0.63);
	glVertex2f(0.0, 0.71);
	
	glVertex2f(0.02, 0.71);
	glVertex2f(0.04, 0.71);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.04, 0.63);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.03, 0.71);
	glEnd();
	glPopMatrix();
	// 36
	glPushMatrix();
	glRotated(-216, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 37
	glPushMatrix();
	glRotated(-222, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 38
	glPushMatrix();
	glRotated(-228, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 39
	glPushMatrix();
	glRotated(-234, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//40-8
	glPushMatrix();
	glRotated(-240, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(-0.06, 0.63);
	glVertex2f(-0.05, 0.71);
	glVertex2f(-0.06, 0.63);
	glVertex2f(-0.07, 0.71);
	
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.01, 0.71);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.01, 0.63);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.02, 0.71);
	
	glVertex2f(0.0, 0.71);
	glVertex2f(0.02, 0.71);
	glVertex2f(0.0, 0.63);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.01, 0.71);
	
	glVertex2f(0.03, 0.71);
	glVertex2f(0.05, 0.71);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.05, 0.63);
	glVertex2f(0.04, 0.63);
	glVertex2f(0.04, 0.71);
	glEnd();
	glPopMatrix();
	// 41
	glPushMatrix();
	glRotated(-246, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 42
	glPushMatrix();
	glRotated(-252, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 43
	glPushMatrix();
	glRotated(-258, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 44
	glPushMatrix();
	glRotated(-264, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 45-9
	glPushMatrix();
	glRotated(-270, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(0.70, 0, 0);
	glVertex2f(-0.01, 0.71);
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.01, 0.63);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.02, 0.63);
	glVertex2f(-0.02, 0.71);
	
	glVertex2f(0.01, 0.71);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.03, 0.71);
	glEnd();
	glPopMatrix();
	// 46
	glPushMatrix();
	glRotated(-276, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 47
	glPushMatrix();
	glRotated(-282, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 48
	glPushMatrix();
	glRotated(-288, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 49
	glPushMatrix();
	glRotated(-294, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 50-10
	glPushMatrix();
	glRotated(-300, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(-0.01, 0.63);
	glVertex2f(0.01, 0.71);
	glEnd();
	glPopMatrix();
	// 51
	glPushMatrix();
	glRotated(-306, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 52
	glPushMatrix();
	glRotated(-312, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 53
	glPushMatrix();
	glRotated(-318, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 54
	glPushMatrix();
	glRotated(-324, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 55-11
	glPushMatrix();
	glRotated(-330, 0, 0, 1);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(-0.01, 0.71);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.01, 0.63);
	glVertex2f(-0.03, 0.71);
	
	glVertex2f(0.01, 0.71);
	glVertex2f(0.03, 0.71);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.02, 0.71);
	glEnd();
	glPopMatrix();
	// 56
	glPushMatrix();
	glRotated(-336, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 57
	glPushMatrix();
	glRotated(-342, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 58
	glPushMatrix();
	glRotated(-348, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	// 59
	glPushMatrix();
	glRotated(-354, 0, 0, 1);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	// 60-12
	glPushMatrix();
	glBegin(GL_LINES);
	glColor3f(0.70, 0, 0);
	glVertex2f(-0.03, 0.71);
	glVertex2f(-0.05, 0.63);
	glVertex2f(-0.03, 0.63);
	glVertex2f(-0.05, 0.71);
	
	glVertex2f(-0.01, 0.71);
	glVertex2f(0.01, 0.71);
	glVertex2f(-0.01, 0.63);
	glVertex2f(0.01, 0.63);
	glVertex2f(0.0, 0.63);
	glVertex2f(0.0, 0.71);
	
	glVertex2f(0.02, 0.71);
	glVertex2f(0.04, 0.71);
	glVertex2f(0.02, 0.63);
	glVertex2f(0.04, 0.63);
	glVertex2f(0.03, 0.63);
	glVertex2f(0.03, 0.71);
	glEnd();
	glPopMatrix();
	
	// MANECILLAS
	// Segundos
	glPushMatrix();
	glRotated(segundos, 0, 0, 1);
	glColor3f(0.255,0.40,0.36);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.009, -0.16);
	glVertex2f(-0.009, -0.16);
	glVertex2f(0.0, 0.6);
	
	glEnd();
	glPopMatrix();
	
	// Minutos
	glPushMatrix();
	glRotated(minutos, 0, 0, 1);
	glColor3f(0.255,0.40,0.36);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.012, -0.14);
	glVertex2f(-0.012, -0.14);
	glVertex2f(0.0, 0.5);
	
	glEnd();
	
	glPopMatrix();
	
	// Horas
	glPushMatrix();
	glRotated(horas, 0, 0, 1);
	glColor3f(0.255,0.40,0.36);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.012, -0.12);
	glVertex2f(-0.012, -0.12);
	glVertex2f(0.0, 0.4);
	
	glEnd();
	glPopMatrix();
	
	// Centro
	glColor3f(1, 1, 1);
	glBegin(GL_POINTS);
	glVertex2f(0.0, 0.0);
	glEnd();
	
	Sleep(100);
	
	glFlush();
}

int main(int argc, char * args[])
{
	// Pantalla
	glutInit(&argc, args); // Inicia glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // Modo de video
	glutInitWindowSize(200, 200); 
	glutInitWindowPosition(1030, 0);
	glutCreateWindow("https://github.com/uriel-Velazquez/reloj-analogo-12h-opengl");
	
	iniciar();
	
	glutDisplayFunc(dibujar); // Cada que dibuje se usara esa funcion
	
	glutTimerFunc(valor, tiempo, 0);
	glutMainLoop();
}
