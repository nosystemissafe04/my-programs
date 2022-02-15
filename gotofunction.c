#include<windows.h>
void gotoxy(int x,int y)
{
  COORD c;
  c.X=;
  c.Y=10;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
gotoxy(10,20);
printf("helloworld");
getch();

}
