#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout<<pow(2, 5)<<endl;    // 1-ci eded deyiseni 2ci eded quvveti gosterir.
  cout<<sqrt(25)<<endl;     // Kvadrat kok alma funksiyasini yerine yetirir.
  cout<<cbrt(27)<<endl;     // Kub kok alma funksiyasini yerine yetirir.
  cout<<round(5.987)<<endl; // Verilen deyiseni yuvarlaqlasdirir.
  cout<<ceil(5.987)<<endl;  // Verilen ededin tam hissesinden sonra gelen ededi cap edir.
  cout<<floor(5.987)<<endl; // Verilen ededin tam hissesinden evvel gelen ededi cap edir.

  double x = 5.11223456778890;
  cout.precision(3); // Moterze daxilinde yazilan eded necenci edede kimi yuvarlasacagini gosterir.
  cout<<fixed<<x<<endl; // burda "precision" sonraki emeliyyatda "fixed" mutleq yazilmalidir.
}