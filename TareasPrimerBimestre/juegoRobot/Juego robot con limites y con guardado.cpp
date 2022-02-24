#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void SaveFile(string Nombre, char GameMap[11][18])
{
    ofstream FileMap("Mapa.txt"); // abre el archivo
    if(FileMap.is_open())
    {
        FileMap << Nombre << endl;
        for(int i = 0; i < 11; i++)
        {
            for(int j = 0; j < 18; j++)
            {
               FileMap << GameMap[i][j];
            }
            FileMap << endl;
        }
    }

    FileMap.close(); // cierra el archivo
}
void DrawMap(int HeroPosX, int HeroPosY, char GameMap[11][18])
{
    GameMap[HeroPosX][HeroPosY] = '*';
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 18; j++)
        {
            if (GameMap[i][j] == '*' )
            {

                if ( i != HeroPosX || j != HeroPosY )
                {
                    GameMap[i][j] = ' ';
                }

            }
            cout << GameMap[i][j];
        }
        cout << endl;
    }
}

int PosicionRobot(char eje, char GameMap[11][18])
{
    int posicion=0;
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 18; j++)
        {
            if(GameMap[i][j] == '*' && eje == 'x')
            {
                posicion = i;
            }
            else
            if(GameMap[i][j] == '*' && eje == 'y')
            {
                posicion = j;
            }
        }
    }
    return posicion;
}

string OpenFile(char GameMap[11][18])
{
    ifstream FileMap("Mapa.txt"); // abre el archivo
    string line;
    string name="No encontre nombre";
    int renglon = 0;
    int row = 0;

    if(FileMap.is_open())
    {
        while(getline(FileMap, line))
        {
            if(renglon == 0)
                name = line; // Obtiene el nombre de jugador
            else
            {
                for(int i = 0; i < 11; i++)
                {
                        GameMap[row][i] = line[i];
                }
                row++;
            }
            renglon++;
        }

        FileMap.close();
    }
    else
    {
        cout << "Error. No se pudo abrir el archivo." << endl;
    }
    return name;
}

int main()
{
    char GameMap[11][18]={{'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','='},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','='}};
    int HeroPosX=8;
    int HeroPosY=11;
    int a=0,s=0,d=0,w=0;
    bool isGameOver = false;
    char Input = ' ';
    string NamePlayer =" ";
    // Obtiene el nombre del jugador
    NamePlayer = OpenFile(GameMap);
    cout << "Bienvenido/a " << NamePlayer << endl;
    // Obtiene la posición almacenada del robot en la coordenada X
    HeroPosX = PosicionRobot('x', GameMap);
    // Obtiene la posición almacenada del robot en la coordenada Y
    HeroPosY = PosicionRobot('y', GameMap);
    // dibuja o despliega el mapa asignado a la matriz
    DrawMap(HeroPosX, HeroPosY, GameMap);

    while(isGameOver == false)
    {
        cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
        cout << "Controles Teclas --> q(Salida), e(guardar)" << endl;
        cin >> Input;
        switch (Input)
        {
            case 'd':
                if(HeroPosY < 16)
                    HeroPosY++;
                    d++;
                break;
            case 'a':
                if(HeroPosY > 1)
                    HeroPosY--;
                    a++;
                break;
            case 'w':
                if(HeroPosX > 1)
                    HeroPosX--;
                    w++;
                break;
            case 's':
                if(HeroPosX < 9)
                    HeroPosX++;
                    s++;
                break;
            case 'q':
                isGameOver = true;
                cout << "El jugador ha realizado " << a+s+d+w << " iteraciones durante la partida" << endl;
                break;
            case 'e':
                SaveFile(NamePlayer, GameMap);
                break;
            default:
                cout << "Tecla Invalida" << endl;
                break;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);
    }
    return 0;
}
