#include <stdio.h>
#include <GL/freeglut.h>
#include <iostream>
#include <math.h>
#include <Windows.h>


void display() {

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //single buffer unutk menampilkan window | warna rgb
	glutInitWindowSize(640, 480); //size, 640px x 480px
	glutInitWindowPosition(10, 10); //posisi windows
	glutCreateWindow("Titik Perpotongan by IFbalino");

	//inisialisasi glut
	glClearColor(0.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glLineWidth(4.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matrix identitas
	gluOrtho2D(0.0, 640.0, 0.0, 480.0); // untuk memberikan sistem koordinat kepada windows yang kita buat

	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}