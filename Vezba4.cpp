#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Declare Functions used
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Declare Variables
srand(time(NULL));
while (letter != 'q')       //se dodeka e q kockite ke bidat frleni
{
cout << "Your Score: " << score << endl;    //pecatenje na poenite od nas na pocetok 0
cout << "computer's Score: " << compScore << endl << endl;      //pecatenje na poenite od kompjuterot na pocetokot 0
cout << "Press r to roll or q to quit: ";   
cin >> letter;      //vnesuvanje na bukva preku tastatura
num = 1 + rand()%6;     //promenliva num so rand()%6 se generiraat broevi od 0 do 5 so +1 ke se dobijat slucajni broevi od 1 do 6 (odgovor)
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;


sum = num + num2;       
compSum = compNum + compNum2;

//Calculate Sums

if (letter == 'q')      //uslov ako e q nema da ima frlanje na kockite
break;
if (letter != 'r')      //uslov ako e r ke ima frlanje na kockata
{
system("cls");      //komanda za cistenje na ekranot
continue;   
}

switch (num)        //ciklus za izbor num
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:        //default naredbata e neophodna vo ovaa programa dodeka break naredbata moze da ja nema sepak programata ke raboti(odgovor)
cout << "Error...";
break;

} //end switch

switch (num2)       //ciklus za izbor num2
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: //default naredbata e neophodna vo ovaa programa dodeka break naredbata moze da ja nema sepak programata ke raboti(odgovor)
cout << "Error...";
break;
} //end switch

cout << endl << "Yours: " << num << ", " << num2 << endl;   //nasite poeni posle vrlanjeto na kockite
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";    //poenite na kompjuterot posle vrlanjeto na kockite

//Display dice and numbers

if (sum > compSum) //ako sumata na nasite poeni e pogolema od poenite na kompjuterot
{
cout << "You won!!" << endl << endl;    //pecatenje
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;  //pecatenje
}


system("pause");    //komanda pause(odgovor)
system("cls");      //komanda za cistenje na ekranot(odgovor)


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
