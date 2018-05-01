#include <iostream>
using namespace std;
#include "tablelamp.h"
class adjtablelamp : public tablelamp
{
public:

adjtablelamp() : tablelamp()   
{
  this-> brightness=1.0;;
}
void dim()
{
  if(this->brightness>0.1)
  {
    this->brightness-=0.1;
  }
  
}
void display(ostream& o)
{
  o<< * this <<endl<< "brightness is "<<this-> brightness << endl;
}
private:
float brightness;

};