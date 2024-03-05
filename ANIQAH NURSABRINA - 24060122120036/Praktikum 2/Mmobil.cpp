#include <GL/glut.h>
#include <math.h>

float sudut = 0.0f;
float carPositionX = 0.0f;


void myInit(void){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void mobil(void){
	glTranslatef(carPositionX, 0.0f, 0.0f); 
	
	//body
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.8,0.2f,0.6f); //pink
	glVertex2f(0.4f,-0.25f);
	glVertex2f(-0.45f,-0.25f);
	glVertex2f(-0.45f,-0.2f);
	glVertex2f(-0.43f, -0.1f);
	glVertex2f(-0.4f, -0.08f);
	glVertex2f(-0.22f, -0.025f);
	glVertex2f(-0.1f, 0.12f);
	glVertex2f(0.3f, 0.12f);
	glVertex2f(0.4f, -0.025f);
	glVertex2f(0.4f, -0.25f);
	glEnd();
	

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.8f,-0.025f);
	glVertex2f(-0.2f,-0.025f);
	
	glColor3f(0.5,0.2f,0.4f); //pink
	glVertex2f(0.41f, -0.3f);
	glVertex2f(-0.46f, -0.3f);
	glVertex2f(-0.46f, -0.25f);
	glVertex2f(0.41f, -0.25f);
	glEnd();
	
	//tiang bendera
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0,0.2f,0.4f); //navy
	glVertex2f(0.57f, -0.025f);
	glVertex2f(0.54f, -0.025f);
	glVertex2f(0.54f, 0.2f);
	glVertex2f(0.57f, 0.2f);
	glEnd();
	
	//bendera
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7,0.2f,0.4f); //merah
	glVertex2f(0.57f, 0.15f);
	glVertex2f(0.77f, 0.15f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.57f, 0.2f);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,1.0f,1.0f); //putih
	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.77f, 0.15f);
	glVertex2f(0.57f, 0.15f);
	glEnd();
	
	
	//bendera atas
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7,0.2f,0.4f); //merah
	glVertex2f(0.07f, 0.3f);
	glVertex2f(0.27f, 0.3f);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.07f, 0.35f);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0,1.0f,1.0f); //putih
	glVertex2f(0.07f, 0.25f);
	glVertex2f(0.3f, 0.25f);
	glVertex2f(0.27f, 0.3f);
	glVertex2f(0.07f, 0.3f);
	glEnd();
	
	//tiang atas
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0,0.2f,0.4f); //navy
	glVertex2f(0.07f, 0.12f);
	glVertex2f(0.07f, 0.35f);
	glVertex2f(0.1f, 0.35f);
	glVertex2f(0.1f, 0.12f);
	glEnd();
	
	

}

void jendela(void){
	glBegin(GL_TRIANGLE_FAN);
	
	glColor3f(0.5,0.7f,0.95f); //biru muda
	glVertex2f(0.02f,-0.025f);
	glVertex2f(-0.19f,-0.025f);
	glVertex2f(-0.095f,0.1f);
	glVertex2f(0.02f,0.1f);
	
	glEnd();
	

	glBegin(GL_TRIANGLE_FAN);
	
	glColor3f(0.5,0.7f,0.95f); //biru muda
	glVertex2f(0.20f,-0.025f);
	glVertex2f(0.04f,-0.025f);
	glVertex2f(0.04f,0.1f);
	glVertex2f(0.20f,0.1f);
	
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	
	glColor3f(0.5,0.7f,0.95f); //biru muda
	glVertex2f(0.37f,-0.025f);
	glVertex2f(0.22f,-0.025f);
	glVertex2f(0.22f,0.1f);
	glVertex2f(0.29f,0.1f);
	
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN); // biru muda
	glColor3f(0.5,0.7f,0.95f);
	glVertex2f(-0.415f, -0.105f);
	glVertex2f(-0.36f, -0.105f);
	glVertex2f(-0.36f, -0.18f);
	glVertex2f(-0.43f, -0.18f);
	glEnd();
}


void roda(void){
	glPushMatrix(); // roda 
		glTranslatef(-0.25f, -0.3f, 0.0f);
		glRotatef(sudut, 0.0f, 0.0f, 1.0f);
		glBegin(GL_POLYGON);
			glColor3ub(25, 25, 25);
			glVertex2f(0.000f, 0.100f);
			glVertex2f(+0.075f, 0.075f);
			glVertex2f(+0.100f, 0.000f);
			glVertex2f(+0.075f, -0.075f);
			glVertex2f(+0.000f, -0.100f);
			glVertex2f(-0.075f, -0.075f);
			glVertex2f(-0.100f, 0.000f);
			glVertex2f(-0.075f, +0.075f);
		glEnd();
	glPopMatrix();

	glPushMatrix(); // roda 
		glTranslatef(0.25f, -0.3f, 0.0f);
		glRotatef(sudut, 0.0f, 0.0f, 1.0f);
		glBegin(GL_POLYGON);
			glColor3ub(25, 25, 25);
			glVertex2f(0.000f, 0.100f);
			glVertex2f(+0.075f, 0.075f);
			glVertex2f(+0.100f, 0.000f);
			glVertex2f(+0.075f, -0.075f);
			glVertex2f(+0.000f, -0.100f);
			glVertex2f(-0.075f, -0.075f);
			glVertex2f(-0.100f, 0.000f);
			glVertex2f(-0.075f, +0.075f);
		glEnd();
	glPopMatrix();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	mobil();
	jendela();
	roda();
	
	glFlush();
}

void update(int val) {
    sudut += 5;
    if (sudut >= 360.0) {
        sudut = 0;
    }

    carPositionX += -0.0001f; 

    glutPostRedisplay();
    glutTimerFunc(5, update, 0);
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Sabrina");
    glutDisplayFunc(display);
    glClearColor(0.8f, 0.9f, 1.0f, 1.0f);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}

