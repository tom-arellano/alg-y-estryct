#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/* *por ahora esta pensado para leer un .txt con un solo alcano para 
entregar el avance pero la idea es cambiarlo para la entrega final
por lo que tampoco es "funcional" por asi  decirlo ya que no esta terminado*/
struct AlcanoNombre{ //esto seria lo que entrega al final
	char NombreAl[30];
	char ApellidoAl[30];
	int NumAl;
};
//nota: quiza sea mejor que lea el txt por caracter y ponerlos en una lista? estos es por problemas con los tipos de data
int identificar(){
	//char*p;
	char AlcanoCrudo[30];
	char direccionAl[15];
	printf("inserte la direccion del arcano: \n ");
	scanf(" %s ", direccionAl);
	FILE * Txt = fopen(direccionAl,"r");
	fgets(AlcanoCrudo,30,Txt);
	if (Txt == NULL){
		printf("imposible leer el archivo especificado, porfavor revisar el nombre de su archivo \n" );
	return 1;}
	fclose(Txt);
	int TamanhoAl = strlen(AlcanoCrudo);
	//printf("%d", TamanhoAl);
	char nombre[10];
	char apellido[20];
	char LP[20]="_";
	char IP[10]="_";//TECNICAMENTE 	deberia ser LI y LS pero me equivoque, sera cambaido despues
	char SP[10]="_";
	char Add[1];
	int i;
	int Marker;//ver si se puede hacer una variable que crea otras variables
	while(i != strlen(AlcanoCrudo) ){
		/*la idea es que cuando lea un - o un + busque le nuemro entre los # correspondiente y 
		lo añada a la fila correspondiente con el signo(IP=- SP=+*/
		if (((AlcanoCrudo[i] == '2') || (AlcanoCrudo[i] == '3') ) && ( i <= 1) ){
			//add = alcanocrudo[i];
			//strcat(LP,AlcanoCrudo[i] );// ARREGLAR, strcat(LP, alguna forma de sacra el elemento de AlcanoCrudo)
			i = i++;
		}
		else if (((AlcanoCrudo[i] == '2') || (AlcanoCrudo[i] == '3')) && (AlcanoCrudo[i-1] != '#') && (AlcanoCrudo[i+1] != '#')){
			//añadir el nuemro a LP
			i = i++;
		}
		else if ((AlcanoCrudo[i] = '+') && (Alcanocrudo[i+1] == '#') && (Alcanocrudo[i+3] == '#')){
		
			//SP = SP + AlcanoCrudo[i+2]+ ',';

			i = i++;
		}
		else if ((AlcanoCrudo[i] = '+') && (Alcanocrudo[i+1] == '#') && (Alcanocrudo[i+4] == '#')){
		
			//SP = SP + AlcanoCrudo[i+2]+ AlcanoCrudo[i+3]+ ",";
			i = i++;
		}
		else if ((AlcanoCrudo[i] = '-') && (Alcanocrudo[i+1] == '#') && (Alcanocrudo[i+3] == '#')){
		
			//IP = IP + AlcanoCrudo[i+2]+ ',';
			i = i++;
		}
		else if ((AlcanoCrudo[i] = '-') && (Alcanocrudo[i+1] == '#') && (Alcanocrudo[i+4] == '#')){
		
			//IP = IP + AlcanoCrudo[i+2]+ AlcanoCrudo[i+3]+ ',';
			i = i++;
		}
		else if((AlcanoCrudo[i] = '+') && (AlcanoCrudo[i+1] = '-') && (Alcanocrudo[i+2] == '#') && (Alcanocrudo[i+4] == '#') && (Alcanocrudo[i+5] == '#') && (Alcanocrudo[i+7] == '#')){
			
		}
		else if((AlcanoCrudo[i] = '+') && (AlcanoCrudo[i+1] = '-') && (Alcanocrudo[i+2] == '#') && (Alcanocrudo[i+5] == '#') && (Alcanocrudo[i+6] == '#') && (Alcanocrudo[i+9] == '#')){
			
		}
		else if((AlcanoCrudo[i] = '+') && (AlcanoCrudo[i+1] = '-') && (Alcanocrudo[i+2] == '#') && (Alcanocrudo[i+5] == '#') && (Alcanocrudo[i+6] == '#') && (Alcanocrudo[i+8] == '#')){
			
		}
		else if((AlcanoCrudo[i] = '+') && (AlcanoCrudo[i+1] = '-') && (Alcanocrudo[i+2] == '#') && (Alcanocrudo[i+4] == '#') && (Alcanocrudo[i+5] == '#') && (Alcanocrudo[i+8] == '#')){
			
		}
		
 /* la idea ahora es que agarre los distintos strings de LP IP y SP y lo valla metiendo en las distintas listas
 y de estas va a leerlas y darles los nombres al alcano los cuales no los he puesto(más alla de lo vasico de la struct) ya que no se si es mejor tenerlos 
 en una lista distinta para despues juntarlos o tenerlos ya predeterminados*/		
	};
}
typedef struct nodo{
	char *nombre;
	struct nodo *sig;
	
}Particula;
Particula *AlcanoLP(Particula *AlcanoP){
	AlcanoLP = NULL;
	return Alcano;
}
Particula *AlcanoLI(Particula *AlcanoI){
	AlcanoLI = NULL;
	return Alcano;
}
Particula *AlcanoLS(Particula *AlcanoS){
	AlcanoLS = NULL;
	return Alcano;
}
//ver como podemos separar los nodos
Particula *AddPart(Particula *AlcanoP, char *HidrocarburosP){
	Particula *numhidro, *pasar;
	numhidro = (Particula*)malloc(sizeof(Particula));
	numhidro->nombre = Hidrocarburos;
	numhidro->sig =NULL;
	if (AlcanoLP == NULL){
		lista=numhidro;
	}
	else{
		pasar = AlcanoP;
		while(pasar->sig != NULL){
			pasar = pasar->sig;
			
		}
		pasar->sig =numhidro;
	}
}




int LP(){
	Particula *AlcanoP = AlcanoLP(AlcanoP);
	
	return 0;
}
int LI(){
	Particula *AlcanoI = AlcanoLI(AlcanoI);
	return 0;
}
int LS(){
	Particula *AlcanoS = AlcanoLS(AlcanoS);
	return 0;
}
