#include <iostream>
#include <time.h>
#include <vector>

int main()
{
  srand(time(0));
  int N;
  int maxRange;
  std::vector <unsigned int> randVec;
    std::cin>>N;
    std::cin>>maxRange;
    for(int i = 0; i < N; i++)
    {
        int l = (rand()%maxRange)+1;//random numbers from 1 to maxRange
        if (l % 4 == 0){
            randVec.push_back(l);
        } else { 
         continue;
        }
    }
    for(int j = 0; j < randVec.size(); j++){
            std::cout << randVec[j] << " ";
    }  
}
