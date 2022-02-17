#include <iostream>

using namespace std;

void print (string messege)
{
    cout << messege;
}

void drawMap(int posX,int posY,char gameMap[11][11])
{
  for(int i=0;i<11;i++){
    for(int j=0;j<11;j++){
      if(posX==j && posY==i)
        {
            cout<<"*";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
/*
void printlimites ()
{
    for (int i=0; i<12; i++)
    {
        limites(i,3);print("%c",205);
        limites(i,11);print("%c",205);
    }
    for(int j=; j<12; i++)
    {
        limites(0,i);print("%c",186);
        limites(11,i);print("&c",186);
    }
    limites(0,0);print("%c",201);
    limites(0,11);print("%c",200);
    limites(11,0);print("%c",187);
    limites(11,11);print("%c",188);
}
*/
int main()
{
  int posX=5;
  int posY=5;

  char map[11][11]={{'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'},
  {'0','0','0','0','0','0','0','0','0','0','0'}};
  char teclado;
  char limites [11][11];
  bool gameOver= false;
  /*
  print_limites();
  */
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
            if (posX>0)
            {
                posX-=1;
            }
            break;
        case 'd':
            if (posX<10)
            {
                posX+=1;
            }
            break;
        case 'w':
            if (posY>0)
            {
                posY-=1;
            }
            break;
        case 's':
            if (posY<10)
            {
                posY+=1;
            }
            break;
        case 'q':
            gameOver=true;
        default:
            break;
    }
  drawMap(posX,posY,map);
  }
 return 0;
}
