#include <Windows.h>
#include <tchar.h> 
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
ofstream log;
std::vector<int> removal;
std::vector<int> reagents;
bool isRunning = true;

class Container {
float ratio = 0, amount = 0, max;
public:
float total()
{return (amount / max) * 100;}
void creation(float);
void Cvalue(float);
void eject();
}
Csmall,
Clarge;

void Container::creation (float y) {
max = y;}

void Container::Cvalue (float x){
for (float y = 0.1; y < x; y+= .1){
if 	((amount + y) >= max){
cout << "Container full" << endl;
return;}
amount += .1;
ratio = (amount/max);
cout << amount << endl;}}



class reagent {
friend class Container;
float ratio, amount;
int id;
string name;
public:
void naming(string, int);
} 
hydrogen,
lithium,
carbon,
nitrogen,
oxygen,
fluorine,
sodium,
aluminium,
silicon,
phosphorus,
sulfur,
chlorine,
potassium,
iron,
copper,
mercury,
radium,
water,
ethanol,
sugar,
sacid,
welding_fuel,
silver,
iodine,
bromine,
stable_plasma;


void reagent::naming (string N, int I){
name = N;
id = I;
amount = 0;
ratio = 0;
cout << name << endl;
reagents.push_back(id);
// int x = reagents.size() - 1;
// cout << reagents[x] << endl;
}

void Container::eject()
{}

class recipes{
string name;
int id;
float amount,ratio;
std::vector<int> recipe;
public:
void naming(string, int);
void ingredient(int, int, int, int, int, int);
void cap(int, int);
}
space_lube;

void recipes::naming(string N, int I){
name = N;
id = I;
amount = 0;
ratio = 0;
cout << name << endl;

}
void recipes::ingredient(int in1,int typ1,int in2,int typ2,int in3,int typ3){
int x;
int y;
cout << "testing" << endl;
if (typ1 != 0){
recipe.push_back(in1);
recipe.push_back(typ1);
x = recipe.size() - 1;
y = recipe.size() - 2;
cout x << endl << y << endl;
cout << recipe[y] + " of " + recipe[x] << endl;
}
if (typ2 != 0){
recipe.push_back(in2);
recipe.push_back(typ2);
x = recipe.size() - 1;
y = recipe.size() - 2;
cout << recipe[y] + " of " + recipe[x] << endl;
}
if(typ3 != 0){
recipe.push_back(in1);
recipe.push_back(typ2);
x = recipe.size() - 1;
y = recipe.size() - 2;
cout << recipe[y] + " of " + recipe[x] << endl;
}}


int running(int action, int& typ, int& dispense){
ofstream log;
log.open("keyboard.txt");
bool check;
switch(action){
case 1:
if(/*Csmall.percent() >= 100*/ true){
log << "Container Full";
break;
} else {
check = false;
for(int x = 1; x <= dispense; x++){
//checkit(typ.name);
if (check){
break;
} else {
//typ.amount++;
//change display
}}
//recipecheck();
//change container and log it
}
break;
case 2:
unsigned int rate;
for (int x = 0;x<=3/*change this*/;x++){
if (/*total[x].amount > 0*/ true){
removal.push_back(/*total[x]*/ 2);}	
if (/*!removal::size*/ true){
break;}}
break;
case 3:
break;
default:
log << "error";
return 0;
break;
}}


int main(){
int moni = 0;
float check;
		   hydrogen.naming("hydrogen",1);
			 lithium.naming("lithium",2);
			   carbon.naming("carbon",3);
		   nitrogen.naming("nitrogen",4);
			   oxygen.naming("oxygen",5);
		   fluorine.naming("fluorine",6);
			   sodium.naming("sodium",7);
		 aluminium.naming("aluminium",8);
			 silicon.naming("silicon",9);
	  phosphorus.naming("phosphorus",10);
			  sulfur.naming("sulfur",11);
		  chlorine.naming("chlorine",12);
		potassium.naming("potassium",13);
				  iron.naming("iron",14);
			  copper.naming("copper",15);
			mercury.naming("mercury",16);
			  radium.naming("radium",17);
				water.naming("water",18);
			ethanol.naming("ethanol",19);
				sugar.naming("sugar",20);
				sacid.naming("sacid",21);
  welding_fuel.naming("welding_fuel",22);
			  silver.naming("silver",23);
			  iodine.naming("iodine",24);
			bromine.naming("bromine",25);
stable_plasma.naming("stable_plasma",26);
	  space_lube.naming("space_lube",27);//27 and up is recipes
	 space_lube.ingredient(1,18,1,5,1,9);
Csmall.creation(50);
Clarge.creation(100);
// log.open("keyboard.txt");
//FreeConsole();
while(isRunning){
if(GetKeyState('B') & 0x8000){
Csmall.Cvalue(5);
Sleep(10);}
if(GetKeyState('N') & 0x8000){
++moni;
cout << moni << endl;
if (moni % 1000 == 0){
Sleep(100);
}}
if(GetKeyState(VK_ESCAPE) & 0x8000){
//log.close();
return 0;
}}}
