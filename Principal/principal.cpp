#include<iostream>
#include<iomanip>
#include<cctype>
#include<clocale>
#define "arquivo.h"
using namespace std;

void cadastrar(void);
void Pesquisar_Registro_por_Nome(void);
void Pesquisar_Registro_por_Data(void);
void Remover_Registro(void);
void Alterar_Registro(void);
void pausa(void);

int uplowcase (char * PMATRIZ, int TIPO)

{
    if(TIPO == 1)
        while(*PMATRIZ )
        cout.put(toupper(*PMATRIZ++));
    else
        while(*PMATRIZ)
        cout.put(tolower(*PMATRIZ++));
    return 0;
}

int main (void)


{
    int opcao = 0;
    while (opcao != 5)
    {
        cout << "--------------------------------"<<endl;
        cout << "      PROGRAMA REGISTRO         "<<endl;
        cout << "--------------------------------"<<endl;
        //cout << "\n";
        cout << "             MENU               "<<endl;
        cout << "\n";
        cout << "[1] - CADASTRAR"<<endl;
        cout << "[2] - PESQUISAR"<<endl;//PRECISA ABRIR MAIS UMA OPÇÃO PARA A PESQUISA DE DATA
        cout << "[3] - REMOVER"<<endl;
        cout << "[4] - ALTERAR"<<endl;
        cout << "[5] - SAIR"<<endl;
        cout << "\n";
        cout << "Escolha uma opcao:";
        cin>>  opcao;
        cin.ignore(80,'\n');
        cout<<endl;
        cout<< "--------------------------------"<<endl;
        if(opcao != 5)
        {
            switch(opcao)
            {
                case 1: cadastrar();break;
                case 2: Pesquisar_Registro_por_Nome();break;//acrescentar mais uma para data
                case 3: Remover_Registro();break;
                case 4: Alterar_Registro();break;


            }
        }
    }
    return 0;
}
void cadastrar(void)
{

    char LETRA;
    char NOME[50];
    int DATA;


    cout<<setlocale(LC_ALL,"");
    cout<<endl<<endl;

    cout << "\n";
    cout<< "-------------------------------"<<endl;
    cout<< "      CADASTRO DO CLIENTE      "<<endl;
    cout<< "-------------------------------"<<endl;
    cout<< "\n";

    cout<<endl;
    cout<<"Digite o nome : ";
    cin.getline(NOME, sizeof(NOME));cout<<endl;
    cout<< "Data de nascimento:";
    cin>>DATA;


    uplowcase(NOME,1);//Apresenta Maiúsculo
    cout<<endl<<endl<<endl;
    cout<< "------------- FIM --------------"<<endl;
    pausa();
    return;
}

void Pesquisar_Registro_por_Nome()
{
int A[10], I, J, PESQ;
    bool ACHA;
    char RESP;

    //cout<<setlocale(LC_ALL,"");
   // cout<<endl<<endl;

    cout<<"Pesquisa sequêncial.\n\n";
    //Entrada de valores
    //for( I = 0; I <= 9; I++)
    {
    //    cout<<"Entre"<<setw(2)<<I + 1<<"o. valor = ";
    //    cin>>A[I];
     //   cin.ignore(80,'\n');
    //}
   // cout<<endl;
    //Apresentação das notas
   // do
    {
        cout<<endl;
        cout<<"Entre o valor a ser pesquisado: ";
        cin>>PESQ;
        I = 0;
        ACHA = false;
        while (I <= 9 && ACHA == false)
            if( PESQ == A[I])
                ACHA = true;
            else
                I++;
            if(ACHA == true)
                cout<<PESQ<<" Localizado na posição"<<I + 1;
            else
                cout<<PESQ<<"não foi localizado";
            cout<<endl;
            cout<<"\nContinua? [S]IM / [N]ÃO + <Enter>: ";
            cin>> RESP;
            RESP = toupper(RESP);
    }
    while(RESP == 'S');
    pausa();
    return;
}
}
void Remover_Registro()
{
    cout<<"     Remover cadastro.     \n\n";

    pausa();
    return;
}

void Alterar_Registro()
{
    cout<<"     Alterar Cadastro     .\n\n";

    pausa();
    return;
}
    void pausa(void)

    {
    cout<<endl;
    cout<<"Tecle <Enter para encerrar... ";
    cin.get();
    return;
    }
//}

