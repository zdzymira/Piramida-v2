#include <iostream>
int z=1;
int n;

int main()
{
  std::cout << "Input height of the pyramid: " ;
  std::cin >> n;

  for(int i=n, z=1;i>0; i--, z++)
  {

    for(int j=1;j<=i;j++)//lewa przestrzen "-"
    {
      std::cout << " " ;
    }

    if(i==n)//wierzcholek
    {
      std::cout << "*" ;
    } 
    
    else{
    for(int k=1;k<z;k++)//wypełnienie
      {
        std::cout << "* " ;
      }
    std::cout << "*" ;//prawe x
    }

    std::cout << "\n" ;
  }
  return 0;
}
