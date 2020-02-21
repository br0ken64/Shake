#include<iostream>
#include<string>
#include<unistd.h>

using namespace std;

double kallorien(int menge, string welcher, string flus)
{
  double kal;
  float kal_prot  = 2.48;
  float kal_milch = 0.64;
  float kal_kakao = 0.72;
  float kal_milchshake = 1.28;
  //Proteinshake
  if(welcher == "Protein Shake" && flus == "Milch")
  {
    kal =(kal_milch * menge) + (kal_prot * menge);
    return kal;
  }
  else if(welcher == "Protein Shake" && flus == "Wasser")
  {
    kal = kal_prot * menge;
    return kal;
  }

  //Milchshake

  if(welcher == "Milchshake")
  {
    kal = (kal_milch * menge);
    return kal;
  }

  //Kakao
  if(welcher == "Kakao")
  {
    kal = (kal_kakao * menge);
    return kal;
  }

  return kal;

}

int main()
{
  int menge;
  string welcher = " ";
  string flus;
  cout << "Shake Rechner by br0ken64" << endl;
  cout << "Art des Shakes:" << endl;

  cout << "Protein Shake,";
  cout << "Milchshake,";
  cout << "Kakao" << endl;

  cout << "Welchen Shake" << endl;
  getline(cin,welcher);

  cout << "Flüssigkeit:";
  cout << "Milch,";
  cout << "Wasser" << endl;

  cout << "Eingabe tätigen" << endl;
  getline(cin,flus);

  cout << "Mengen Angabe in ml" << endl;
  cin >> menge;

  cout << kallorien(menge, welcher, flus) << endl;

  return 0;
}
