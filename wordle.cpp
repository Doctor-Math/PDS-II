#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	string line, chave, palavra, resto;
	int n, i, j, k=0, z, tentativa, posicao, flag;
	
	ifstream in("palavras.txt",fstream::in);
	if (!in.is_open()){
		return 1;
	}
	getline(in,line);
	n=stoi(line);
	
	string palavras[n];
	
	for(i=1;i<=n;i++){
		getline(in,line);
		palavras[i]=line;
	}
	
	do{
	    cin>>posicao;
	}while(posicao<1 || posicao>n);
	
	chave=palavras[posicao];
	tentativa=0;
		
	while(tentativa<5){
		do{	
			cin>>palavra;
		}while(palavra.length()!=5);
			
		if(palavra==chave){
			cout<<palavra;
			cout<<" ("<<resto<<")"<<endl;
	    	cout<<"GANHOU!"<<endl;
	    	break;
		}else{
			for(k=0;k<5;k++){
				flag=0;
				for(j=0;j<5;j++){
					if(palavra[k]==chave[j]){
						if(k!=j){
							palavra[k]+=32;
						}
						flag=1;
						break;
					}
				}
				
					if(!flag){
						for(z=0;z<resto.length();z++){
						    if(palavra[k]==resto[z]){
						        flag=1;
						        break;
					        }
					    }
					
					        if(!flag){
						        resto.push_back(palavra[k]);
					        }
					        
						    palavra[k]='*';
					}
				}
			}
		
		cout<<palavra;
		cout<<" ("<<resto<<")"<<endl;
			
		tentativa++;
			
	}
		
	if(tentativa==5){
		cout<<"PERDEU! "<<palavras[posicao]<<endl;
	}
			
	in.close();
	return 0;
}