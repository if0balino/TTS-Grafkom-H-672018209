#include <stdio.h>
#include <GL/freeglut.h>
#include <iostream>
#include <math.h>
#include <Windows.h>


void display() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 480.0);
	glVertex2d(640.0, 480.0);
	glVertex2d(640.0, 450.0);
	glVertex2d(0.0, 450.0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2d(0.0, 479.0);
	glVertex2d(640.0, 479.0);
	glEnd();

	

	glColor3f(1.0, 1.0, 1.0); //garis putih 1
	glBegin(GL_LINE_STRIP);
	glVertex2d(50.0, 450.0);
	glVertex2d(50.0, 400.0);
	glVertex2d(80.0, 400.0);
	glVertex2d(80.0, 350.0);
	glVertex2d(50.0, 350.0);
	glVertex2d(50.0, 300.0);
	glVertex2d(80.0, 300.0);
	glVertex2d(80.0, 250.0);
	glVertex2d(50.0, 250.0);
	glVertex2d(50.0, 200.0);
	glVertex2d(80.0, 200.0);
	glVertex2d(80.0, 150.0);
	glVertex2d(50.0, 150.0);
	glVertex2d(50.0, 100.0);
	glVertex2d(80.0, 100.0);
	glVertex2d(80.0, 50.0);
	glVertex2d(50.0, 50.0);
	glVertex2d(50.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 2
	glBegin(GL_LINE_STRIP);
	glVertex2d(160.0, 450.0);
	glVertex2d(160.0, 400.0);
	glVertex2d(130.0, 400.0);
	glVertex2d(130.0, 350.0);
	glVertex2d(160.0, 350.0);
	glVertex2d(160.0, 300.0);
	glVertex2d(130.0, 300.0);
	glVertex2d(130.0, 250.0);
	glVertex2d(160.0, 250.0);
	glVertex2d(160.0, 200.0);
	glVertex2d(130.0, 200.0);
	glVertex2d(130.0, 150.0);
	glVertex2d(160.0, 150.0);
	glVertex2d(160.0, 100.0);
	glVertex2d(130.0, 100.0);
	glVertex2d(130.0, 50.0);
	glVertex2d(160.0, 50.0);
	glVertex2d(160.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 3
	glBegin(GL_LINE_STRIP);
	glVertex2d(210.0, 450.0);
	glVertex2d(210.0, 400.0);
	glVertex2d(240.0, 400.0);
	glVertex2d(240.0, 350.0);
	glVertex2d(210.0, 350.0);
	glVertex2d(210.0, 300.0);
	glVertex2d(240.0, 300.0);
	glVertex2d(240.0, 250.0);
	glVertex2d(210.0, 250.0);
	glVertex2d(210.0, 200.0);
	glVertex2d(240.0, 200.0);
	glVertex2d(240.0, 150.0);
	glVertex2d(210.0, 150.0);
	glVertex2d(210.0, 100.0);
	glVertex2d(240.0, 100.0);
	glVertex2d(240.0, 50.0);
	glVertex2d(210.0, 50.0);
	glVertex2d(210.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 4
	glBegin(GL_LINE_STRIP);
	glVertex2d(320.0, 450.0);
	glVertex2d(320.0, 400.0);
	glVertex2d(290.0, 400.0);
	glVertex2d(290.0, 350.0);
	glVertex2d(320.0, 350.0);
	glVertex2d(320.0, 300.0);
	glVertex2d(290.0, 300.0);
	glVertex2d(290.0, 250.0);
	glVertex2d(320.0, 250.0);
	glVertex2d(320.0, 200.0);
	glVertex2d(290.0, 200.0);
	glVertex2d(290.0, 150.0);
	glVertex2d(320.0, 150.0);
	glVertex2d(320.0, 100.0);
	glVertex2d(290.0, 100.0);
	glVertex2d(290.0, 50.0);
	glVertex2d(320.0, 50.0);
	glVertex2d(320.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 5
	glBegin(GL_LINE_STRIP);
	glVertex2d(370.0, 450.0);
	glVertex2d(370.0, 400.0);
	glVertex2d(400.0, 400.0);
	glVertex2d(400.0, 350.0);
	glVertex2d(370.0, 350.0);
	glVertex2d(370.0, 300.0);
	glVertex2d(400.0, 300.0);
	glVertex2d(400.0, 250.0);
	glVertex2d(370.0, 250.0);
	glVertex2d(370.0, 200.0);
	glVertex2d(400.0, 200.0);
	glVertex2d(400.0, 150.0);
	glVertex2d(370.0, 150.0);
	glVertex2d(370.0, 100.0);
	glVertex2d(400.0, 100.0);
	glVertex2d(400.0, 50.0);
	glVertex2d(370.0, 50.0);
	glVertex2d(370.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 6
	glBegin(GL_LINE_STRIP);
	glVertex2d(480.0, 450.0);
	glVertex2d(480.0, 400.0);
	glVertex2d(450.0, 400.0);
	glVertex2d(450.0, 350.0);
	glVertex2d(480.0, 350.0);
	glVertex2d(480.0, 300.0);
	glVertex2d(450.0, 300.0);
	glVertex2d(450.0, 250.0);
	glVertex2d(480.0, 250.0);
	glVertex2d(480.0, 200.0);
	glVertex2d(450.0, 200.0);
	glVertex2d(450.0, 150.0);
	glVertex2d(480.0, 150.0);
	glVertex2d(480.0, 100.0);
	glVertex2d(450.0, 100.0);
	glVertex2d(450.0, 50.0);
	glVertex2d(480.0, 50.0);
	glVertex2d(480.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 7
	glBegin(GL_LINE_STRIP);
	glVertex2d(530.0, 450.0);
	glVertex2d(530.0, 400.0);
	glVertex2d(560.0, 400.0);
	glVertex2d(560.0, 350.0);
	glVertex2d(530.0, 350.0);
	glVertex2d(530.0, 300.0);
	glVertex2d(560.0, 300.0);
	glVertex2d(560.0, 250.0);
	glVertex2d(530.0, 250.0);
	glVertex2d(530.0, 200.0);
	glVertex2d(560.0, 200.0);
	glVertex2d(560.0, 150.0);
	glVertex2d(530.0, 150.0);
	glVertex2d(530.0, 100.0);
	glVertex2d(560.0, 100.0);
	glVertex2d(560.0, 50.0);
	glVertex2d(530.0, 50.0);
	glVertex2d(530.0, 0.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); //garis putih 8
	glBegin(GL_LINE_STRIP);
	glVertex2d(640.0, 450.0);
	glVertex2d(640.0, 400.0);
	glVertex2d(610.0, 400.0);
	glVertex2d(610.0, 350.0);
	glVertex2d(640.0, 350.0);
	glVertex2d(640.0, 300.0);
	glVertex2d(610.0, 300.0);
	glVertex2d(610.0, 250.0);
	glVertex2d(640.0, 250.0);
	glVertex2d(640.0, 200.0);
	glVertex2d(610.0, 200.0);
	glVertex2d(610.0, 150.0);
	glVertex2d(640.0, 150.0);
	glVertex2d(640.0, 100.0);
	glVertex2d(610.0, 100.0);
	glVertex2d(610.0, 50.0);
	glVertex2d(640.0, 50.0);
	glVertex2d(640.0, 0.0);
	glEnd();

	//---------------------------------

	glColor3f(1.0, 1.0, 1.0); //garis horisontal 0
	glBegin(GL_LINES);
	glVertex2d(0.0, 425.0);
	glVertex2d(50.0, 425.0);
	glVertex2d(160.0, 425.0);
	glVertex2d(210.0, 425.0);
	glVertex2d(320.0, 425.0);
	glVertex2d(370.0, 425.0);
	glVertex2d(480.0, 425.0);
	glVertex2d(530.0, 425.0);

	glBegin(GL_LINES);
	glVertex2d(80.0, 375.0);   //1
	glVertex2d(130.0, 375.0);
	glVertex2d(240.0, 375.0);
	glVertex2d(290.0, 375.0);
	glVertex2d(400.0, 375.0);
	glVertex2d(450.0, 375.0);
	glVertex2d(560.0, 375.0);
	glVertex2d(610.0, 375.0);

	glVertex2d(0.0, 325.0);   //2
	glVertex2d(50.0, 325.0);
	glVertex2d(160.0, 325.0);
	glVertex2d(210.0, 325.0);
	glVertex2d(320.0, 325.0);
	glVertex2d(370.0, 325.0);
	glVertex2d(480.0, 325.0);
	glVertex2d(530.0, 325.0);

	glColor3f(1.0, 1.0, 1.0); //3
	glBegin(GL_LINES);
	glVertex2d(80.0, 275.0);
	glVertex2d(130.0, 275.0);
	glVertex2d(240.0, 275.0);
	glVertex2d(290.0, 275.0);
	glVertex2d(400.0, 275.0);
	glVertex2d(450.0, 275.0);
	glVertex2d(560.0, 275.0);
	glVertex2d(610.0, 275.0);

	glVertex2d(0.0, 225.0);   //4
	glVertex2d(50.0, 225.0);
	glVertex2d(160.0, 225.0);
	glVertex2d(210.0, 225.0);
	glVertex2d(320.0, 225.0);
	glVertex2d(370.0, 225.0);
	glVertex2d(480.0, 225.0);
	glVertex2d(530.0, 225.0);

	glColor3f(1.0, 1.0, 1.0); //5
	glBegin(GL_LINES);
	glVertex2d(80.0, 175.0);
	glVertex2d(130.0, 175.0);
	glVertex2d(240.0, 175.0);
	glVertex2d(290.0, 175.0);
	glVertex2d(400.0, 175.0);
	glVertex2d(450.0, 175.0);
	glVertex2d(560.0, 175.0);
	glVertex2d(610.0, 175.0);

	glVertex2d(0.0, 125.0);   //6
	glVertex2d(50.0, 125.0);
	glVertex2d(160.0, 125.0);
	glVertex2d(210.0, 125.0);
	glVertex2d(320.0, 125.0);
	glVertex2d(370.0, 125.0);
	glVertex2d(480.0, 125.0);
	glVertex2d(530.0, 125.0);

	glColor3f(1.0, 1.0, 1.0); //7
	glBegin(GL_LINES);
	glVertex2d(80.0, 75.0);
	glVertex2d(130.0, 75.0);
	glVertex2d(240.0, 75.0);
	glVertex2d(290.0, 75.0);
	glVertex2d(400.0, 75.0);
	glVertex2d(450.0, 75.0);
	glVertex2d(560.0, 75.0);
	glVertex2d(610.0, 75.0);

	glEnd();

	//--------------------------------------
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUAD_STRIP);
	glVertex2d(55.0, 420.0);
	glVertex2d(65.0, 420.0);
	glVertex2d(65.0, 400.0);
	//glVertex2d(55.0, 420.0);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 0.0);
	glVertex2d(640.0, 0.0);
	glVertex2d(640.0, 30.0);
	glVertex2d(0.0, 30.0);
	glEnd();




	glFlush();

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //single buffer unutk menampilkan window | warna rgb
	glutInitWindowSize(640, 480); //size, 640px x 480px
	glutInitWindowPosition(10, 10); //posisi windows
	glutCreateWindow("BATIK TORAJA by ifbalino");

	//inisialisasi glut
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glLineWidth(3);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matrix identitas
	gluOrtho2D(0.0, 640.0, 0.0, 480.0); // untuk memberikan sistem koordinat kepada windows yang kita buat

	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}