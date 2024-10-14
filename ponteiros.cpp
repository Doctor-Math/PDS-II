// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por valor
//    - A segunda deve ser passada por referência 
//    - A terceira deve ser passada "por referência" usando apontadores (passagem "por referência" disponível em C)
//    A função deverá somar 1 ao valor de cada uma das 3 variáveis e retornar.

#include <iostream>

using namespace std;

int function(int a, int &b, int *c){
   a+=1;
   b+=1;
   (*c)+=1;
   return a;
}


int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int a;
    cin>>a;
    
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *c=nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int TAM;
    cin>>TAM;
    int *vetor=new int[TAM];

    for(int i=0;i<TAM;i++){
        cin>>vetor[i];
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout<<&a<<endl;
    

    // 5) Imprima o VALOR da variável declarada em (1)
    cout<<a<<endl;
    

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout<<&c<<endl;
    
    
    // 7) Imprima o VALOR da variável declarada em (2)
    cout<<c<<endl;
    

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout<<vetor<<endl;
    

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout<<&vetor[0]<<endl;
    

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout<<vetor[0]<<endl;
    

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    c=&a;
    

    // 12) Imprima o VALOR da variável declarada em (2)
    cout<<c<<endl;
    

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*c<<endl;
    

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *c=5;
    

    // 15) Imprima o VALOR da variável declarada em (1)
    cout<<a<<endl;
    

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    *c=*vetor;
    

    // 17) Imprima o VALOR da variável declarada em (2)
    cout<<c<<endl;
    

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*c<<endl;
    

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    c=vetor;
    

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if(*c==(*vetor)){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }


    // 21) Imprima o VALOR da variável declarada em (2)
    cout<<c<<endl;
    

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*c<<endl;
    

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i=0;i<TAM;i++){
        *(c+i)*=10;
    }
    

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i=0;i<TAM;i++){
        cout<<vetor[i]<<" ";
    }
    
    cout<<endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for(int i=0;i<TAM;i++){
        cout<<*(vetor+i)<<" ";
    }
    cout<<endl;

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
    for(int i=0;i<TAM;i++){
        cout<<*(c+i)<<" ";
    }
    cout<<endl;

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    c=&vetor[TAM-1];
    

    // 28) Imprima o VALOR da variável declarada em (2)
    cout<<c<<endl;
    

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout<<*c<<endl;
    

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **d;
    d=&c;

    // 31) Imprima o VALOR da variável declarada em (30)
    cout<<d<<endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout<<&d<<endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout<<*d<<endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout<<**d<<endl;
    

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int e, f, g;
    cin>>e;
    cin>>f;
    cin>>g;


    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    function(e,f,&g);

    
    // 37) Imprima o valor das 3 variáveis criadas em (35)
    cout<<e<<" "<<f<<" "<<g<<endl;
    
    return 0;
}
