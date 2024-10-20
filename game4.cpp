#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
void castle();
void pEnemy1();
void eraseEnemy1();
void moveEnemy1();
void pEnemy2();
void eraseEnemy2();
void moveEnemy2();
void pEnemy3();
void eraseEnemy3();
void moveEnemy3();
void displayHealth();
void pPlayer();
void erasePlayer();
void movePlayer();
bool collision();
bool collectcoins();
void displayCoins();
int ex = 2, ey = 27;  
int ex1 = 18, ey1 = 24; 
int ex2 = 55, ey2 = 24;
int castleHealth = 500; 
int px = 30, py = 15;
int c1x=20,c1y=18; 
int c2x=57,c2y=20;
int c3x=45,c3y=23;
int c4x=15,c4y=26;
bool enemy2Alive=true;
bool enemy3Alive=true;
bool isMovingRight=true;
bool c1collected=false;
bool c2collected=false;
bool c3collected=false;
bool c4collected=false;
int main()
{
    system("Color 0d");
    system("cls");
    castle();
    displayHealth();
    pPlayer(); 

    while (true)
    {
        movePlayer();
        moveEnemy1(); 
        displayCoins();
        collectcoins();   
        if(enemy2Alive)
        {
            moveEnemy2();
        }
        if(enemy3Alive)
        {
            moveEnemy3();
        }
        collision();
        if (castleHealth <= 0)
        {
            gotoxy(0, 40);
            cout << "Castle destroyed! Game Over!" << endl;
            break;
        }
    }
    return 0;
}

void castle()
{
cout<<"                            /\\                        "<<endl;
cout<<"                           /  \\                       "<<endl;
cout<<"                          /    \\                      "<<endl;
cout<<"              _   _   _   |    |   _   _   _ "<<endl;
cout<<"             | |_| |_| |  |    |  | |_| |_| |"<<endl;
cout<<"             \\         /  |    |  \\         /"<<endl;
cout<<"              |_______|___|____|___|_______|"<<endl;
cout<<"              |____________________________|"<<endl;
cout<<"              |                            |"<<endl;
cout<<"              |          --------          |"<<endl;
cout<<"              |         /        \\         |"<<endl;
cout<<"              |         |        |         |"<<endl;
cout<<"              |         |        |         |"<<endl;
cout<<"              |_________|________|_________|"<<endl;
}

void pEnemy1()
{
gotoxy(ex,ey);
cout<<"     ___          "<<endl;
gotoxy(ex,ey+1);
cout<<" _   | |   _"<<endl;
gotoxy(ex,ey+2);
cout<<"| |__| |__| |"<<endl;
gotoxy(ex,ey+3);
cout<<"|_|  | |  |_| "<<endl;
gotoxy(ex,ey+4);
cout<<"| | |___| | |"<<endl;
gotoxy(ex,ey+5);
cout<<"| |_______| |"<<endl;
gotoxy(ex,ey+6);
cout<<"|_| |___| |_|"<<endl;
}
void eraseEnemy1()
{
    gotoxy(ex,ey);
    cout << "                    " << endl;
    gotoxy(ex,ey+1);
    cout << "                    " << endl;
    gotoxy(ex,ey+2);
    cout << "                     " << endl;
    gotoxy(ex,ey+3);
    cout << "                    " << endl;
    gotoxy(ex,ey+4);
    cout << "                     " << endl;
    gotoxy(ex,ey+5);
    cout << "                     " << endl;
    gotoxy(ex,ey+6);
    cout << "                      " << endl;
}

void moveEnemy1()
{
    eraseEnemy1();
    if (isMovingRight)
    {
        ex=ex+1; 
        if (ex>70)
        {
            isMovingRight=false;
        }
    }
    else 
    {
        ex=ex-1; 
        if (ex<2)
        {
            isMovingRight=true; 
        }
    }

    pEnemy1();
    Sleep(100);
}

