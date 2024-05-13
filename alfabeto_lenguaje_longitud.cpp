#include<iostream>
using namespace std;

void alfabetocombinacion(char alfabeto[], int n, int x, string combinacion, int &c) 
{
    if (combinacion.length() == x) 
	{
        cout<<combinacion<<" ";
        c++;
        return;
    }
    for (int i = 0; i < n; i++) 
	{
        string nueva_combinacion = combinacion + alfabeto[i];
        alfabetocombinacion(alfabeto, n, x, nueva_combinacion, c);
    }
}

int main() 
{
    int o, n1, x1;
        do 
		{
            cout << "Cual es la longitud de su alfabeto original: ";cin >> n1;
            cout << "En cada combinacion debe haber máximo : ";cin >> x1;
        } 
		while (n1 <= 0 || x1 <= 0);
        
        char alfabeto1[n1];
        cout << "Ingrese un caracter: ";
        for (int i = 0; i<n1; i++) 
		{
            cin>>alfabeto1[i];
        }
        
        int c2 = 0;
        for (int x = 1; x <= x1; x++) 
		{
            cout << "|w| = " <<x<<"--> ";
            alfabetocombinacion(alfabeto1, n1, x, "", c2);
            cout << endl;
        }
        cout<<"La longitud de su alfabeto es "<<c2<<endl;
    
    return 0;
}
