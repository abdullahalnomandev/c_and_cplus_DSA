#include <bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   cin >> n;
   vector<string> names(n);

   for(int i=0; i<n; i++){
     cin >> names[i];
   }

   
   for(string name:names){
     cout << name << endl;
   }

   return 0;
}


/**
 * 6
 * Rakib
 * Sakib
 * Akib
 * Rifat
 * Sifat
 */