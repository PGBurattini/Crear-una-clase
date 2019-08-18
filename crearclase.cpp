//CLASES Y OBJETOS
//COMPROBACION DE ACCESIBILIDAD

#include <stdio.h>


class ALFA {
		private : 
			int APRI;
			void DOBLAR()
				{
					APRI = 2 * APRI;
				}
		public :
			int BPUB;
			void CARGAR (int);
			void MIRAR ();
			};
			
void ALFA::CARGAR( int W ) //INDICO QUE LA FUNC CARGAR PERTENECE A LA CLASE ALFA
{
	APRI = W;
	DOBLAR();
	
}

void ALFA::MIRAR()
{
	printf("\n\n	APRI = %d" , APRI);
	printf("\n\n	BPUB = %d" , BPUB);	
}


int main()
{
	ALFA X; //objeto (ver como variable)
	
	//X.APRI = 25; -> ERROR: ALFA::APRI ES PRIVADA
	X.BPUB = 30; // ME DEJA PORQUE ES PUBLICA
	
	//X.DOBLAR(); -> ERROR: ALFA::DOBLAR() ES PRIVADA
	
	printf("\n\n X.BPUB = %d", X.BPUB);
	
	//CARGAR NO EXISTE. X.CARGAR SI
	
	X.CARGAR(45);
	X.MIRAR();
	
	printf("\n\n");
	return 0;
}
