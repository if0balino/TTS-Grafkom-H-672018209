#include <stdio.h>
#include <GL/freeglut.h>
#include <iostream>
#include <math.h>
#include <Windows.h>


void display() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2d(50.0, 450.0);
	glVertex2d(50.0, 400.0);
	glVertex2d(50.0, 400.0);
	glVertex2d(80.0, 400.0);
	glVertex2d(80.0, 400.0);
	glVertex2d(80.0, 350.0);
	glVertex2d(80.0, 350.0);
	glVertex2d(50.0, 350.0);
	glVertex2d(50.0, 350.0);
	glVertex2d(50.0, 300.0);
	glVertex2d(50.0, 300.0);
	glVertex2d(80.0, 300.0);
	glVertex2d(80.0, 300.0);
	glVertex2d(80.0, 250.0);
	glVertex2d(80.0, 250.0);
	glVertex2d(50.0, 250.0);
	glVertex2d(50.0, 250.0);
	glVertex2d(50.0, 200.0);
	glVertex2d(50.0, 200.0);
	glVertex2d(80.0, 200.0);
	glVertex2d(80.0, 200.0);
	glVertex2d(80.0, 150.0);
	glVertex2d(80.0, 150.0);
	glVertex2d(50.0, 150.0);
	glVertex2d(50.0, 150.0);
	glVertex2d(50.0, 100.0);
	glVertex2d(50.0, 100.0);
	glVertex2d(80.0, 100.0);
	glVertex2d(80.0, 100.0);
	glVertex2d(80.0, 50.0);
	glVertex2d(80.0, 50.0);
	glVertex2d(50.0, 50.0);
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
	glLineWidth(2);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matrix identitas
	gluOrtho2D(0.0, 640.0, 0.0, 480.0); // untuk memberikan sistem koordinat kepada windows yang kita buat

	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}