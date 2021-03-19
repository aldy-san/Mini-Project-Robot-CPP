#include <gl/glut.h>
#include <stdlib.h>
#include <Math.h>
#define PI 3.14159265f

void segitiga(float angle, float origin, float p, float q, float r, float posX, float posY) {
	glTranslatef(posX, posY, 0.0f);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_TRIANGLES);
    glVertex2f(origin, p);
    glVertex2f(origin, q);
    glVertex2f(origin, r);
    glEnd();
    glRotatef(-angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-posX, -posY, 0.0f);
}
void persegi(float angle,float p, float l, float posX, float posY) {
	glTranslatef(posX, posY, 0.0f);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);
    glVertex2f(p, l);
    glVertex2f(-p, l);
    glVertex2f(-p, -l);
    glVertex2f(p,-l);
    glEnd();
    glRotatef(-angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-posX, -posY, 0.0f);
}
void lingkaran(float ballRadius, float posX, float posY){
	glTranslatef(posX, posY, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
	int numSegments = 100;
	GLfloat angle;
	for(int i = 0; i <= numSegments; i++){
    	glColor3f(0.0f, 0.85f, 0.0f);
		angle = i * 2.0f * PI / numSegments;
		glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
	}
	glEnd();
	glTranslatef(-posX, -posY, 0.0f);
}
void initGL(){
	glClearColor(1.0, 1.0, 1.0, 1.0);
}
void render(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    //KEPALA
    	//border
    	glColor3f(0.5f, 1.0f, 0.5f);
    	persegi(0, 5.2f, 4.f, 0.0f, 10.0f);
    	//fill
    	glColor3f(0.0f, 0.7f, 0.0f);
    	persegi(0, 5.f, 3.8f, 0.0f, 10.0f);
    	//MATA
    	glColor3f(1.0f, 0.5f, 0.0f);
    	persegi(0, 1.5f, 0.9f, -2.0f, 11.0f);
    	persegi(0, 1.5f, 0.9f, 2.0f, 11.0f);
    	glColor3f(1.0f, 1.0f, 0.0f);
    	persegi(0, 0.8f, 0.5f, -2.0f, 11.0f);
    	persegi(0, 0.8f, 0.5f, 2.0f, 11.0f);
    	//MULUT
    	//kiri-kanan
    	glColor3f(1.0f, 1.0f, 1.0f);
    	persegi(0, 2.0f, 0.5f, 0.0f, 8.0f);
    	glColor3f(0.0f, 0.0f, 0.0f);
    	persegi(0, 0.05f, 0.5f, -2.0f, 8.0f);
    	persegi(0, 0.05f, 0.5f, -1.6f, 8.0f);
    	persegi(0, 0.05f, 0.5f, -1.2f, 8.0f);
    	persegi(0, 0.05f, 0.5f, -0.8f, 8.0f);
    	persegi(0, 0.05f, 0.5f, -0.4f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 0.f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 0.4f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 0.8f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 1.2f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 1.6f, 8.0f);
    	persegi(0, 0.05f, 0.5f, 2.f, 8.0f);
    //LEHER
	    //border
	    glColor3f(0.5f, 1.0f, 0.5f);
	    persegi(0, 3.2f, 1.f, 0.0f, 5.2f);
	    //fill
	    glColor3f(0.0f, 0.7f, 0.0f);
	    persegi(0, 3.f, 0.8f, 0.0f, 5.2f);
    //BADAN
    	//border
	    glColor3f(0.5f, 1.0f, 0.5f);
	    persegi(0, 7.2f, 5.2f, 0.0f, 0.f);
	    //fill
	    glColor3f(0.0f, 0.7f, 0.0f);
	    persegi(0, 7.f, 5.f, 0.0f, 0.f);
	    //taruh isi badannya disini
	    //border
	    glColor3f(0.5f, 1.0f, 0.5f);
	    persegi(0, 2.f, 2.f, 4.f, 2.f);
	    //fill
	    glColor3f(0.2f, 1.0f, 0.1f);
	    persegi(0, 1.5f, 1.5f, 4.f, 2.f);
	    //konten
	    glColor3f(0.8f, 1.0f, 0.1f);
	    lingkaran(0.5f, 3.7f, 2.5f);
	    glColor3f(1.f, 0.0f, 0.1f);
	    persegi(90, 0.5f, 0.1f, 4.5f, 2.5f);
	    persegi(90, 0.5f, 0.1f, 4.8f, 2.5f);
	    persegi(90, 0.5f, 0.5f, -4.f, 2.5f);
	    persegi(90, 0.5f, 0.5f, -4.f, 1.3f);
	    persegi(90, 0.5f, 0.5f, -2.7f, 2.5f);
	    persegi(90, 0.5f, 0.5f, -2.7f, 1.3f);
	//TANGAN
		//lengan kiri
		glColor3f(0.0f, 0.85f, 0.0f);
		persegi(0, 4.f, 1.0f, -11.2f, 4.2f);
		//strip kiri
		glColor3f(0.5f, 1.0f, 0.5f);
		persegi(-45, 0.05f, 1.35f, -14.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -13.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -12.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -11.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -10.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -9.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, -8.2f, 4.2f);
    	//tangan kiri
    	glColor3f(0.0f, 0.85f, 0.0f);
		persegi(90, 3.f, 1.0f, -14.2f, 8.2f);
		//strip
		glColor3f(0.5f, 1.0f, 0.5f);
    	persegi(90, 0.05f, 1.f, -14.2f, 5.2f);
    	persegi(90, 0.05f, 1.f, -14.2f, 6.2f);
    	persegi(90, 0.05f, 1.f, -14.2f, 7.2f);
    	persegi(90, 0.05f, 1.f, -14.2f, 8.2f);
    	persegi(90, 0.05f, 1.f, -14.2f, 9.2f);
    	persegi(90, 0.05f, 1.f, -14.2f, 10.2f);
    	lingkaran(1.9f, -14.2f, 11.2f);
    	//lengan kanan
		glColor3f(0.0f, 0.85f, 0.0f);
		persegi(0, 4.f, 1.0f, 11.2f, 4.2f);
		//strip
		glColor3f(0.5f, 1.0f, 0.5f);
		persegi(-45, 0.05f, 1.35f, 14.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 13.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 12.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 11.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 10.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 9.2f, 4.2f);
    	persegi(0, 0.05f, 1.f, 8.2f, 4.2f);
    	//tangan kanan
    	glColor3f(0.0f, 0.85f, 0.0f);
		persegi(90, 3.f, 1.0f, 14.2f, 0.2f);
		//strip
		glColor3f(0.5f, 1.0f, 0.5f);
    	persegi(90, 0.05f, 1.f, 14.2f, -1.8f);
    	persegi(90, 0.05f, 1.f, 14.2f, -0.8f);
    	persegi(90, 0.05f, 1.f, 14.2f, 0.2f);
    	persegi(90, 0.05f, 1.f, 14.2f, 1.2f);
    	persegi(90, 0.05f, 1.f, 14.2f, 2.2f);
    	persegi(90, 0.05f, 1.f, 14.2f, 3.2f);
    	lingkaran(1.9f, 14.2f, -2.8f);
    //KAKI
    	//kaki kanan
    	glColor3f(0.0f, 0.85f, 0.0f);
    	persegi(0, 1.f, 4.5f, 5.f, -9.5f);
    	//strip di kaki kanan
    	glColor3f(0.5f, 6.0f, 0.5f);
    	persegi(90, 0.05f, 1.f, 5.f, -7.f);
    	persegi(90, 0.05f, 1.f, 5.f, -8.5f);
    	persegi(90, 0.05f, 1.f, 5.f, -10.f);
    	persegi(90, 0.05f, 1.f, 5.f, -11.5f);
    	persegi(90, 0.05f, 1.f, 5.f, -13.f);
    	persegi(90, 0.05f, 1.f, 5.f, -14.5f);

    	glColor3f(0.0f, 0.85f, 0.0f);
    	persegi(90, 1.f, 2.5f, 6.5f, -14.6f);
    	//kaki kiri
    	glColor3f(0.0f, 0.85f, 0.0f);
    	persegi(0, 1.f, 4.5f, -5.f, -9.5f);
    	//strip di kaki kiri
    	glColor3f(0.5f, 1.0f, 0.5f);
    	persegi(90, 0.05f, 1.f, -5.f, -7.f);
    	persegi(90, 0.05f, 1.f, -5.f, -8.5f);
    	persegi(90, 0.05f, 1.f, -5.f, -10.f);
    	persegi(90, 0.05f, 1.f, -5.f, -11.5f);
    	persegi(90, 0.05f, 1.f, -5.f, -13.f);
    	persegi(90, 0.05f, 1.f, -5.f, -14.5f);

    	glColor3f(0.0f, 0.85f, 0.0f);
    	persegi(90, 1.f, 2.5f, -6.5f, -14.6f);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);

    glutCreateWindow("Mini Project");
    gluOrtho2D(-20., 20., -20., 20.);
    glutDisplayFunc(render);
    initGL();
    glutMainLoop();

    return EXIT_SUCCESS;
}


