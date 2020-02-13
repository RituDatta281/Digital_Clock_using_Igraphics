# include "iGraphics.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h> */
int x = 300, y = 300;

void iDraw() {

    iClear();
	iSetColor(20, 100, 200);

    double x[]={55,50,55,100,105,100};
    double y[]={200,205,210,210,205,200};
    iPolygon(x,y,6);
    void iFilledPolygon(double x[],double y[],int n);//a-
	double x1[]={100,105,110,110,105,100};
    double y1[]={200,205,200,150,145,150};
    iPolygon(x1,y1,6);
    void iFilledPolygon(double x1[],double y1[],int n);
    double x2[]={55,50,55,100,105,100};
    double y2[]={150,145,140,140,145,150};
    iPolygon(x2,y2,6);
    void iFilledPolygon(double x2[],double y2[],int n);
    double x3[]={45,50,55,55,50,45};
    double y3[]={200,205,200,150,145,150};
    iPolygon(x3,y3,6);
    void iFilledPolygon(double x3[],double y3[],int n);
    double x4[]={55,50,55,100,105,100};
    double y4[]={90,85,80,80,85,90};
    iPolygon(x4,y4,6);
    void iFilledPolygon(double x4[],double y4[],int n);//a-
	double x5[]={100,105,110,110,105,100};
    double y5[]={140,145,140,90,85,90};
    iPolygon(x5,y5,6);
    void iFilledPolygon(double x5[],double y5[],int n);
    double x6[]={45,50,55,55,50,45};
    double y6[]={140,145,140,90,85,90};
    iPolygon(x6,y6,6);
    void iFilledPolygon(double x6[],double y6[],int n);



	/*iSetColor(20, 200, 0);
	iText(40, 40, "Hi, I am iGraphics");*/
}


void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}

}


void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}

}

void gettime(int t[]) {
    char time[10];
	strcpy(time, __TIME__);
	char word[3];
	strcpy(word, strtok(time, ":"));
	t[0] = atoi(word);
	strcpy(word, strtok(NULL, ":")); // strcpy(word, strtok(0, ":"));
	t[1] = atoi(word);
	strcpy(word, strtok(NULL, ":"));
	t[2] = atoi(word);
}

int main()
{
    int t[3] = {};

    gettime(t);

    printf("%d %d %d\n", t[0], t[1], t[2]);

    iInitialize(1200, 400, "demo");
    return 0;
}

