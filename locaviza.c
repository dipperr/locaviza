#include <stdio.h>

struct def_carro
{
	char modelo[100];
	int ano;
	char motor[100];
	int portas;
	char combustivel[15];

};

int main()
{
	int exec = 0, indic;
	char loop_cad = 's';
	struct def_carro carro[10];
	

	while(exec != 5)
	{
		printf("-----locaviza-----");
		printf("\n1-consultar carro");
		printf("\n2-cadastrar carro");
		printf("\n3-consultar cliente");
		printf("\n4-cadastrar cliente");
		printf("\n5-sair");
		printf("\n>");
		scanf("%d", &exec);
		getchar();
		if (exec == 1)
		{
			indic = 0;

			printf("\nmodelo do carro: %s", carro[indic].modelo);
			printf("\nano do carro: %d", carro[indic].ano);
			printf("\nmotor do carro: %s", carro[indic].motor);
			printf("\nquantidade de portas: %d", carro[indic].portas);
			printf("\ncombustivel do carro: %s", carro[indic].combustivel);
			printf("\n\n");
		}
		else
		{
			if (exec == 2)
			{
				indic = 0;
				
				while (loop_cad == 's')
				{
					printf("modelo do carro: ");
					scanf("%[^\n]s", carro[indic].modelo);
					getchar();
					printf("ano do carro: ");
					scanf("%d", &carro[indic].ano);
					getchar();
					printf("motor do carro: ");
					scanf("%[^\n]s", carro[indic].motor);
		 			getchar();
					printf("quantidade de portas: ");
					scanf("%d", &carro[indic].portas);
					getchar();
					printf("combustivel do carro: ");
					scanf("%[^\n]s", carro[indic].combustivel);
					getchar();
					printf("cadastrando carro...\n");
					printf("cadastrar outro carro?[s/n] ");
					scanf("%s", &loop_cad);
					getchar();
					if(loop_cad == 's')
					{
						indic++;
					}
					else
					{
						printf("\n\n");
					}
				}	
			}
			else
			{
				if (exec == 3)
				{
					printf("\nconsultando cliente...\n\n");
				}
				else
				{
					if(exec == 4)
					{
						printf("\ncadastrando cliente...\n\n");
					}
					else
					{
						printf("saindo...\n\n");
					}
				}
			}
		}
	}
	return(0);
}
