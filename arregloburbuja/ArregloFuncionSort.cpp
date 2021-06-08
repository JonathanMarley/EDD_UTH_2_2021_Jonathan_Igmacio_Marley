#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arreglo[5]={4,8,6,2,7};

    sort(arreglo.begin(), arreglo.end());
   
   for (int i = 0; i < 5; i++)
   {
       cout<<arreglo[i]<<endl;
   }
   
    
    return 0;
}
