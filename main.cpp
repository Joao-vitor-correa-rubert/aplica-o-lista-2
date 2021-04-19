#include <iostream>
using namespace std;

void insere(int codigo[], int &t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main() 
{
	int tam, codigoProduto[5],op;
	
	//inicialização
	tam= 0;	
do 
{
system("sls");
cout<<"\nMENU - LISTA \n";
cout<<"\n0 - REINICIAR A LISTA";
cout<<"\n1 - INSERIR CODIGO NA LISTA";
cout<<"\n2 - EXIBIR LISTA";
cout<<"\n3 - EXIBIR TAMANHO DA LISTA";
cout<<"\n4 - EXIBE UM ELEMENTO DA LISTA";
cout<<"n\5 - SAIR";
cout<<"\n OPCAO: ";
cin>>op;
system("cls");
switch(op)
{
	case 0: //reinialiação
		tam = 0;
		break;
	case 1: insere(codigoProduto, tam, 5);
		break;
	case 2: exibe(codigoProduto, tam);
		break;
	case 3: cout<<"\nTAMANHO DA LISTA: "<<tam;
		break;
	case 4: elemento(codigoProduto, tam);
		break;
	case 5: cout<<"\nFINALIZANDO O PROGRAMA DA LISTA\n";
		break;
	default: cout<<"\nOPCAO INVALIDA\n";
}
cout<<"\n\n"; 
system("pause");
}while(op !=5);
}
void insere (int codigo[], int &t, int tamanho)
{
	int prod;
	if(tamanho == t)
		cout<<"\nATENCAO! LISTA CHEIA\n";
	else
{
	cout<<"\nDIGITE CODIGO DO PRODUTO A SER INSERIDO: ";
	cin>> prod;
	codigo[t] = prod;
	t++;
	}
}
	void exibe(int codigo[], int t)
{
	int x;
	if (t == 0)
		cout <<"\nATENCAO! LISTA VAZIA\n";
	else
		cout<<"\nRELACAO DOS CODIGOS\n";
	for(x = 0; x < t; x++)
		cout <<"\n"<<codigo[x];
}
void elemento(int codigo[], int t)
{
 	int prod,posicao;
 	if(t == 0)
 	cout<<"\nATENCAO! LISTA VAZIA\n";
 	else	
{
	cout<<"\nQUAL A POSICAO QUE DESEJA? ";
	cin>>posicao;
	posicao--;
	if (posicao >=t)
		cout<<"\nATENCAO! NENHUM CODIGO ARMAZENADO OU POSICAO INEXISTENTE\n";
	else
		cout<<"\nCODIGO: "<<codigo[posicao]<<"\n";	
}
}
