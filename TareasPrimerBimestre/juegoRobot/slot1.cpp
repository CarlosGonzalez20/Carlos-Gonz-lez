#include <iostream>
#include <fstream>

using namespace std;

int main()
{
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Creación de Archivo
    ofstream myfile ("GameData.txt");
    string NewName;
    cout << "Ingrese su nombre: " << endl;
    cin >> NewName;
    if (myfile.is_open())
    {
        myfile << "Nombre guardado: ";
        myfile << NewName << endl;
        myfile.close();
    }
    else
        cout << "Unable to open file";
    //Lectura de archivo
    string line;
    string PlayerName;
    int lineCount = 0;
    ifstream myfileRead ("GameData.txt");

      if (myfileRead.is_open())
      {
        while ( getline (myfileRead,line) )
        {
           cout << line << endl;
            lineCount++;
        }
        myfileRead.close();
      }else
      {
          cout << "Unable to open file";
      }
      cout << PlayerName;
     return 0;
}
