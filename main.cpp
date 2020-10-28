#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZM 3*365
using namespace std;
int g1[ROZM], g2[ROZM], g3[ROZM];
int t1[ROZM], t2[ROZM], t3[ROZM];
int main(int argc, char** argv)
{
 string g, t;

 ifstream file,file1,file2;
 ofstream fileOut;
 ofstream out;
 char* endptr;
 long liczba, min;
 string liczba1, liczba2,liczba3, liczba4,liczba5, liczba6;
 file.open("dane_systemy2.txt");
 file1.open("dane_systemy3.txt");
 file2.open("dane_systemy1.txt");
 fileOut.open("wyjscie.txt");
  out.open("out.txt");
 bool pierwszy = true;
int max1=t1[0], max2=t2[0], max3=t3[0];
 int licz=1;
 int ile=ROZM;
 bool czyRekord;
 for(int i=1; i<1095; i++){
 czyRekord=false;
 if (t1[i]>max1) { max1=t1[i]; czyRekord=true; }
 if (t2[i]>max2) { max2=t2[i]; czyRekord=true; }
 if (t3[i]>max3) { max3=t3[i]; czyRekord=true; }
 if (czyRekord) licz++;
 }
  out << "Liczba rekordow: " << licz << endl;



      ile = ROZM;
    for( int i=0; i<ROZM; i++){
        file >> g >> t;
    }
 if(file.good())
     while(!file.eof())
     {
               file>>liczba1 >> liczba2;
               liczba =  strtol(liczba2.c_str(), &endptr, 4);


               if(pierwszy)
               {
                            min = liczba;
                            pierwszy = false;
               }
               else
                  if(liczba < min)
                       min = liczba;
     }


 fileOut<< "58.1: " << min <<endl;
 file.close();
 fileOut.close();
 return 0;
}
