#include <iostream>
using namespace std;
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "setcolor.h"
int pos_x=0;
int pos_y=0;
int pos2_x=0;
int pos2_y=0;
int wall_position[100][100]={0};
int current_position[100][100]={0};
int y=0;
int x=0;
int reset=0;

void move(int x, int y)
{
     HANDLE hConsoleOutput;
     COORD dwCursorPosition;
     cout.flush();
     dwCursorPosition.X=x;
     dwCursorPosition.Y=y;
     hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);

}
void  make_wall(int &x,int &y){
for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
    current_position[i][j]=6;
}}
    changecolor(0xcc);
	x=0;
	y=0;
	for(int i=0,j=0;i<24;i++,j++){
            for(int h=1;h<=10;h++)
            {int xxx=0+rand()%77-0+1;
              wall_position[xxx][j]=1;
	           move(xxx,j);
	            cout<<"0";
	             pos_x=xxx;
                  pos_y=y;
        }
	}
}
void end_detect(int &pos2_x,int &pos_x,int &xxxx,int &yyyy)
{
   if(pos2_x==xxxx && pos2_y==yyyy)
            {
            system("cls");
              if(pos2_x==xxxx && pos2_y==yyyy)
                cout<<"configuration ... ";
}
}
void movent(char c,int &x,int &y,int &pos2_x,int &pos2_y)
{
  if(c!='s' || c!='a' || c!='d' || c!='w')
        {
            cout<<"\b";
        }
    if(c=='s')
        move(x,y+=1);
    if(c=='d'){
        move(x+=1,y);}
   if(c=='a'){
        move(x-=1,y);}
    if(c=='w')
        move(x,y-=1);
         pos2_y=y;
         pos2_x=x;

}

int main()
{

   l1:
int xxxx;
int yyyy;
    move(0,0);
	char c = 'x';
	srand(time(0));

	   move(78,23);
changecolor(0xaa);
cout<<"0";
xxxx=78;
yyyy=23;
make_wall(x,y);

move(0,0);
changecolor(0x0a);
cout<<">";
	while (c != 'e')
	{
	    c = _getch();

         if(c=='r')
        {
            ++reset;
            if(reset<=2)
            {
            system("cls");
            goto l1;
            }
            if(reset>2)
               cout<<"\b";
        }
       movent(c,x,y,pos2_x,pos2_y);
        current_position[x][y]=1;
          end_detect(pos2_x,pos_x,xxxx,yyyy);
     if(x<=0)
       x=0;
    if(y>=23)
       y=23;
         for(int i=0;i<100;i++){
            for(int j=0;j<100;j++)
         if(current_position[i][j]==wall_position[i][j])
         {
             exit(1);
         }}
cout<<"*";

      }
	changecolor(0x07);
	return 0;
}