void pEnemy2()
{
    gotoxy(ex1,ey1);
    cout << " /\\" << endl;
    gotoxy(ex1,ey1+1);
    cout << " || " << endl;
    gotoxy(ex1,ey1+2);
    cout << " || " << endl;
}
void eraseEnemy2()
{
    gotoxy(ex1,ey1);
    cout << "         " << endl;
    gotoxy(ex1,ey1+1);
    cout << "         " << endl;
    gotoxy(ex1,ey1+2);
    cout << "         " << endl;
}
void moveEnemy2()
{
    if(enemy2Alive)
    {
    eraseEnemy2();
    ey1=ey1-1;
    pEnemy2();
    if (ey1 < 15) 
    {
        eraseEnemy2();
        ey1=24;
        castleHealth-=10; 
        displayHealth();
    }
    Sleep(100);
}
}
void pEnemy3()
{
    gotoxy(ex2,ey2);
    cout << " /\\" << endl;
    gotoxy(ex2,ey2+1);
    cout << " || " << endl;
    gotoxy(ex2,ey2+2);
    cout << " || " << endl;
}
void eraseEnemy3()
{
    gotoxy(ex2,ey2);
    cout << "         " << endl;
    gotoxy(ex2,ey2+1);
    cout << "         " << endl;
    gotoxy(ex2,ey2+2);
    cout << "         " << endl;
}
void moveEnemy3()
{
    if(enemy3Alive)
    {
    eraseEnemy3();
    ey2 = ey2-1;
    ex2 = ex2-1;
    pEnemy3();
    if (ey2 < 15) 
    {
        eraseEnemy3();
        ey2=24;
        ex2=55;
        castleHealth -= 10; 
        displayHealth();
    }
    Sleep(150);
}
}
void displayHealth()
{
    gotoxy(60,5);
    cout << "Castle Health: " << castleHealth << "   "; 
}
void pPlayer()
{
    gotoxy(px,py);
    cout << " |^^^| " << endl;
    gotoxy(px,py+1);
    cout << "   O " << endl;
    gotoxy(px,py+2);
    cout << "  /|\\./" << endl;
    gotoxy(px,py+3);
    cout << "  / \\" << endl;
    gotoxy(px,py+4);
    cout << " ______ " << endl;
    gotoxy(px,py+5);
    cout << "         " << endl;
}
void erasePlayer()
{
    gotoxy(px,py);
    cout << "       " << endl;
    gotoxy(px,py+1);
    cout << "       " << endl;
    gotoxy(px,py+2);
    cout << "       " << endl;
    gotoxy(px,py+3);
    cout << "       " << endl;
    gotoxy(px,py+4);
    cout << "        " << endl;
    gotoxy(px,py+5);
    cout << "        " << endl;
}
void movePlayer()
{
    if (GetAsyncKeyState(VK_LEFT) && px>0)
    {
        erasePlayer();
        px-=1;
        pPlayer();
    }
    if (GetAsyncKeyState(VK_RIGHT) && px<70)
    {
        erasePlayer();
        px+=1;
        pPlayer();
    }
    if (GetAsyncKeyState(VK_UP) && py>14)
    {
        erasePlayer();
        py-=1;
        pPlayer();
    }
    if (GetAsyncKeyState(VK_DOWN) && py<35)
    {
        erasePlayer();
        py+=1;
        pPlayer();
    }
}
bool collision()
{
    if (ex1 >= px && ex1 <= px + 6 && ey1 >= py && ey1 <= py + 3)
    {
        eraseEnemy2();
        enemy2Alive = false;
    }
    if (ex2 >= px && ex2 <= px + 6 && ey2 >= py && ey2 <= py + 3)
    {
        eraseEnemy2();
        enemy3Alive = false;
    }
    if(px>=13 && px<17  && py>= 19 && py<22)
    {
        enemy2Alive=true;
        enemy3Alive=true;
    }
}
void displayCoins()
{
    if(castleHealth<400)
    {
        if(!c1collected)
        {
            gotoxy(c1x,c1y);
            cout<<"'o'";
        }
    }
    if(castleHealth<300)
    {
        if(!c2collected)
        {
            gotoxy(c2x,c2y);
            cout<<"'o'";
        }
    }
    if(castleHealth<230)
    {
        if(!c3collected)
        {
            gotoxy(c3x,c3y);
            cout<<"'o'";
        }
    }
    if(castleHealth<150)
    {
        if(!c4collected)
        {
            gotoxy(c4x,c4y);
            cout<<"'o'";
        }
    }
}
bool collectcoins()
{
    if(c1x >= px && c1x <= px + 6 && c1y >= py && c1y <= py + 3 && !c1collected)
    {
        c1collected=true;
        castleHealth+=10;
        displayHealth();
    }
    else if(c2x >= px && c2x <= px + 6 && c2y >= py && c2y <= py + 3 && !c2collected)
    {
        c2collected=true;
        castleHealth+=10;
        displayHealth();
    }
    else if(c3x >= px && c3x <= px + 6 && c3y >= py && c3y <= py + 3 && !c3collected)
    {
        c3collected=true;
        castleHealth+=10;
        displayHealth();
    }
    else if(c4x >= px && c4x <= px + 6 && c4y >= py && c4y <= py + 3 && !c4collected)
    {
        c4collected=true;
        castleHealth+=10;
        displayHealth();
    }
    return false;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 