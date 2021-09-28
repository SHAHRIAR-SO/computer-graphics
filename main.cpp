#include <windows.h>
#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float i=0.0,m=0.0,n=0.0,o=0.0,c=0.0,b=0.0;
static float	cm	=  40.0;






void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }
glEnd();
}



void carMove(){
	cm=cm-.5;
	if(cm<0)
		cm=270;
	glutPostRedisplay();

}

void car()
{
    glColor3f(0.0, 0.0, 01.0);
    glBegin(GL_QUADS);
    glVertex2d(500,90);
    glVertex2d(570,90);
    glVertex2d(570,130);
    glVertex2d(510,130);
    glEnd();
    glColor3f(0.80, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2d(500,90);
    glVertex2d(570,90);
    glVertex2d(570,60);
    glVertex2d(500,60);
    glEnd();
    glColor3f(0.80, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2d(500.2,70);
    glVertex2d(500.2,20);
    glVertex2d(570.8,20);
    glVertex2d(570.8,70);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2d(500.4,70.8);
    glVertex2d(500.4,40);
    glVertex2d(570.6,40);
    glVertex2d(570.6,70.8);
    glEnd();
    glColor3f(01.0, 01.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2d(515.4,60.8);
    glVertex2d(515.4,45);
    glVertex2d(555.6,45);
    glVertex2d(555.6,60.8);
    glEnd();

    glColor3f(01.0, 01.0, 01.0);
    circle(08.3,8.6,550.5,30.5);
    glColor3f(01.0, 01.0, 01.0);
    circle(8.3,8.6,560.2,30.5);
    glColor3f(01.0, 01.0, 01.0);
    circle(8.3,8.6,520.3,30.5);
    glColor3f(01.0, 01.0, 01.0);
    circle(8.3,8.6,510.6,30.5);

}



void init (void)
{

glClearColor (0.0, 0.0, 1.0, 0.0);   // Background Color
glMatrixMode(GL_PROJECTION);        /* initialize viewing values */
glLoadIdentity();
gluOrtho2D(0.0,1100.0,0.0,700.0); // To specify the coordinate & Specify the distances to the nearer and farther depth
}



void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/




//sky
glColor3f(0.0,0.9,0.9);
glBegin(GL_POLYGON);
glVertex2f(0,400);
glVertex2f(0,700);
glVertex2f(1100,700);
glVertex2f(1100,400);
glEnd();

//sun
glColor3f (01.0, 0.80, 0.0);
circle(60.0,60.0,150.0,600.0);

//cloud-small
    glColor3f(01.0,01.,01.0);
    circle(30,30,210,620);

    glColor3f(01.0,01.,01.0);
    circle(45,45,260,620);

    glColor3f(01.0,01.,01.0);
    circle(45,45,300,620);

    glColor3f(01.0,01.,01.0);
    circle(30,30,350,620);

//cloud-large
    glColor3f(01.0,01.,01.0);
    circle(50,50,610,620);

    glColor3f(01.0,01.,01.0);
    circle(70,70,685,620);

    glColor3f(01.0,01.,01.0);
    circle(80,85,755,620);

    glColor3f(01.0,01.,01.0);
    circle(60,60,830,620);

    glColor3f(01.0,01.,01.0);
    circle(40,40,890,620);

//grass
glColor3f(0.0,0.5,0.0);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(1100,0);
glVertex2f(1100,400);
glVertex2f(0,400);
glEnd();



//tree-large
glColor3f(0.4,0.2,0.10);
glBegin(GL_POLYGON);
glVertex2f(95,135);
glVertex2f(145,135);
glVertex2f(140,285);
glVertex2f(100,285);
glEnd();

glColor3f(0.0,0.9,0.0);
circle(50,50,80,300);
circle(50,50,160,300);
circle(50,50,20,290);
circle(50,50,200,290);
circle(50,50,65,330);
circle(50,50,165,330);
circle(50,50,120,370);





//chim

	glColor3f(0.50,0.50,0.50);
	glBegin(GL_POLYGON);

		glVertex2f(745,393);
		glVertex2f(1055,393);
		glVertex2f(1055,410);
		glVertex2f(745,410);


	glEnd();

	//IT company

	glColor3f(01.0,01.0,01.0);
	glBegin(GL_POLYGON);

		glVertex2f(750,100);
		glVertex2f(1050,100);
		glVertex2f(1050,393);
		glVertex2f(750,393);
glEnd();



//door

	glColor3f(0.20,0.50,0.40);
	glBegin(GL_POLYGON);

		glVertex2f(840,100);
		glVertex2f(960,100);
		glVertex2f(960,170);
		glVertex2f(840,170);
glEnd();

//first floor

	glColor3f(01.0,0.0,0.0);
	glBegin(GL_POLYGON);

		glVertex2f(750,180);
		glVertex2f(1050,180);
		glVertex2f(1050,230);
		glVertex2f(750,230);
glEnd();


glColor3f (0.20,0.50,0.90);   //1st-window
glBegin(GL_POLYGON);
glVertex3f (773, 186, 0.0);
glVertex3f (817, 186, 0.0);
glVertex3f (817, 224, 0.0);
glVertex3f (773, 224, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //1st-window
glBegin(GL_POLYGON);
glVertex3f (843, 187, 0.0);
glVertex3f (887, 187, 0.0);
glVertex3f (887, 223, 0.0);
glVertex3f (843, 223, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //1st-window
glBegin(GL_POLYGON);
glVertex3f (913, 187, 0.0);
glVertex3f (957, 187, 0.0);
glVertex3f (957, 223, 0.0);
glVertex3f (913, 223, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //1st-window
glBegin(GL_POLYGON);
glVertex3f (983, 187, 0.0);
glVertex3f (1027, 187, 0.0);
glVertex3f (1027, 223, 0.0);
glVertex3f (983, 223, 0.0);
glEnd();

//2nd floor

	glColor3f(01.0,0.0,0.0);
	glBegin(GL_POLYGON);

		glVertex2f(750,250);
		glVertex2f(1050,250);
		glVertex2f(1050,300);
		glVertex2f(750,300);
glEnd();

glColor3f (0.20,0.50,0.90);   //2nd-window
glBegin(GL_POLYGON);
glVertex3f (773, 257, 0.0);
glVertex3f (817, 257, 0.0);
glVertex3f (817, 293, 0.0);
glVertex3f (773, 293, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //2nd-window
glBegin(GL_POLYGON);
glVertex3f (843, 257, 0.0);
glVertex3f (887, 257, 0.0);
glVertex3f (887, 293, 0.0);
glVertex3f (843, 293, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //2nd-window
glBegin(GL_POLYGON);
glVertex3f (913, 257, 0.0);
glVertex3f (957, 257, 0.0);
glVertex3f (957, 293, 0.0);
glVertex3f (913, 293, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //2nd-window
glBegin(GL_POLYGON);
glVertex3f (983, 257, 0.0);
glVertex3f (1027, 257, 0.0);
glVertex3f (1027, 293, 0.0);
glVertex3f (983, 293, 0.0);
glEnd();

//3rd floor

	glColor3f(01.0,0.0,0.0);
	glBegin(GL_POLYGON);

		glVertex2f(750,320);
		glVertex2f(1050,320);
		glVertex2f(1050,370);
		glVertex2f(750,370);
glEnd();

glColor3f (0.20,0.50,0.90);   //3rd-window
glBegin(GL_POLYGON);
glVertex3f (773, 327, 0.0);
glVertex3f (817, 327, 0.0);
glVertex3f (817, 363, 0.0);
glVertex3f (773, 363, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //3rd-window
glBegin(GL_POLYGON);
glVertex3f (843, 327, 0.0);
glVertex3f (887, 327, 0.0);
glVertex3f (887, 363, 0.0);
glVertex3f (843, 363, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //3rd-window
glBegin(GL_POLYGON);
glVertex3f (913, 327, 0.0);
glVertex3f (957, 327, 0.0);
glVertex3f (957, 363, 0.0);
glVertex3f (913, 363, 0.0);
glEnd();

glColor3f (0.20,0.50,0.90);   //3rd-window
glBegin(GL_POLYGON);
glVertex3f (983, 327, 0.0);
glVertex3f (1027, 327, 0.0);
glVertex3f (1027, 363, 0.0);
glVertex3f (983, 363, 0.0);
glEnd();


//tree- near IT

//upper-triangle
	glColor3f (.0, 0.90, 0.0);   //
glBegin(GL_TRIANGLES);
glVertex3f (645, 335, 0.0);
glVertex3f (730, 335, 0.0);
glVertex3f (690, 390, 0.0);
glEnd();


//mid-triangle
	glColor3f (.0, 0.90, 0.0);   //
glBegin(GL_TRIANGLES);
glVertex3f (645, 305, 0.0);
glVertex3f (730, 305, 0.0);
glVertex3f (690, 370, 0.0);
glEnd();

//mid-triangle
	glColor3f (.0, 0.90, 0.0);   //
glBegin(GL_TRIANGLES);
glVertex3f (645, 275, 0.0);
glVertex3f (730, 275, 0.0);
glVertex3f (690, 330, 0.0);
glEnd();

glColor3f (0.4,0.2,0.10);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (668, 225, 0.0);
glVertex3f (707, 225, 0.0);
glVertex3f (700, 275, 0.0);
glVertex3f (675, 275, 0.0);
glEnd();

//billboard
glColor3f (01.,01.2,0.0);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (680, 110, 0.0);
glVertex3f (743, 110, 0.0);
glVertex3f (743, 160, 0.0);
glVertex3f (680, 160, 0.0);
glEnd();

//Text-- I
glColor3f (0.0,0.2,0.0);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (689, 120, 0.0);
glVertex3f (698, 120, 0.0);
glVertex3f (698, 150, 0.0);
glVertex3f (689, 150, 0.0);
glEnd();

//Text-- T-up
glColor3f (0.0,0.2,0.0);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (703, 143, 0.0);
glVertex3f (736, 143, 0.0);
glVertex3f (736, 150, 0.0);
glVertex3f (703, 150, 0.0);
glEnd();

//Text-- T-low
glColor3f (0.0,0.2,0.0);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (716, 120, 0.0);
glVertex3f (724, 120, 0.0);
glVertex3f (724, 150, 0.0);
glVertex3f (716, 150, 0.0);
glEnd();

//billboard--stand
glColor3f (0.0,0.2,0.0);   //tree rectangle
glBegin(GL_POLYGON);
glVertex3f (703, 60, 0.0);
glVertex3f (720, 60, 0.0);
glVertex3f (720, 110, 0.0);
glVertex3f (703, 110, 0.0);
glEnd();

	//road
	glColor3f(0.2,0.2,0.20);   //front of it-1
	glBegin(GL_POLYGON);

		glVertex2f(850,100);
		glVertex2f(950,100);
		glVertex2f(950,0);
		glVertex2f(850,0);

	glEnd();



	//road
	glColor3f(0.2,0.2,0.20);    //front of it-2
	glBegin(GL_POLYGON);


		glVertex2f(700,0);
		glVertex2f(850,0);
		glVertex2f(850,60);
		glVertex2f(550,60);

	glEnd();

	glColor3f(01.0,01.0,01.0);    //front of it- top sidebar
	glBegin(GL_POLYGON);


		glVertex2f(550,48);
		glVertex2f(850,48);
		glVertex2f(850,60);
		glVertex2f(550,60);

	glEnd();

	glColor3f(01.0,01.0,01.0);    //front of it- bottom sidebar
	glBegin(GL_POLYGON);


		glVertex2f(700,0);
		glVertex2f(950,0);
		glVertex2f(950,13);
		glVertex2f(680,13);

	glEnd();

	glColor3f(01.0,01.0,01.0);    //front of it- left sidebar - 1
	glBegin(GL_POLYGON);


		glVertex2f(850,48);
		glVertex2f(865,48);
		glVertex2f(865,100);
		glVertex2f(850,100);

	glEnd();


	glColor3f(01.0,01.0,01.0);    //front of it- right sidebar - 1
	glBegin(GL_POLYGON);


		glVertex2f(935,0);
		glVertex2f(950,0);
		glVertex2f(950,100);
		glVertex2f(935,100);

	glEnd();


	//small stair--front of door

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);

		glVertex2f(830,85);
		glVertex2f(970,85);
		glVertex2f(970,100);
		glVertex2f(830,100);

glEnd();

	//road--main
	glColor3f(0.2,0.2,0.20);
	glBegin(GL_POLYGON);

		glVertex2f(350,0);
		glVertex2f(700,0);
		glVertex2f(570,400);
		glVertex2f(500,400);

	glEnd();

glColor3f(01.0,01.0,01.0);   //left
	glBegin(GL_POLYGON);

		glVertex2f(350,0);
		glVertex2f(380,0);
		glVertex2f(505,400);
		glVertex2f(500,400);

	glEnd();

	glColor3f(01.0,01.0,01.0);   //right-up
	glBegin(GL_POLYGON);

		glVertex2f(670,48);
		glVertex2f(700,48);
		glVertex2f(570,400);
		glVertex2f(565,400);

	glEnd();

	glColor3f(01.0,01.0,01.0);   //right-down
	glBegin(GL_POLYGON);
		glVertex2f(680,0);
		glVertex2f(716,0);
		glVertex2f(710,13);
		glVertex2f(675,13);
	glEnd();

	glColor3f(01.0,01.0,01.0);     //1
	glBegin(GL_POLYGON);

		glVertex2f(522,50);
		glVertex2f(543,50);
		glVertex2f(543,120);
		glVertex2f(522,120);

	glEnd();

    glColor3f(01.0,01.0,01.0);     //2
	glBegin(GL_POLYGON);

		glVertex2f(524,155);
		glVertex2f(541,155);
		glVertex2f(541,220);
		glVertex2f(524,220);

	glEnd();

	glColor3f(01.0,01.0,01.0);    //3
	glBegin(GL_POLYGON);

		glVertex2f(525,250);
		glVertex2f(540,250);
		glVertex2f(540,302);
		glVertex2f(525,302);

	glEnd();

	glColor3f(01.0,01.0,01.0);      //4
	glBegin(GL_POLYGON);

		glVertex2f(526,325);
		glVertex2f(539,325);
		glVertex2f(539,360);
		glVertex2f(526,360);

	glEnd();

	glColor3f(01.0,01.0,01.0);      //5
	glBegin(GL_POLYGON);

		glVertex2f(527,380);
		glVertex2f(538,380);
		glVertex2f(538,400);
		glVertex2f(527,400);

	glEnd();

	//left-light-1-vertical
	glColor3f (0.50,0.50,0.50);
    glBegin(GL_POLYGON);
    glVertex3f (365, 70, 0.0);
    glVertex3f (375, 70, 0.0);
    glVertex3f (375, 250, 0.0);
    glVertex3f (365, 250, 0.0);
    glEnd();

    //left-light-1-horizontal
	glColor3f (0.50,0.50,0.50);
    glBegin(GL_POLYGON);
    glVertex3f (365, 230, 0.0);
    glVertex3f (415, 230, 0.0);
    glVertex3f (415, 240, 0.0);
    glVertex3f (365, 240, 0.0);
    glEnd();

    //left-light-circle
    glColor3f (0.90, 0.90, 0.50);
    circle(20.0,20.0,402.0,210.0);


    //right-light-1-vertical
	glColor3f (0.50,0.50,0.50);
    glBegin(GL_POLYGON);
    glVertex3f (623, 280, 0.0);
    glVertex3f (633, 280, 0.0);
    glVertex3f (633, 398, 0.0);
    glVertex3f (623, 398, 0.0);
    glEnd();

    //right-light-1-horizontal
	glColor3f (0.50,0.50,0.50);
    glBegin(GL_POLYGON);
    glVertex3f (595, 380, 0.0);
    glVertex3f (632, 380, 0.0);
    glVertex3f (632, 390, 0.0);
    glVertex3f (595, 390, 0.0);
    glEnd();

    //right-light-circle
    glColor3f (0.90, 0.90, 0.50);
    circle(15.0,15.0,605.0,365.0);



//House-small
	glColor3f (1.0, 0.0, 0.0);   //large triangle
glBegin(GL_TRIANGLES);
glVertex3f (290, 350, 0.0);
glVertex3f (450, 350, 0.0);
glVertex3f (370, 395, 0.0);
glEnd();

glColor3f (.70, .5, .80);   //large rectangle
glBegin(GL_POLYGON);
glVertex3f (300, 270, 0.0);
glVertex3f (440, 270, 0.0);
glVertex3f (440, 350, 0.0);
glVertex3f (300, 350, 0.0);
glEnd();

glColor3f (1.20, 1.5, 1.50);   //door rectangle
glBegin(GL_POLYGON);
glVertex3f (350, 270, 0.0);
glVertex3f (390, 270, 0.0);
glVertex3f (390, 320, 0.0);
glVertex3f (350, 320, 0.0);
glEnd();

glColor3f (0.0, 0.0, 0.10);   //stair
glBegin(GL_POLYGON);
glVertex3f (290, 260, 0.0);
glVertex3f (445, 260, 0.0);
glVertex3f (445, 270, 0.0);
glVertex3f (290, 270, 0.0);
glEnd();

//tree-small-left
glColor3f(0.4,0.2,0.10);
glBegin(GL_POLYGON);
glVertex2f(275,150);
glVertex2f(305,150);
glVertex2f(300,215);
glVertex2f(280,215);
glEnd();

glColor3f(0.0,0.9,0.0);
circle(30,30,265,230);
circle(30,30,315,230);
circle(30,30,290,270);


	//House-large
	glColor3f (.90, 0.0, 0.0);   //large triangle
glBegin(GL_TRIANGLES);
glVertex3f (60, 120, 0.0);
glVertex3f (280, 120, 0.0);
glVertex3f (165, 200, 0.0);
glEnd();

glColor3f (01.0,01.0,01.0);   //large rectangle
glBegin(GL_POLYGON);
glVertex3f (70, 20, 0.0);
glVertex3f (270, 20, 0.0);
glVertex3f (270, 120, 0.0);
glVertex3f (70, 120, 0.0);
glEnd();

glColor3f (01.0,0.60,0.3);   //door rectangle
glBegin(GL_POLYGON);
glVertex3f (140, 20, 0.0);
glVertex3f (200, 20, 0.0);
glVertex3f (200, 85, 0.0);
glVertex3f (140, 85, 0.0);
glEnd();

glColor3f (0.0, 0.0, 0.10);   //stair
glBegin(GL_POLYGON);
glVertex3f (60, 05, 0.0);
glVertex3f (280, 05, 0.0);
glVertex3f (280, 20, 0.0);
glVertex3f (60, 20, 0.0);
glEnd();


//Boy
glColor3f(0.6,0.5,0.10);
glBegin(GL_POLYGON);
glVertex2f(300,45);
glVertex2f(305,45);
glVertex2f(305,90);
glVertex2f(300,90);
glEnd();


glColor3f(0.6,0.5,0.10);
glBegin(GL_POLYGON);
glVertex2f(310,45);
glVertex2f(315,45);
glVertex2f(315,90);
glVertex2f(310,90);
glEnd();

glColor3f(0.6,0.5,0.10);
glBegin(GL_POLYGON);
glVertex2f(290,75);
glVertex2f(325,75);
glVertex2f(325,82);
glVertex2f(290,82);
glEnd();

glColor3f(0.20,0.50,0.90);
glBegin(GL_POLYGON);
glVertex2f(300,70);
glVertex2f(315,70);
glVertex2f(315,85);
glVertex2f(300,85);
glEnd();

glColor3f(0.30,0.3,0.30);
circle(14,14,307,100);


//kite
glColor3f(0.0,0.,01.0);
glBegin(GL_POLYGON);
glVertex2f(280,510);
glVertex2f(320,440);
glVertex2f(390,485);
glVertex2f(350,560);
glEnd();


glColor3f (.90, 0.0, 0.0);
glBegin(GL_TRIANGLES);
glVertex2f (280, 425);
glVertex2f (345, 410);
glVertex2f(320,440);
glEnd();

glColor3f(01.0,0.,0.0);
glBegin(GL_LINES);
    glVertex2f(390,485);
    glVertex2f(280,510);
    glVertex2f(350,560);
    glVertex2f(320,440);
glEnd();

//Line
glColor3f(0.0,0.,0.0);
glBegin(GL_LINES);
    glVertex2f(330, 200);
    glVertex2f(325, 80);
    glVertex2f(320,440);
    glVertex2f(330, 200);
glEnd();

	carMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(0,cm+(8*i),0);
     car();
     glPopMatrix();

    }


/* don't wait!
* start processing buffered OpenGL routines
*/
glutSwapBuffers();
}


/*
* Declare initial window size, position, and display mode
* (Double buffer & RGBA). Open window with "hello"
* In its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); //Double Frame
glutInitWindowSize (1100, 700);
glutInitWindowPosition (130,0);
glutCreateWindow ("                                                                                                                                                     Modern City");
init ();
glutDisplayFunc(display);   //built in function
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
