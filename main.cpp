#include <iostream>
using namespace std;
int serie( int nvolte,int contatore,int somma) {
    int n1 = 1, n2 = 1;
    for (contatore = 2; contatore<nvolte; contatore++) {
        somma = n1 + n2;
        cout << somma << endl;
        n1 = n2;
        n2 = somma;
    }
    return n1;
}
int main() {
   int nvolte,contatore,somma,n1=1,n2=1;
    cin>>nvolte;
    if(nvolte>=2){
        cout<<n1<<endl<<n2<<endl;
        serie(nvolte,contatore, somma);
    }else{
        cout<<"errore"<<endl;
    }
   return 0;
}
