#include "Lazy.h"
#include <iostream>

class Resource
{
  public:
  Resource(int a,int b)
  {
    std::cout<<"Resource(a,b): "<<a<<","<<b<<std::endl;
  }
  void boom()
  {
    std::cout<<"Boom called"<<std::endl;
  }
};
int main()
{
   Lazy<Resource> resx([](){return Resource(4,3);});
   std::cout<<"Resource still not allocated"<<std::endl;
   resx->boom();   
}
