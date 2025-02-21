#include <iostream>
using namespace std;
#include <vector>

int main() {
              int N,i,min,imin;
              cout<<"inserisci il numero di atleti che ci sono in una competizione"<<endl;
              cin>> N;
              vector<string> nomi,nazionali (N);
              vector<int> tempi (N);
              for(i=0;i<N;i=i+1)
              {
                 cout<<"inserisci il nome dell'atleta"<<endl;
                 cin>>nomi(i);
                 cout<<"inserisci di che nazionalità è l'atleta"<<endl;
                 cin>>nazionali(i);
                 cout<<"inserisci il tempo dell'atleta"<<endl;
                 cin>>tempi(i);
                 cout<<"il nome dell'atleta è" <<nomi(i) << "la nazionale dell'atleta è" <<nazionali(i) 
                 << "i tempi sono" << tempi(i) <<endl;
                
              }
            min=tempi(0);
            imin=0;
            for(i=0;i<N;i=i+1)
            {
                if(tempi(i)<min)
                {
                    min=tempi(i);
                    imin=i;
                }

            }
        cout<<"l'atleta vincitore è" <<nomi(imin) <<endl;
        cout<<"la sua nazionale è" << nazionali(imin) <<endl;
        cout<<"il suo tempo è" <<tempi(imin);


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
