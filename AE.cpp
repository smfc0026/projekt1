#include <iostream>

using namespace std;
 
 
int main()
{
    int n, m;
 
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << "Podaj liczbe: ";
	cin >> m;   
    
  int l;

    while(m!=0)
    {
        l = m;
        m = n % m;
        n = l;
    }
    cout<<"Najwiekszy wspolny dzielnik "<< n <<endl;

    return 0;
}
