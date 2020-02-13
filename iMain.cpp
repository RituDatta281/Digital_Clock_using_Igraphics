# include "iGraphics.h"


int t[3]={};
int T[6]={};

void gettime(int t[]);
void iDraw() {

	iClear();
	gettime(t);
	iSetColor(100, 100, 200);
    double x[]={55,50,55,100,105,100};
    double y[]={200,205,210,210,205,200};

	double x1[]={100,105,110,110,105,100};
    double y1[]={200,205,200,150,145,150};

    double x2[]={55,50,55,100,105,100};
    double y2[]={150,145,140,140,145,150};

    double x3[]={45,50,55,55,50,45};
    double y3[]={200,205,200,150,145,150};

    double x4[]={55,50,55,100,105,100};
    double y4[]={90,85,80,80,85,90};

	double x5[]={100,105,110,110,105,100};
    double y5[]={140,145,140,90,85,90};

    double x6[]={45,50,55,55,50,45};
    double y6[]={140,145,140,90,85,90};


    iFilledCircle(225, 175, 5);
    iFilledCircle(225, 110, 5);
    iFilledCircle(430, 175, 5);
    iFilledCircle(430, 110, 5);

    T[0]=t[0]/10;
    T[1]=t[0]%10;
    T[2]=t[1]/10;
    T[3]=t[1]%10;
    T[4]=t[2]/10;
    T[5]=t[2]%10;

    int i,j;

    for(i=0;i<6;i++)
    {
        if(T[i]==1){
            iPolygon(x1,y1,6);
            iPolygon(x5,y5,6);
        }
        if(T[i]==2){
            iPolygon(x1,y1,6);
            iPolygon(x,y,6);
            iPolygon(x2,y2,6);
            iPolygon(x6,y6,6);
            iPolygon(x4,y4,6);
        }
        if(T[i]==3){
            iPolygon(x,y,6);
            iPolygon(x1,y1,6);
            iPolygon(x2,y2,6);
            iPolygon(x5,y5,6);
            iPolygon(x4,y4,6);
        }
        if(T[i]==4){
            iPolygon(x3,y3,6);
            iPolygon(x2,y2,6);
            iPolygon(x1,y1,6);
            iPolygon(x5,y5,6);
        }
        if(T[i]==5){
            iPolygon(x,y,6);
            iPolygon(x3,y3,6);
            iPolygon(x2,y2,6);
            iPolygon(x5,y5,6);
            iPolygon(x4,y4,6);
        }
        if(T[i]==6)
        {
            iPolygon(x,y,6);
            iPolygon(x3,y3,6);
            iPolygon(x2,y2,6);
            iPolygon(x5,y5,6);
            iPolygon(x4,y4,6);
            iPolygon(x6,y6,6);
        }
        if(T[i]==7)
        {
            iPolygon(x,y,6);
            iPolygon(x1,y1,6);
            iPolygon(x5,y5,6);
        }
        if(T[i]==8)
        {
            iPolygon(x,y,6);
            iPolygon(x1,y1,6);
            iPolygon(x2,y2,6);
            iPolygon(x3,y3,6);
            iPolygon(x4,y4,6);
            iPolygon(x5,y5,6);
            iPolygon(x6,y6,6);
        }
        if(T[i]==9)
        {
            iPolygon(x,y,6);
            iPolygon(x2,y2,6);
            iPolygon(x1,y1,6);
            iPolygon(x3,y3,6);
            iPolygon(x5,y5,6);
        }
        if(T[i]==0){
            iPolygon(x,y,6);
            iPolygon(x1,y1,6);
            iPolygon(x3,y3,6);
            iPolygon(x4,y4,6);
            iPolygon(x5,y5,6);
            iPolygon(x6,y6,6);
        }
        for(j=0;j<6;j++){
            x[j]=x[j]+100;
            x1[j]=x1[j]+100;
            x2[j]=x2[j]+100;
            x3[j]=x3[j]+100;
            x4[j]=x4[j]+100;
            x5[j]=x5[j]+100;
            x6[j]=x6[j]+100;
        }
    }

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
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}


int main()
{

    iInitialize(800, 300, "demo");

    return 0;

}

