#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //biblioteca respons�vel por cuidar das strings


int registro() // fun��o respons�vel por cadastrar os usu�rios no sisitema
{
	
	//inicio da cria��o de variaveis // string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
 		//final da cria��o de variaveis // string
 	
 	
 	
   printf("digite o cpf a ser cadastrado: "); //coletando informa��o do usu�rio 
   scanf("%s", cpf); //%s refere-se a strings
   
   strcpy(arquivo, cpf); //respos�vel por copiar valores das strings
   
   FILE *file; //cria o arquivo 
   file =fopen(arquivo,"w"); //cria arquivo e o "w' siginifica escrever
   fprintf(file,cpf); //salva o valor da variavel
   fclose(file); //fecha o arquivo
    
    file =fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
   printf("digite o nome a ser cadastrado: ");
   scanf("%s", nome);
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
      file =fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
   printf("digite o sobrenome a ser  cadastrado: ");
   scanf("%s" , sobrenome);
   
   file = fopen(arquivo,"a");
   fprintf(file, sobrenome );
   fclose(file);
   
   
   
     file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
   
   printf("digite o cargo a ser cadastrado: ");
   scanf("%s", cargo );
   
   file = fopen(arquivo,"a");
   fprintf(file, cargo);
   fclose(file);
   system("pause");
   
   
 
 
}

int consultar()
{
	setlocale(LC_ALL, "portuguese"); //definindo as linguagens
   char cpf[40];
   char conteudo[200];
   printf("digite o cpf a ser consultado: ");
   scanf("%s", cpf );
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	
   	printf("n�o foi possivel abrir o arquivo, n�o localizado!. \n ");
   }
   
   
   while(fgets(conteudo,200, file) != NULL)
{
	
printf("\nessas s�o as informac�es do usu�rio: ");
printf("%s", conteudo);
printf("\n\n");

}

system("pause");

}

int deletar()

{
		
	char cpf[40];
	printf("digite o cpf  do usu�rio ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	
	FILE *file;
	
	file = fopen(cpf, "r");
	if(file == NULL	)
	
	
	printf("o usu�rio n�o se encontra no sistema! . \n\n  ");
	
	system("pause");
	
	
	
	
	{
		
		
		
		
	}
	
 
 	
 }
	   
	   	   
	   


int main()
    {
    
	int opcao=0; //definindo as variave
	int laco=1;
	for(laco=1; laco=1;)   
	
	{
		
	system("cls"); //responsavel por limpar a tela
	
	
   	setlocale(LC_ALL, "portuguese"); //definindo as linguagens
   	printf("### cart�rio de dados da EBAC ###\n\n"); //inicio do menu 
   	printf("escolha a op��o desejada no menu:\n\n");
   	printf("\t1- registrar nomes\n");
	printf("\t2- consultar nomes\n");
	printf("\t3- deletar nomes\n"); 
  
   printf("op��o: "); //fim do menu
    
    
	scanf("%d", &opcao ); //armazenando a escolha do usu�rio 
	
	system("cls");
	
	switch(opcao) //inicio da sele��o do menu
{
	
	case 1: //chamadas de fun��es
	registro();
	break;	
	
		
	case 2:
	consultar();
	break;
	

	case 3:
	deletar();
	break;
		
	
	
    default:	
    	printf("essa opcao nao esta disponivel!\n");
	system("pause");
	break;
		
		
	
		
		}
	
}

}
		

	
	
	
	

	





	
	

	
	

