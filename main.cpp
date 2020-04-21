#include <C:\freeglut\include\GL\glut.h>
#include<math.h>

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
	glClearColor(0, 0.3, 0.5, 1); // R,G,B,opacidad
	
	glLineWidth(3.f);
	glPointSize(5);
	
	glOrtho(800, 0, 600, 0, -1, 1);
	
	glMatrixMode(GL_MODELVIEW);
	
	glLoadIdentity();
	
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//Numeros
	//12
	glPushMatrix();
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	//12
	glPushMatrix();
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.63);
	glEnd();
	glPopMatrix();
	
	
	//Segundos
	glPushMatrix();
	glRotated(segundos, 0, 0, 1);
	glColor3f(1,0,0);
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0.009, 0.0);
	glVertex2f(-0.009, 0.0);
	glVertex2f(0.0, 0.6);
	
	glEnd();
	Sleep(10);
	segundos -= 6.0;
	glPopMatrix();
	
	//Minutos
	glPushMatrix();
	glRotated(minutos, 0, 0, 1);
	glColor3f(0, 1, 0);
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0.012, 0.0);
	glVertex2f(-0.012, 0.0);
	glVertex2f(0.0, 0.5);
	
	glEnd();
	
	if(segundos == -360.0)
	{
		minutos -= 3.0;
		segundos = 0.0;
	}
	
	glPopMatrix();
	
	//horas
	glPushMatrix();
	glRotated(horas, 0, 0, 1);
	glColor3f(0, 0, 1);
	
	glBegin(GL_TRIANGLES);
	glVertex2f(0.015, 0.0);
	glVertex2f(-0.015, 0.0);
	glVertex2f(0.0, 0.4);
	
	glEnd();
	
	if(minutos == -360.0)
	{
		horas -= 30.0;
		minutos = 0.0;
	}
	
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
	glutCreateWindow("Reloj Uriel Velazquez");
	
	iniciar();
	
	glutDisplayFunc(dibujar); //cada que dibuje se usara esa funcion
	
	glutTimerFunc(valor, tiempo, 0);
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
