/*
	Copyright (c) 2016 Batuhan KINDAN
	Distributed under the MIT License.
	See License.txt or http://www.opensource.org/licenses/mit-license.php.
*/

#ifndef OPGLFUNCS_H_INCLUDED
#define OPGLFUNCS_H_INCLUDED
#include <string>

void initScreen(int, int);
void dynamicScreen(int , int );
void resize(int, int );
void display(void);
void key(unsigned char, int, int);
void glMouse(int, int , int , int );
void idle(void);
void drawTexturedCube(int,unsigned int);
void backgroundColor(double*);
void OnMouseMove(int , int ) ;
void mouseWheel(int, int, int, int);
void drawWireframeCube(int);
std::string getExePath();

#endif // OPGLFUNCS_H_INCLUDED
