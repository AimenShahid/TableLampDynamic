#include <iostream>
#include "adjtablelamp.h"
using namespace std;
int main()
{
  adjtablelamp *lamp=new adjtablelamp();
  cout<<*lamp<<endl;
  lamp->display(cout);
  lamp->pressswitch();
  lamp->dim();
  lamp->dim();
  lamp->display(cout);
  system("pause");
}
