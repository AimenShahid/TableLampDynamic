#include <iostream>
using namespace std;
class tablelamp
{
  public:
tablelamp()
{
  this-> on_off = ON;
}
void pressswitch()
{
  on_off=(on_off==ON) ? OFF:ON;
}
friend ostream& operator <<(ostream& o , const tablelamp& t);

private:
enum state {ON,OFF} on_off;

};
ostream& operator <<(ostream& o , const tablelamp& t)
{
  return( (t.on_off == t.ON) ? o<<"lamp is on " : o<<"lamp is off ");
}