#include<iostream> 
 using namespace std; 
 class Complex{ 
     public: 
     float real; 
     float imag; 
  
     Complex() 
     { 
         float real,imag; 
     } 
  
     Complex (float re,float im) 
     { 
         real = re; 
         imag = im; 
     } 
  
     void getvalue() 
     { 
         cout<<"Enter the real part:"; 
         cin>>real; 
         cout<<"Enter the imag part:"; 
         cin>>imag; 
     } 
  
     void showvalue() 
     { 
         cout<<"("<<real<<" "<<imag<<")"; 
  
     } 
  
     }; 
  
 Complex add(Complex a,Complex b) 
 { 
    Complex result; 
    result.real=a.real+b.real; 
    result.imag=a.imag+b.imag; 
    return result; 
 } 
   int main() 
   { 
     Complex c1,c2(4.3,5.3),c3; 
     c1.getvalue(); 
     c3=add(c1,c2); 
     c1.showvalue(); 
     cout<<"+"; 
     c2.showvalue(); 
     cout<<"="; 
     c3.showvalue(); 
   }