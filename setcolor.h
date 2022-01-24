
#define SETCOLOR_H_INCLUDED
#include <windows.h>
#include <stdlib.h>
#include <string>
void changecolor(WORD color)
{
    const WORD colors[] =
{
0X0a,	 0Xa0,	 0X00,	 0Xaa,
0X0b,	 0Xb0,	 0X00,	 0Xbb,
0X0c,	 0Xc0,	 0X00,	 0Xcc,
0X0d,	 0Xd0,	 0X00,	 0Xdd,
0X0e,	 0Xe0,	 0X00,	 0Xee,
0X0f,	 0Xf0,	 0X00,	 0Xff,
0X1a,	 0Xa1,	 0X11,	 0Xaa,
0X1b,	 0Xb1,   0X11,	 0Xbb,
0X1c,	 0Xc1,	 0X11,	 0Xcc,
0X1d,	 0Xd1,	 0X11,	 0Xdd,
0X1e,	 0Xe1,	 0X11,	 0Xee,
0X1f,	 0Xf1,	 0X11,	 0Xff,
0X2a,	 0Xa2,	 0X22,	 0Xaa,
0X2b,	 0Xb2,	 0X22,	 0Xbb,
0X2c,	 0Xc2,	 0X22,	 0Xcc,
0X2d,	 0Xd2,	 0X22,	 0Xdd,
0X2e,	 0Xe2,	 0X22,	 0Xee,
0X2f,	 0Xf2,	 0X22,	 0Xff,
0X3a,	 0Xa3,	 0X33,	 0Xaa,
0X3b,	 0Xb3,	 0X33,	 0Xbb,
0X3c,	 0Xc3,	 0X33,	 0Xcc,
0X3d,	 0Xd3,	 0X33,	 0Xdd,
0X3e,	 0Xe3,	 0X33,	 0Xee,
0X3f,	 0Xf3,	 0X33,	 0Xff,
0X4a,    0Xa4,	 0X44,	 0Xaa,
0X4b,	 0Xb4,	 0X44,	 0Xbb,
0X4c,	 0Xc4,	 0X44,	 0Xcc,
0X4d,	 0Xd4,	 0X44,	 0Xdd,
0X4e,	 0Xe4,	 0X44,   0Xee,
0X4f,	 0Xf4,	 0X44,	 0Xff,
0X5a,	 0Xa5,	 0X55,	 0Xaa,
0X5b,	 0Xb5,	 0X55,   0Xbb,
0X5c,	 0Xc5,	 0X55,	 0Xcc,
0X5d,	 0Xd5,	 0X55,	 0Xdd,
0X5e,	 0Xe5,	 0X55,	 0Xee,
0X5f,	 0Xf5,   0X55,	 0Xff,
0X6a,	 0Xa6,	 0X66,	 0Xaa,
0X6b,	 0Xb6,	 0X66,	 0Xbb,
0X6c,	 0Xc6,	 0X66,	 0Xcc,
0X6d,	 0Xd6,	 0X66,	 0Xdd,
0X6e,	 0Xe6,   0X66,	 0Xee,
0X6f,	 0Xf6,	 0X66,	 0Xff,
0X7a,	 0Xa7,	 0X77,	 0Xaa,
0X7b,	 0Xb7,	 0X77,	 0Xbb,
0X7c,	 0Xc7,	 0X77,	 0Xcc,
0X7d,	 0Xd7,   0X77,	 0Xdd,
0X7e,	 0Xe7,	 0X77,	 0Xee,
0X7f,	 0Xf7,	 0X77,	 0Xff,
0X8a,	 0Xa8,	 0X88,	 0Xaa,
0X8b,	 0Xb8,	 0X88,	 0Xbb,
0X8c,	 0Xc8,	 0X88,	 0Xcc,
0X8d,	 0Xd8,	 0x88,	 0Xdd,
0X8e,	 0Xe8,	 0X88,	 0Xee,
0X8f,	 0Xf8,	 0X88,	 0Xff,
0X9a,	 0Xa9,	 0X99,	 0Xaa,
0X9b,	 0Xb9,	 0X99,	 0Xbb,
0X9c,	 0Xc9,	 0X99,	 0Xcc,
0X9d,	 0Xd9,	 0X99,	 0Xdd,
0X9e,	 0Xe9,	 0X99,	 0Xee,
0X9f,	 0Xf9,	 0X99,	 0Xff,
0X09,	0X90,
0X08,	0X80,
0X07,	0X70,
0X06,	0X60,
0X05,	0X50,
0X04,	0X40,
0X03,	0X30,
0X02,	0X20,
0X01,	0X10,
0X00,	0X00,
0X19,	0X91,
0X18,	0X81,
0X17,	0X71,
0X16,	0X61,
0X15,	0X51,
0X14,	0X41,
0X13,	0X31,
0X12,	0X21,
0X11,	0X11,
0X10,	0X01,
0X29,	0X92,
0X28,	0X82,
0X27,	0X72,
0X26,	0X62,
0X25,	0X52,
0X24,	0X42,
0X23,	0X32,
0X22,	0X22,
0X21,	0X12,
0X20,	0X02,
0X39,	0X93,
0X38,	0X83,
0X37,	0X73,
0X36,	0X63,
0X35,	0X53,
0X34,	0X43,
0X33,	0X33,
0X32,	0X23,
0X31,	0X13,
0X30,	0X03,
0X49,	0X94,
0X48,	0X84,
0X47,	0X74,
0X46,	0X64,
0X45,	0X54,
0X44,	0X44,
0X43,	0X34,
0X42,	0X24,
0X41,	0X14,
0X40,	0X04,
0X59,	0X95,
0X58,	0X85,
0X57,	0X75,
0X56,	0X65,
0X55,	0X55,
0X54,	0X45,
0X53,	0X35,
0X52,	0X25,
0X51,	0X15,
0X50,	0X05,
0X69,	0X96,
0X68,	0X86,
0X67,	0X76,
0X66,	0X66,
0X65,	0X56,
0X64,	0X46,
0X63,	0X36,
0X62,	0X26,
0X61,	0X16,
0X60,	0X06,
0X79,	0X97,
0X78,	0X87,
0X77,	0X77,
0X76,	0X67,
0X75,	0X57,
0X74,	0X47,
0X73,	0X37,
0X72,	0X27,
0X71,	0X17,
0X70,	0X07,
0X89,	0X98,
0X88,	0X88,
0X87,	0X78,
0X86,	0X68,
0X85,	0X58,
0X84,	0X48,
0X83,	0X38,
0X82,	0X28,
0X81,	0X18,
0X80,	0X08,
0X99,	0X99,
0X98,	0X89,
0X97,	0X79,
0X96,	0X69,
0X95,	0X59,
0X94,	0X49,
0X93,	0X39,
0X92,	0X29,
0X91,	0X19,
0X90,	0X09,
0Xaf,	0Xfa,
0Xae,	0Xea,
0Xad,	0Xda,
0Xac,	0Xca,
0Xab,	0Xba,
0Xaa,	0Xaa,
0Xbf,	0Xfb,
0Xbe,	0Xeb,
0Xbd,	0Xdb,
0Xbc,	0Xcb,
0Xbb,	0Xbb,
0Xba,	0Xab,
0Xcf,	0Xfc,
0Xce,	0Xec,
0Xcd,	0Xdc,
0Xcc,	0Xcc,
0Xcb,	0Xbc,
0Xca,	0Xac,
0Xdf,	0Xfd,
0Xde,	0Xed,
0Xdd,	0Xdd,
0Xdc,	0Xcd,
0Xdb,	0Xbd,
0Xda,	0Xad,
0Xef,	0Xfe,
0Xee,	0Xee,
0Xed,	0Xde,
0Xec,	0Xce,
0Xeb,	0Xbe,
0Xea,	0Xae,
0Xff,	0Xff,
0Xfe,	0Xef,
0Xfd,	0Xdf,
0Xfc,	0Xcf,
0Xfb,	0Xbf,
0Xfa,	0Xaf,
};

    for(int i=0;i<500;i++)
{
    if (colors[i]==color)
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), colors[i]);
}

}
void change_background(char color)
{

    switch(color)
    {


    case 'w':
        system("color f0");
        break;
    case 'r':
        system("color c0");
        break;
    case 'g':
        system("color a0");
        break;
    case 'b':
        system("color 90");
        break;

    }

}


