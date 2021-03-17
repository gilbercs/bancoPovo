#include <stdio.h>//Tratamento de entrada e saida de dados
#include <stdlib.h>//Implementa funções p/ diversas operações, incluindo conversao, alocação na memoria, controle processo ect..
#include <conio.h>//biblioteca usada p/ manipular caracteres na tela
#include <string.h>//Manipulação de strings
int main(){
	int agencia[6], conta[6],contap,agenciap;
	char nome[100][25],sair;
	float saldo[100],deposito[100],saque[100];
	int i,j=0,op,x,l;
	do{
		system("cls");//limpa tela
		system("color 1f");// color de fundo
		printf("\n\n");
		printf("\t\t\t\t\t+-------------------------+\n");
		printf("\t\t\t\t\t\263  ****Banco do Povo****  \263\n");//entrada de dados
		printf("\t\t\t\t\t+-------------------------+\n");
		printf("\t\t\t\t\t| (1) - Abrir conta       |\n");
		printf("\t\t\t\t\t| (2) - Consultar extrato |\n");
		printf("\t\t\t\t\t| (3) - Realizar deposito |\n");
		printf("\t\t\t\t\t| (4) - Realizar saque    |\n");
		printf("\t\t\t\t\t| (5) - Sair do sitema.   |\n");
		printf("\t\t\t\t\t| (6) - Aluno             |\n");
		printf("\t\t\t\t\t+-------------------------+\n\n");
		printf("\t\t\t\t\t  FACA SUA ESCOLHA...\n");
 		printf("\t\t\t\t\t  ");
		fflush(stdin);
		scanf("%d",&op);
		switch(op){//teste logico 
			case 1:// caso variavel seja verdadeira entra condição e excuta os comando dentro da condicaço
				system("cls");
				system("color 3f");
				printf("\n");
				printf("\t\t\t\tNovo Cliente\n\n");//entrada de dados
				printf("\t\t\t\tQuantos cliente deseja cadastrar\n");
				printf("\t\t\t\t");
				scanf("%d",&x);
				system("cls");
				if(x>0 && x<=100){
				for(i=1;i<=x;i++){/*loop usando for no caso ira rodas uma quantidade definida pelo ususario <=100 se for >100 vai rodar, mas nao vai armazenar os
                dados na memoria pois o vetor definido vai ate 100 e caso101 seria 00000*/
				printf("\n");
				printf("\t\t\t\tCliente 0%d",i);//contado mostrar na tela pro usuario 
				printf("\n");
				printf("\t\t\t\tNome   : ");
				fflush(stdin);
				gets(nome[i]);
				printf("\t\t\t\tAgencia: ");
				scanf("%d",&agencia[i]);
				printf("\t\t\t\tConta  : ");
				scanf("%d",&conta[i]);
				printf("\t\t\t\tSaldo  : R\444 ");//r/444 imprimir $ na tela sem a biblioteca locale.h
				scanf("%f",&saldo[i]);
				j=j+1;//contador para fazer teste logico das proximas codições
				system("cls");
			}
			}else{printf("\t\t\t\tSuporta apenas 100 clientes\n");
			printf("\n\t\t\t\tVOLTAR...");
			getch();
            }
			break; //fim do primeiro break;
			case 2:
				if(j!=0){//caso variavel diferente de zero entra na codicao
				do{// loop
				system("cls");
				system("color 3f");
				printf("\n");
				printf("\t\t\t\t(1) - Consultar Extrato\n");//entrada de dados novamente 
				printf("\t\t\t\t(0) - Sair\n");// codicao do do while
				printf("\t\t\t\t");
				fflush(stdin);
				scanf("%d",&op);
				system("cls");
				switch(op){
					case 1:
				system("cls");
				printf("\n");
				printf("\t\t\t\tSALDO\n\n");
				printf("\t\t\t\tAgencia: ");
				scanf("%d",&agenciap);
				printf("\t\t\t\tConta  : ");
				scanf("%d",&contap);
				for(i=1;i<=x;i++){//loop vai ate x definido no incio na primeira condicao
					if(agenciap==agencia[i] && contap==conta[i]){/* teste logico verifica se agencia procurada e conta estao cadastrada no sistema
                    caso contrario nao nesta condicação vai para o else e imprimi invalido*/
						system("cls");
						printf("\n\n");
						printf("\t\t\t\tSaldo Atual da Conta\n");// saida de dados, imprimir na tela para o usuario
						printf("\t\t\t\tNome    : %s\n",nome[i]);
						printf("\t\t\t\tAgencia : %d - 0%d\n",agencia[i],i);
						printf("\t\t\t\tConta   : %d - 0%d\n",conta[i],i);
						printf("\t\t\t\tSaldo   : R\444 %.0f,00\n",saldo[i]);
						printf("\n");
						l=0;
						break;
					}else{
					    l=1;}
                }
                if(l!=0){printf("\n\n\t\t\t\tCliente nao encontrado\n\n");}
				printf("\t\t\t\tVOLTAR...");//Centralizar o texto na tela \t
				getch();
				break;
				case 0:
					break;
					default:
					    system("cls");
						printf("\n");
						printf("\t\t\t\tOpcao Invalida...");
						getch();
			}
			}while(op!=0);}//codicção <> de zero pra continuar se for = a zero para o loop
			else{
				system("cls");// limpa tela
			printf("\n\n\t\t\t\tNenhum cliente cadastrado...\n\n");// resposta do 1 teste logico desta condição no if(j!=0)
			printf("\t\t\t\tPRESIONE QUALQUER TECLA PARA VOLTAR...");
			getch();//esperar o usuario informa qualquer tecla                                  
			}
				break; //fim do 2 break;//break sair da condição
				case 3:
					if(j!=0){
						do{
					system("cls");
					system("color 3f");
					printf("\n\n");
					printf("\t\t\t\t***** Menu Deposito *****\n");
					printf("\t\t\t\t(1) - Realizar deposito: \n");//entra de dados para compraração com o existente
					printf("\t\t\t\t(0) - sair\n");
					fflush(stdin);//limpa dados do tecla
					printf("\t\t\t\t");
					scanf("%d",&op);
					system("cls");
					switch(op){
					case 1:
					printf("\n\t\t\t\tDeposito\n\n");
					printf("\t\t\t\tAgencia : ");
					scanf("%d",&agenciap);
					printf("\t\t\t\tConta   : ");
					scanf("%d",&contap);
					for(i=1;i<=x;i++){//
						if(agenciap==agencia[i] && contap==conta[i]){
							printf("\n\t\t\t\tBem - vindo! %s\n",nome[i]);
							printf("\t\t\t\tValor do deposito: R\444 ");
							scanf("%f",&deposito[i]);
							printf("\n");
							printf("\t\t\t\tENTER...");
							getch();
							if(deposito[i] > 0 ){
							system("cls");
							saldo[i]=saldo[i] + deposito[i];//processamentos de dados
							printf("\n\n\n");
							printf("\t\t\t\tDeposito realizado com sucesso\n\n");
							l=0;
						}else{
						    system("cls");
                        printf("\n\t\t\t\tDeposito nao aceito\n\n");}
							break;
						}else{
						    l=1;
					}}
					if(l!=0){printf("\n\n\t\t\t\tCliente nao encontrado...\n\n\n");}
					printf("\t\t\t\tVoltar...");
					getch();
					break;
					case 0:
						break;
						default:
						    system("cls");
						    printf("\n");
							printf("\t\t\t\tOpcao Invalida...");
							getch();
							break;
				}
					}while(op!=0);}
					else{
					system("cls");
					printf("\n\n\t\t\t\tNenhum cadastrado\n\n\n");
					printf("\t\t\t\tPRESIONE QUALQUER TECLA PARA VOLTAR...");
					getch();}
					break;//fim do 3 break;
					case 4:
						if(j!=0){
					do{
					system("cls");
					system("color 3f");
					printf("\n\n");
					printf("\t\t\t\t***** Menu Saque *****\n");
					printf("\t\t\t\t(1) - Realizar Saque\n");
					printf("\t\t\t\t(0) - Sair\n");
					fflush(stdin);
					printf("\t\t\t\t");
					scanf("%d",&op);
					system("cls");
					switch(op){
					    case 1:
					printf("\n");
					printf("\t\t\t\tSAQUE\n\n");
					printf("\t\t\t\tAgencia : ");
					scanf("%d",&agenciap);
					printf("\t\t\t\tConta   : ");
					scanf("%d",&contap);
						for(i=1;i<=x;i++){
						if(agenciap==agencia[i] && contap==conta[i]){
							printf("\n\t\t\t\tBem - vindo: %s\n",nome[i]);
							printf("\t\t\t\tValor do Saque: R\444 ");
							scanf("%f",&saque[i]);
							printf("\n");
							printf("\t\t\t\tENTER...");
							getch();
							if(saque[i] > 0){
							system("cls");
							if(saque[i]<=saldo[i]){//tste logico
							saldo[i]=saldo[i] - saque[i];//prossesamentos de dados
							printf("\n\n\t\t\t\tSaque realizado com sucesso\n\n");
							l=0;
							break;
							}
							else{
							printf("\n\t\t\t\tSaldo Insufiente para retirada\n");//saida de dados
							printf("\t\t\t\tValor pretendido R\$ %.00f\n",saque[i]);
							printf("\t\t\t\tSeu saldo Atual e: R\444 %.0f,00",saldo[i]);
							printf("\n\n");
							break;
						}
					}else{system("cls"); printf("\n\n\t\t\t\tValor informado incorreto numero negativo verifique e tente de novo\n\n");}
                        }
						else{
						l=1;
						}
					}
					if(l!=0){printf("\n\n\t\t\t\tClinte nao encontrado: \n\n");}
					printf("\t\t\t\tVOLTAR...");
					getch();
					break;
						case 0:
						break;
						default:
						    system("cls");
						    printf("\n");
							printf("\t\t\t\tOpcao Invalida...");
							getch();
							break;
                            }
					
				}while(op!=0);
					}
					else{
					system("cls");
					printf("\n\n\t\t\t\tNenhum cliente cadastrado\n\n");
					printf("\t\t\t\tPRESIONE QUALQUER TECLA PARA VOLTAR...");
					getch();
                    }
						break;//fim 4 break;
						case 5:
						    system("cls");
						    system("color 0f");
						    printf("\n\n");
							printf("\t\t\t\tSaindo do sistema....");//sair
							getch();
							exit(5);
							case 6:
								  system("cls");
    system("color 1f");
    printf("\n\n");
    printf("\t\t\t\t*=============================================*\n");//imprimir apenas o o texto
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|      FACULDADE METROPOLITANA DE MANAUS      |\n");
    printf("\t\t\t\t|           SISTEMA DE INFORMACAO             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|               LINGUAGEM C                   |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|             GILBER CARVALHO DE SOUZA        |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|       TRABALHO ACADEMICO DE LINGUAGEM DE    |\n");
    printf("\t\t\t\t|            PROGRAMACAO ESTRUTURADA          |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|              PROFESSOR: BRUNO               |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                 MANAUS - AM                 |\n");
    printf("\t\t\t\t|                 11/04/2016                  |\n");
    printf("\t\t\t\t*=============================================*\n");
    printf("\t\t\t\t");
    printf("\n\n\n\n");
    printf("\t\t\t\tQualquer tecla para Menu Principal...");
    getch();
								break;
			default:
				system("cls");
				printf("\n\n");
				printf("\t\t\t\tOpcao invalida...");
				getch();
				
		}
	}while(op!=5);
	return 0;
}
