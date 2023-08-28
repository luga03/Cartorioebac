#include <stdio.h>  // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��es por texto de regi�o
#include <string.h> //Biblioteca respons�vel por cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	
	FILE *file; //Cria o arquivo
	file = fopen(arquivo, "w"); //Cria o arquivo
	fprintf(file, cpf); //Salvando o valor da vari�vel
	fclose(file); //Fechando o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");  //Definindo a l�nguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu a op��o deletar nomes!\n");
	system("pause");
}
int main()
{
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		setlocale(LC_ALL, "Portuguese");  //Definindo a l�nguagem
		
		system("cls");
		                 
        printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
	    printf("Escolha a op��o desejada do menu\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n");
	    printf("\t4 - Sair do sistema\n\n");
	    printf("Esse Softare � de livre uso dos alunos\n");
	
	    scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	    
	    system("cls"); //Respons�vel por limpar a tela
	
	    switch(opcao) //In�cio da sele��o do menu 
	    {
	    	case 1:
	        registro(); //Chamada de fun��es
	    	break;
	    	
	    	case 2:
	        consultar();
	    	break;
	    	
	    	case 3:
	        deletar();
	    	break;
	    	
	    	case 4: 
	    	printf("Obrigado por utilizar o sistema!\n");
	    	return 0;
	    	break;
	    	
	    	default:
	    	printf("Essa opc�o n�o est� dispon�vel!\n");
	    	system("pause");
	    	break;	
		} //Fim da sele��o
	}

}
