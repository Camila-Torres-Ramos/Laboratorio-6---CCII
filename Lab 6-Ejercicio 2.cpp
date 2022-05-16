#include <iostream>  
 using namespace std;  
 int main(){  
      float c1,c2,c3,prom;  
      cout<<"Calificacion 1: ";cin>>c1;cout<<endl;  
      cout<<"Calificacion 2: ";cin>>c2;cout<<endl;  
      cout<<"Calificacion 3: ";cin>>c3;cout<<endl;  
      prom=(c1+c2+c3)/3;  
      if (prom>=6){  
           cout<<endl;  
           cout<<"APROBADO! tu calificacion es : "<<prom;  
      }  
      else  
      {  
           cout<<endl;  
           cout<<"REPROBADO! tu calificacion es : "<<prom;  
      }  
      return 0;  
 } 
