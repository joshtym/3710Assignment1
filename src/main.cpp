#include <GL/glut.h>
#include <iostream>

// Function Prototypes
void init();
void display();
void action();
void keyboard(unsigned char key, int xPos, int yPos);
void mouse(int button, int state, int xPos, int yPos);
void reshape(int width, int height);

static GLfloat spin = 0.0;

int main(int argc, char **argv)
{
	/* Supplied -- Do not change! */
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(argv[0]);
	
	init();
	
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutIdleFunc(action);
	glutMainLoop();
	
	return 0;
}

// Function Definitions
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
	glRotatef(spin, 1.0, 0.0, 0.0);
	
	glBegin(GL_LINE_LOOP);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.00, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.75,0.00, -0.75);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.50, -0.50);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.25, 0.25, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.75, 0.00, -0.75);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.50, -0.50);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.75, 0.00, -0.75);
		
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.00, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.25, 0.25, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.50, -0.50);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.75, 0.00, -0.75);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.00, -1.00);
		
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.00, 0.00, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.25, 0.25, -1.00);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.50, 0.00, -1.00);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.00, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.75,0.00, 0.75);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.50, 0.50);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.25, 0.25, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.75, 0.00, 0.75);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.50, 0.50);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 0.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.75, 0.00, 0.75);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.00, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.25, 0.25, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.50, 0.50);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.75, 0.00, 0.75);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.00, 1.00);
		
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.00, 0.00, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.25, 0.25, 1.00);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.50, 0.00, 1.00);
	glEnd();
	
	glPopMatrix();
	glutSwapBuffers();
	glFlush();
}

void action()
{
	spin = spin + 0.02;
	
	if (spin > 360.0)
		spin = spin - 360;
	
	glutPostRedisplay();
}

void keyboard(unsigned char key, int xPos, int yPos)
{
	switch(key)
	{
		case 27:
			break;
		case 82:
			break;
		case 114:
			break;
		case 88:
			glutIdleFunc(action);
			break;
		case 120:
			glutIdleFunc(action);
			break;
		case 89:
			break;
		case 121:
			break;
		case 90:
			break;
		case 122:
			break;
		default:
			break;
	}
			
}

void mouse(int button, int state, int xPos, int yPos)
{
	switch(button)
	{
		case GLUT_LEFT_BUTTON:
			break;
		case GLUT_RIGHT_BUTTON:
			break;
		default:
			break;
	}
}

void reshape(int width, int height)
{
	/* Supplied -- Do not change! */
	glViewport(0, 0, (GLsizei) width, (GLsizei) height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	/* set the viewing area -- use perspective projection
	 * an object at the origin that is about 1 or 2 units wide should
	 * be nicely visible
	*/
	glFrustum(-1.0, 1.0, -1.0, 1.0, 0.5, 15.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	/* Viewing Transformation
	 * sets the eye to be at (1.5, 1.5, 1.5) looking at the origin etc.
	*/
	gluLookAt(1.5, 1.5, 1.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}
