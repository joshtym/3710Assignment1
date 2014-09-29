#include <GL/glut.h>
#include <iostream>

// Function Prototypes
void init();
void display();
void action();
void keyboard(unsigned char key, int xPos, int yPos);
void mouse(int button, int state, int xPos, int yPos);
void reshape(int width, int height);

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
}

void display()
{
}

void action()
{
}

void keyboard(unsigned char key, int xPos, int yPos)
{
}

void mouse(int button, int state, int xPos, int yPos)
{
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
