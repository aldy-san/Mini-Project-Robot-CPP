#include <gl/glut.h>
#include <stdlib.h>

void persegi(float angle,float p, float l, float posX, float posY) {
	glTranslatef(posX, posY, 0.0f);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0);
    glVertex2f(p, l);
	glColor3f(1.0f, 1.0f, 0.0);
    glVertex2f(-p, l);
	glColor3f(1.0f, 0.0f, 1.0);
    glVertex2f(-p, -l);
	glColor3f(0.0f, 0.0f, 1.0);
    glVertex2f(p,-l);
    glEnd();
    glRotatef(-angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-posX, -posY, 0.0f);
}
void render(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    //isi disini
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("Mini Project");
    gluOrtho2D(-20., 20., -20., 20.);
    glutDisplayFunc(render);
    glutMainLoop();

    return EXIT_SUCCESS;
}


