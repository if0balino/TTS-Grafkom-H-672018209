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

	//---------------------------------------------- garis putih

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

	//-----------------------------------------------poligon horizontal merah

	glColor3f(1.0, 0.0, 0.0); // horizon merah 0
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 360.0);
	glVertex2d(70.0, 360.0);
	glVertex2d(70.0, 390.0);
	glVertex2d(0.0, 390.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 260.0);
	glVertex2d(70.0, 260.0);
	glVertex2d(70.0, 290.0);
	glVertex2d(0.0, 290.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 160.0);
	glVertex2d(70.0, 160.0);
	glVertex2d(70.0, 190.0);
	glVertex2d(0.0, 190.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 60.0);
	glVertex2d(70.0, 60.0);
	glVertex2d(70.0, 90.0);
	glVertex2d(0.0, 90.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 1
	glBegin(GL_POLYGON);
	glVertex2d(60.0, 410.0);
	glVertex2d(150.0, 410.0);
	glVertex2d(150.0, 445.0);
	glVertex2d(60.0, 445.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(60.0, 310.0);
	glVertex2d(150.0, 310.0);
	glVertex2d(150.0, 340.0);
	glVertex2d(60.0, 340.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(60.0, 210.0);
	glVertex2d(150.0, 210.0);
	glVertex2d(150.0, 240.0);
	glVertex2d(60.0, 240.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(60.0, 110.0);
	glVertex2d(150.0, 110.0);
	glVertex2d(150.0, 140.0);
	glVertex2d(60.0, 140.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(60.0, 10.0);
	glVertex2d(150.0, 10.0);
	glVertex2d(150.0, 40.0);
	glVertex2d(60.0, 40.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 2
	glBegin(GL_POLYGON);
	glVertex2d(140.0, 360.0);
	glVertex2d(230.0, 360.0);
	glVertex2d(230.0, 390.0);
	glVertex2d(140.0, 390.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(140.0, 260.0);
	glVertex2d(230.0, 260.0);
	glVertex2d(230.0, 290.0);
	glVertex2d(140.0, 290.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(140.0, 160.0);
	glVertex2d(230.0, 160.0);
	glVertex2d(230.0, 190.0);
	glVertex2d(140.0, 190.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(140.0, 60.0);
	glVertex2d(230.0, 60.0);
	glVertex2d(230.0, 90.0);
	glVertex2d(140.0, 90.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 3
	glBegin(GL_POLYGON);
	glVertex2d(220.0, 410.0);
	glVertex2d(310.0, 410.0);
	glVertex2d(310.0, 445.0);
	glVertex2d(220.0, 445.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(220.0, 310.0);
	glVertex2d(310.0, 310.0);
	glVertex2d(310.0, 340.0);
	glVertex2d(220.0, 340.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(220.0, 210.0);
	glVertex2d(310.0, 210.0);
	glVertex2d(310.0, 240.0);
	glVertex2d(220.0, 240.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(220.0, 110.0);
	glVertex2d(310.0, 110.0);
	glVertex2d(310.0, 140.0);
	glVertex2d(220.0, 140.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(220.0, 10.0);
	glVertex2d(310.0, 10.0);
	glVertex2d(310.0, 40.0);
	glVertex2d(220.0, 40.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 4
	glBegin(GL_POLYGON);
	glVertex2d(300.0, 360.0);
	glVertex2d(390.0, 360.0);
	glVertex2d(390.0, 390.0);
	glVertex2d(300.0, 390.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(300.0, 260.0);
	glVertex2d(390.0, 260.0);
	glVertex2d(390.0, 290.0);
	glVertex2d(300.0, 290.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(300.0, 160.0);
	glVertex2d(390.0, 160.0);
	glVertex2d(390.0, 190.0);
	glVertex2d(300.0, 190.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(300.0, 60.0);
	glVertex2d(390.0, 60.0);
	glVertex2d(390.0, 90.0);
	glVertex2d(300.0, 90.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 5
	glBegin(GL_POLYGON);
	glVertex2d(380.0, 410.0);
	glVertex2d(470.0, 410.0);
	glVertex2d(470.0, 445.0);
	glVertex2d(380.0, 445.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(380.0, 310.0);
	glVertex2d(470.0, 310.0);
	glVertex2d(470.0, 340.0);
	glVertex2d(380.0, 340.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(380.0, 210.0);
	glVertex2d(470.0, 210.0);
	glVertex2d(470.0, 240.0);
	glVertex2d(380.0, 240.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(380.0, 110.0);
	glVertex2d(470.0, 110.0);
	glVertex2d(470.0, 140.0);
	glVertex2d(380.0, 140.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(380.0, 10.0);
	glVertex2d(470.0, 10.0);
	glVertex2d(470.0, 40.0);
	glVertex2d(380.0, 40.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 6
	glBegin(GL_POLYGON);
	glVertex2d(460.0, 360.0);
	glVertex2d(550.0, 360.0);
	glVertex2d(550.0, 390.0);
	glVertex2d(460.0, 390.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(460.0, 260.0);
	glVertex2d(550.0, 260.0);
	glVertex2d(550.0, 290.0);
	glVertex2d(460.0, 290.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(460.0, 160.0);
	glVertex2d(550.0, 160.0);
	glVertex2d(550.0, 190.0);
	glVertex2d(460.0, 190.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(460.0, 60.0);
	glVertex2d(550.0, 60.0);
	glVertex2d(550.0, 90.0);
	glVertex2d(460.0, 90.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // horizon merah 7
	glBegin(GL_POLYGON);
	glVertex2d(540.0, 410.0);
	glVertex2d(630.0, 410.0);
	glVertex2d(630.0, 445.0);
	glVertex2d(540.0, 445.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(540.0, 310.0);
	glVertex2d(630.0, 310.0);
	glVertex2d(630.0, 340.0);
	glVertex2d(540.0, 340.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(540.0, 210.0);
	glVertex2d(630.0, 210.0);
	glVertex2d(630.0, 240.0);
	glVertex2d(540.0, 240.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(540.0, 110.0);
	glVertex2d(630.0, 110.0);
	glVertex2d(630.0, 140.0);
	glVertex2d(540.0, 140.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(540.0, 10.0);
	glVertex2d(630.0, 10.0);
	glVertex2d(630.0, 40.0);
	glVertex2d(540.0, 40.0);
	glEnd();

	//---------------------------------------------polygon vertikal merah

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 0
	glBegin(GL_POLYGON);
	glVertex2d(10.0, 335.0);
	glVertex2d(40.0, 335.0);
	glVertex2d(40.0, 415.0);
	glVertex2d(10.0, 415.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(10.0, 235.0);
	glVertex2d(40.0, 235.0);
	glVertex2d(40.0, 315.0);
	glVertex2d(10.0, 315.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(10.0, 135.0);
	glVertex2d(40.0, 135.0);
	glVertex2d(40.0, 215.0);
	glVertex2d(10.0, 215.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(10.0, 35.0);
	glVertex2d(40.0, 35.0);
	glVertex2d(40.0, 115.0);
	glVertex2d(10.0, 115.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 1
	glBegin(GL_POLYGON);
	glVertex2d(90.0, 385.0);
	glVertex2d(120.0, 385.0);
	glVertex2d(120.0, 450.0);
	glVertex2d(90.0, 450.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(90.0, 285.0);
	glVertex2d(120.0, 285.0);
	glVertex2d(120.0, 365.0);
	glVertex2d(90.0, 365.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(90.0, 185.0);
	glVertex2d(120.0, 185.0);
	glVertex2d(120.0, 265.0);
	glVertex2d(90.0, 265.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(90.0, 85.0);
	glVertex2d(120.0, 85.0);
	glVertex2d(120.0, 165.0);
	glVertex2d(90.0, 165.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(90.0, -15.0);
	glVertex2d(120.0, -15.0);
	glVertex2d(120.0, 65.0);
	glVertex2d(90.0, 65.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 2
	glBegin(GL_POLYGON);
	glVertex2d(170.0, 335.0);
	glVertex2d(200.0, 335.0);
	glVertex2d(200.0, 415.0);
	glVertex2d(170.0, 415.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(170.0, 235.0);
	glVertex2d(200.0, 235.0);
	glVertex2d(200.0, 315.0);
	glVertex2d(170.0, 315.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(170.0, 135.0);
	glVertex2d(200.0, 135.0);
	glVertex2d(200.0, 215.0);
	glVertex2d(170.0, 215.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(170.0, 35.0);
	glVertex2d(200.0, 35.0);
	glVertex2d(200.0, 115.0);
	glVertex2d(170.0, 115.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 3
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 385.0);
	glVertex2d(280.0, 385.0);
	glVertex2d(280.0, 450.0);
	glVertex2d(250.0, 450.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 285.0);
	glVertex2d(280.0, 285.0);
	glVertex2d(280.0, 365.0);
	glVertex2d(250.0, 365.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 185.0);
	glVertex2d(280.0, 185.0);
	glVertex2d(280.0, 265.0);
	glVertex2d(250.0, 265.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(250.0, 85.0);
	glVertex2d(280.0, 85.0);
	glVertex2d(280.0, 165.0);
	glVertex2d(250.0, 165.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(250.0, -15.0);
	glVertex2d(280.0, -15.0);
	glVertex2d(280.0, 65.0);
	glVertex2d(250.0, 65.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 4
	glBegin(GL_POLYGON);
	glVertex2d(330.0, 335.0);
	glVertex2d(360.0, 335.0);
	glVertex2d(360.0, 415.0);
	glVertex2d(330.0, 415.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(330.0, 235.0);
	glVertex2d(360.0, 235.0);
	glVertex2d(360.0, 315.0);
	glVertex2d(330.0, 315.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(330.0, 135.0);
	glVertex2d(360.0, 135.0);
	glVertex2d(360.0, 215.0);
	glVertex2d(330.0, 215.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(330.0, 35.0);
	glVertex2d(360.0, 35.0);
	glVertex2d(360.0, 115.0);
	glVertex2d(330.0, 115.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 5
	glBegin(GL_POLYGON);
	glVertex2d(410.0, 385.0);
	glVertex2d(440.0, 385.0);
	glVertex2d(440.0, 450.0);
	glVertex2d(410.0, 450.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(410.0, 285.0);
	glVertex2d(440.0, 285.0);
	glVertex2d(440.0, 365.0);
	glVertex2d(410.0, 365.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(410.0, 185.0);
	glVertex2d(440.0, 185.0);
	glVertex2d(440.0, 265.0);
	glVertex2d(410.0, 265.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(410.0, 85.0);
	glVertex2d(440.0, 85.0);
	glVertex2d(440.0, 165.0);
	glVertex2d(410.0, 165.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(410.0, -15.0);
	glVertex2d(440.0, -15.0);
	glVertex2d(440.0, 65.0);
	glVertex2d(410.0, 65.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 6
	glBegin(GL_POLYGON);
	glVertex2d(490.0, 335.0);
	glVertex2d(520.0, 335.0);
	glVertex2d(520.0, 415.0);
	glVertex2d(490.0, 415.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(490.0, 235.0);
	glVertex2d(520.0, 235.0);
	glVertex2d(520.0, 315.0);
	glVertex2d(490.0, 315.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(490.0, 135.0);
	glVertex2d(520.0, 135.0);
	glVertex2d(520.0, 215.0);
	glVertex2d(490.0, 215.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(490.0, 35.0);
	glVertex2d(520.0, 35.0);
	glVertex2d(520.0, 115.0);
	glVertex2d(490.0, 115.0);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); // vertikal merah 7
	glBegin(GL_POLYGON);
	glVertex2d(570.0, 385.0);
	glVertex2d(600.0, 385.0);
	glVertex2d(600.0, 450.0);
	glVertex2d(570.0, 450.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(570.0, 285.0);
	glVertex2d(600.0, 285.0);
	glVertex2d(600.0, 365.0);
	glVertex2d(570.0, 365.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(570.0, 185.0);
	glVertex2d(600.0, 185.0);
	glVertex2d(600.0, 265.0);
	glVertex2d(570.0, 265.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(570.0, 85.0);
	glVertex2d(600.0, 85.0);
	glVertex2d(600.0, 165.0);
	glVertex2d(570.0, 165.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(570.0, -15.0);
	glVertex2d(600.0, -15.0);
	glVertex2d(600.0, 65.0);
	glVertex2d(570.0, 65.0);
	glEnd();

	//--------------------------------------------- poligon vertikal kuning

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 0
	glBegin(GL_POLYGON);
	glVertex2d(15.0, 345.0);
	glVertex2d(35.0, 345.0);
	glVertex2d(35.0, 405.0);
	glVertex2d(15.0, 405.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(15.0, 245.0);
	glVertex2d(35.0, 245.0);
	glVertex2d(35.0, 305.0);
	glVertex2d(15.0, 305.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(15.0, 145.0);
	glVertex2d(35.0, 145.0);
	glVertex2d(35.0, 205.0);
	glVertex2d(15.0, 205.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(15.0, 45.0);
	glVertex2d(35.0, 45.0);
	glVertex2d(35.0, 105.0);
	glVertex2d(15.0, 105.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 1
	glBegin(GL_POLYGON);
	glVertex2d(95.0, 395.0);
	glVertex2d(115.0, 395.0);
	glVertex2d(115.0, 450.0);
	glVertex2d(95.0, 450.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(95.0, 295.0);
	glVertex2d(115.0, 295.0);
	glVertex2d(115.0, 355.0);
	glVertex2d(95.0, 355.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(95.0, 195.0);
	glVertex2d(115.0, 195.0);
	glVertex2d(115.0, 255.0);
	glVertex2d(95.0, 255.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(95.0, 95.0);
	glVertex2d(115.0, 95.0);
	glVertex2d(115.0, 155.0);
	glVertex2d(95.0, 155.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(95.0, -5.0);
	glVertex2d(115.0, -5.0);
	glVertex2d(115.0, 55.0);
	glVertex2d(95.0, 55.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 2
	glBegin(GL_POLYGON);
	glVertex2d(175.0, 345.0);
	glVertex2d(195.0, 345.0);
	glVertex2d(195.0, 405.0);
	glVertex2d(175.0, 405.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(175.0, 245.0);
	glVertex2d(195.0, 245.0);
	glVertex2d(195.0, 305.0);
	glVertex2d(175.0, 305.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(175.0, 145.0);
	glVertex2d(195.0, 145.0);
	glVertex2d(195.0, 205.0);
	glVertex2d(175.0, 205.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(175.0, 45.0);
	glVertex2d(195.0, 45.0);
	glVertex2d(195.0, 105.0);
	glVertex2d(175.0, 105.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 3
	glBegin(GL_POLYGON);
	glVertex2d(255.0, 395.0);
	glVertex2d(275.0, 395.0);
	glVertex2d(275.0, 450.0);
	glVertex2d(255.0, 450.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(255.0, 295.0);
	glVertex2d(275.0, 295.0);
	glVertex2d(275.0, 355.0);
	glVertex2d(255.0, 355.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(255.0, 195.0);
	glVertex2d(275.0, 195.0);
	glVertex2d(275.0, 255.0);
	glVertex2d(255.0, 255.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(255.0, 95.0);
	glVertex2d(275.0, 95.0);
	glVertex2d(275.0, 155.0);
	glVertex2d(255.0, 155.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(255.0, -5.0);
	glVertex2d(275.0, -5.0);
	glVertex2d(275.0, 55.0);
	glVertex2d(255.0, 55.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 4
	glBegin(GL_POLYGON);
	glVertex2d(335.0, 345.0);
	glVertex2d(355.0, 345.0);
	glVertex2d(355.0, 405.0);
	glVertex2d(335.0, 405.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(335.0, 245.0);
	glVertex2d(355.0, 245.0);
	glVertex2d(355.0, 305.0);
	glVertex2d(335.0, 305.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(335.0, 145.0);
	glVertex2d(355.0, 145.0);
	glVertex2d(355.0, 205.0);
	glVertex2d(335.0, 205.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(335.0, 45.0);
	glVertex2d(355.0, 45.0);
	glVertex2d(355.0, 105.0);
	glVertex2d(335.0, 105.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 5
	glBegin(GL_POLYGON);
	glVertex2d(415.0, 395.0);
	glVertex2d(435.0, 395.0);
	glVertex2d(435.0, 450.0);
	glVertex2d(415.0, 450.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(415.0, 295.0);
	glVertex2d(435.0, 295.0);
	glVertex2d(435.0, 355.0);
	glVertex2d(415.0, 355.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(415.0, 195.0);
	glVertex2d(435.0, 195.0);
	glVertex2d(435.0, 255.0);
	glVertex2d(415.0, 255.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(415.0, 95.0);
	glVertex2d(435.0, 95.0);
	glVertex2d(435.0, 155.0);
	glVertex2d(415.0, 155.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(415.0, -5.0);
	glVertex2d(435.0, -5.0);
	glVertex2d(435.0, 55.0);
	glVertex2d(415.0, 55.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 6
	glBegin(GL_POLYGON);
	glVertex2d(495.0, 345.0);
	glVertex2d(515.0, 345.0);
	glVertex2d(515.0, 405.0);
	glVertex2d(495.0, 405.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(495.0, 245.0);
	glVertex2d(515.0, 245.0);
	glVertex2d(515.0, 305.0);
	glVertex2d(495.0, 305.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(495.0, 145.0);
	glVertex2d(515.0, 145.0);
	glVertex2d(515.0, 205.0);
	glVertex2d(495.0, 205.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(495.0, 45.0);
	glVertex2d(515.0, 45.0);
	glVertex2d(515.0, 105.0);
	glVertex2d(495.0, 105.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // vertikal kuning 7
	glBegin(GL_POLYGON);
	glVertex2d(575.0, 395.0);
	glVertex2d(595.0, 395.0);
	glVertex2d(595.0, 450.0);
	glVertex2d(575.0, 450.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(575.0, 295.0);
	glVertex2d(595.0, 295.0);
	glVertex2d(595.0, 355.0);
	glVertex2d(575.0, 355.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(575.0, 195.0);
	glVertex2d(595.0, 195.0);
	glVertex2d(595.0, 255.0);
	glVertex2d(575.0, 255.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(575.0, 95.0);
	glVertex2d(595.0, 95.0);
	glVertex2d(595.0, 155.0);
	glVertex2d(575.0, 155.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(575.0, -5.0);
	glVertex2d(595.0, -5.0);
	glVertex2d(595.0, 55.0);
	glVertex2d(575.0, 55.0);
	glEnd();

	//-----------------------------------------------horizon poligon kuning

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 0
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 365.0);
	glVertex2d(60.0, 365.0);
	glVertex2d(60.0, 385.0);
	glVertex2d(0.0, 385.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 265.0);
	glVertex2d(60.0, 265.0);
	glVertex2d(60.0, 285.0);
	glVertex2d(0.0, 285.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 165.0);
	glVertex2d(60.0, 165.0);
	glVertex2d(60.0, 185.0);
	glVertex2d(0.0, 185.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(0.0, 65.0);
	glVertex2d(60.0, 65.0);
	glVertex2d(60.0, 85.0);
	glVertex2d(0.0, 85.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 1
	glBegin(GL_POLYGON);
	glVertex2d(70.0, 415.0);
	glVertex2d(140.0, 415.0);
	glVertex2d(140.0, 440.0);
	glVertex2d(70.0, 440.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(70.0, 315.0);
	glVertex2d(140.0, 315.0);
	glVertex2d(140.0, 335.0);
	glVertex2d(70.0, 335.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(70.0, 215.0);
	glVertex2d(140.0, 215.0);
	glVertex2d(140.0, 235.0);
	glVertex2d(70.0, 235.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(70.0, 115.0);
	glVertex2d(140.0, 115.0);
	glVertex2d(140.0, 135.0);
	glVertex2d(70.0, 135.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(70.0, 15.0);
	glVertex2d(140.0, 15.0);
	glVertex2d(140.0, 35.0);
	glVertex2d(70.0, 35.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 2
	glBegin(GL_POLYGON);
	glVertex2d(150.0, 365.0);
	glVertex2d(220.0, 365.0);
	glVertex2d(220.0, 385.0);
	glVertex2d(150.0, 385.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(150.0, 265.0);
	glVertex2d(220.0, 265.0);
	glVertex2d(220.0, 285.0);
	glVertex2d(150.0, 285.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(150.0, 165.0);
	glVertex2d(220.0, 165.0);
	glVertex2d(220.0, 185.0);
	glVertex2d(150.0, 185.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(150.0, 65.0);
	glVertex2d(220.0, 65.0);
	glVertex2d(220.0, 85.0);
	glVertex2d(150.0, 85.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 3
	glBegin(GL_POLYGON);
	glVertex2d(230.0, 415.0);
	glVertex2d(300.0, 415.0);
	glVertex2d(300.0, 440.0);
	glVertex2d(230.0, 440.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(230.0, 315.0);
	glVertex2d(300.0, 315.0);
	glVertex2d(300.0, 335.0);
	glVertex2d(230.0, 335.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(230.0, 215.0);
	glVertex2d(300.0, 215.0);
	glVertex2d(300.0, 235.0);
	glVertex2d(230.0, 235.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(230.0, 115.0);
	glVertex2d(300.0, 115.0);
	glVertex2d(300.0, 135.0);
	glVertex2d(230.0, 135.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(230.0, 15.0);
	glVertex2d(300.0, 15.0);
	glVertex2d(300.0, 35.0);
	glVertex2d(230.0, 35.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 4
	glBegin(GL_POLYGON);
	glVertex2d(310.0, 365.0);
	glVertex2d(380.0, 365.0);
	glVertex2d(380.0, 385.0);
	glVertex2d(310.0, 385.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(310.0, 265.0);
	glVertex2d(380.0, 265.0);
	glVertex2d(380.0, 285.0);
	glVertex2d(310.0, 285.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(310.0, 165.0);
	glVertex2d(380.0, 165.0);
	glVertex2d(380.0, 185.0);
	glVertex2d(310.0, 185.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(310.0, 65.0);
	glVertex2d(380.0, 65.0);
	glVertex2d(380.0, 85.0);
	glVertex2d(310.0, 85.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 5
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 415.0);
	glVertex2d(460.0, 415.0);
	glVertex2d(460.0, 440.0);
	glVertex2d(390.0, 440.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 315.0);
	glVertex2d(460.0, 315.0);
	glVertex2d(460.0, 335.0);
	glVertex2d(390.0, 335.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 215.0);
	glVertex2d(460.0, 215.0);
	glVertex2d(460.0, 235.0);
	glVertex2d(390.0, 235.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 115.0);
	glVertex2d(460.0, 115.0);
	glVertex2d(460.0, 135.0);
	glVertex2d(390.0, 135.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(390.0, 15.0);
	glVertex2d(460.0, 15.0);
	glVertex2d(460.0, 35.0);
	glVertex2d(390.0, 35.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 6
	glBegin(GL_POLYGON);
	glVertex2d(470.0, 365.0);
	glVertex2d(540.0, 365.0);
	glVertex2d(540.0, 385.0);
	glVertex2d(470.0, 385.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 1
	glBegin(GL_POLYGON);
	glVertex2d(470.0, 265.0);
	glVertex2d(540.0, 265.0);
	glVertex2d(540.0, 285.0);
	glVertex2d(470.0, 285.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2d(470.0, 165.0);
	glVertex2d(540.0, 165.0);
	glVertex2d(540.0, 185.0);
	glVertex2d(470.0, 185.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); // 3
	glBegin(GL_POLYGON);
	glVertex2d(470.0, 65.0);
	glVertex2d(540.0, 65.0);
	glVertex2d(540.0, 85.0);
	glVertex2d(470.0, 85.0);
	glEnd();

	glColor3f(1.0, 1.0, 0.0); // horizon kuning 7
	glBegin(GL_POLYGON);
	glVertex2d(550.0, 415.0);
	glVertex2d(620.0, 415.0);
	glVertex2d(620.0, 440.0);
	glVertex2d(550.0, 440.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //2
	glBegin(GL_POLYGON);
	glVertex2d(550.0, 315.0);
	glVertex2d(620.0, 315.0);
	glVertex2d(620.0, 335.0);
	glVertex2d(550.0, 335.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //3
	glBegin(GL_POLYGON);
	glVertex2d(550.0, 215.0);
	glVertex2d(620.0, 215.0);
	glVertex2d(620.0, 235.0);
	glVertex2d(550.0, 235.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //4
	glBegin(GL_POLYGON);
	glVertex2d(550.0, 115.0);
	glVertex2d(620.0, 115.0);
	glVertex2d(620.0, 135.0);
	glVertex2d(550.0, 135.0);
	glEnd();
	glColor3f(1.0, 1.0, 0.0); //5
	glBegin(GL_POLYGON);
	glVertex2d(550.0, 15.0);
	glVertex2d(620.0, 15.0);
	glVertex2d(620.0, 35.0);
	glVertex2d(550.0, 35.0);
	glEnd();

	//--------------------------------------------

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POINTS);
	glVertex2d(25.0, 373.0);
	glEnd();

	//-------------------------------------

	glColor3f(1.0, 1.0, 1.0); //footer
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
	glPointSize(5);
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