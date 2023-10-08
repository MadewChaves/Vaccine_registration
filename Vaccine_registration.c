#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
  
void menuDeSelacao(){
  	struct vacinas  {
    int codigo;
    char nome[500];
    char cpf[100];
    char vacina[100];
    char data[100]; 
	int numerolote;  
};
	int choice = 0;
	int i = 0;
	while (choice != 4){
		printf("Este programa tem o objetivo de cadastrar usuários vacinados, listar os já cadastrados e consultar CPFS : \n");
		printf(" 1 - Cadastrar vacina \n 2 - Listar aplicações \n 3 - Consultar por CPF \n 4 - Sair.\n");
		printf("Digite a opção desejada: \n");
		scanf("%d",&choice);
		switch(choice){
			
		case 1: {
			
            struct vacinas lista_vacina[2];
           
            for (i = 0; i < 2; i++){
              
              printf("Digite o seu nome: \n");
              fflush(stdin);
              gets(lista_vacina[i].nome);
    
              printf("Digite seu CPF: \n");
              fflush(stdin);
              gets(lista_vacina[i].cpf);
    
              printf("Digite o nome da sua vacina: \n");
              fflush(stdin);
              gets(lista_vacina[i].vacina);
    
              printf("Digite a data de vacinação: \n");
              fflush(stdin);
              gets(lista_vacina[i].data);
     
              printf("Digite o número do lote: \n");
              fflush(stdin);
              scanf("%d",&lista_vacina[i].numerolote);
              
              printf("\n============================================================\n");
		   }
		    system("cls");
		    break;
		}
		
		case 2 : {
			
		    struct vacinas lista_vacina[2];
		    
			for (i = 0; i < 2; i++){
			  	
  	          lista_vacina[i].codigo = (i+1);
  	          printf("Código do usuário: %d\n",lista_vacina[i].codigo);
  	         
  	
  	          printf("Nome do usuário: %s\n",lista_vacina[i].nome);
           	 
  	
              printf("O CPF do usuário é: %s\n",lista_vacina[i].cpf);
              
    
              printf("O nome da vacina é: %s\n",lista_vacina[i].vacina);
          
    
              printf("A data de vacinação foi em: %s\n",lista_vacina[i].data);
              
    
              printf("O lota da vacina ministrada é: %d\n",lista_vacina[i].numerolote);
              
              printf("\n============================================================\n");
             
              }
              break;
	    }
	    
	    case 3 : {
	    	
	    	char novocpf[100];
	    	struct vacinas lista_vacina[2];
	    	
	    	for (i = 0; i < 2; i++){
	    		
	    	  printf("Digite um CPF para averiguar se ele está cadastrado: \n");
	    	  fflush(stdin);
	          scanf("%s",&novocpf);
	
	    	  if (strcmp(lista_vacina[i].cpf,novocpf)==0){
	    		printf("Cpf encontrando: %s.\n",lista_vacina[i].cpf);
	    		
			  }else{
				printf("Cpf não encontrado na base de dados.\n");
		     }
		   }
		 break;
		 }
     }
    
   } 
}


int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
 menuDeSelacao();
  
	return 0;
}
