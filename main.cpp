#include <iostream>
#include <string>
using namespace std;
#include "Dinosaurio.h"
#include "aereos.h"
#include "Carnivoros.h"
#include "Cuidador.h"
#include "herbivoros.h"
#include "Marinos.h"
#include "omnivoros.h"
#include "oviraptor.h"
#include "Spinosauro.h"
#include "triceratops.h"
#include "Tyranosaurio.h"
#include <vector>

vector <Dinosaurio*> Vdino;
Dinosaurio* dino;
Cuidador* cuida;

vector<Dinosaurio> vr;

int main()
{
	int opcion;
	//Dinosaurio* dino = NULL;
	do
	{
		cout << "\nMENU\n"
			<< "1) Agregar Especies\n"
			<< "2) Modificar Especies\n"
			<< "3) Eliminar Especies\n"
			<< "4) Visualizar Reporte Especie\n"
			<< "5) Visualizar Reporte Dinosaurio\n"
			<< "6) Agregar Cuidarores\n"
			<< "7) Eliminar Cuidador\n"
			<< "0) Salir\n"
			<< "Seleccione una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
			case 1:

				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				
				break;

			case 5:
				
				break;

			case 6:
				
				break;

			case 7:
				
				break;

			case 0:
				
				break;

			default:
				cout << "Opcion no valida!" << endl;
				break;
		}
	}
	while (opcion != 0);
	return 0;
}



int validarCin(string mensaje)
{
	int resultado = 0;
	bool salir = false;
	do
	{
		cout << mensaje;
		if (!(cin >> resultado))
		{
			cout << "Por favor no ingrese caracteres!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			salir = true;
		}
	}
	while(!salir);
	return resultado;
}

void agregarEspecies()
{
    char resp;
    cout<<"1.Agregar Carnivoros\n2.Agregar Herbivoros\n3.Agregar Omnivoros\nAgregar Aereos\nAgregar Marinos";
    cin>>resp;
        //Variables
    switch(resp)
    {
        case '1':
        char carni;
        string organo; 
        string coc; 
		string nombre;
		double altura,peso,longitud;
		string fecha,sexo;
		cout<<"Ingrese el nombre del Dinosaurio"<<endl;
		cin>>nombre;
		cout<<"Ingrese la Altura"<<endl;
		cin>>altura;
		cout<<"Ingrese el peso"<<endl;
		cin>>peso;
		cout<<"Ingrese la fecha de Creacion"<<endl;
		cin>>fecha;
		cout<<"Ingrese el Sexo"<<endl;
		cin>>sexo;
		cout<<"Ingrese la longitud"<<endl;
		cin>>longitud;
        cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
        cin>>organo;
        cout<<"Ingrese si es cazador o carroñero: "<<endl;
        cin>>coc;
        cout<<"Tipo de Dinosaurio Carnivoro->\n1.Tyranosaurio\n2.Spinosaurio";
        cin>>carni;
        break;

        switch(carni){
            int colmillos=0;
            int consumo=0;
            double alturaEspina=0;
            double longitudBrazo=0;

                        case '1':
                        cout<<"Numero de Colminllos: "<<endl;
                        if(colmillos<=60){
                        cout<<"Ingrese un valor mayor a 60"<<endl;
                        }else{
                        cin>>colmillos;
                        }
                        cout<<"Consumo diario de carne: "<<endl;
                        if(consumo<=6877){
                        cout<<"Ingrese un valor mayor a 6877"<<endl;
                        }else{
                        cin>>consumo;
                        }
						//Vdino.push_back(new Tyranosaurio(colmillos,consumo));
                        break;

                        case '2':
                        cout<<"Altura de Espina Neural: "<<endl;
                        if(alturaEspina<=2.5){
                        cout<<"Ingrese un valor mayor a 2.5"<<endl;
                        }else{
                        cin>>alturaEspina;
                        }
                        cout<<"Longitud de Brazos: "<<endl;
                        if(longitudBrazo>=1.5){
                        cout<<"Ingrese un valor menor a 1.5"<<endl;
                        }else{
                        cin>>longitudBrazo;
                        }
						//nombre,altura,peso,fecha,sexo,longitud,organo,coc,alturaEspina,longitudBrazo);
						Vdino.push_back(dino);
                        break;
                    }
        case '2':
        char herbi;
        cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
        cin>>organo;
        cout<<"Ingrese si es cazador o carroñero: "<<endl;
        cin>>coc;
        cout<<
        erbi;
        break;

        switch(herbi){
                int longitud_cuernos=0;
                int longitud_cuerno_nasal=0;
                        case '1':
                        cout<<"Numero de Colminllos: "<<endl;
                        if(colmillos<=60){
                        cout<<"Ingrese un valor mayor a 60"<<endl;
                        }else{
                        cin>>colmillos;
                        }
                        cout<<"Consumo diario de carne: "<<endl;
                        if(consumo<=6877){
                        cout<<"Ingrese un valor mayor a 6877"<<endl;
                        }else{
                        cin>>consumo;
                        }
						Vdino.push_back(new Tyranosaurio(colmillos,consumo));
                        break;
        }

		case '3':
			char omni;
			string organo; 
			string coc; 
			cout<<"Ingrese tipo de organo(dientes-garras): "<<endl;
			cin>>organo;
			cout<<"Ingrese si es cazador o carroñero: "<<endl;
			cin>>coc;
			cout<<"Tipo de Dinosaurio Carnivoro->\n1.Tyranosaurio\n2.Spinosaurio";
			cin>>carni;
			break;



        
    }
}






































































































































































































































































































































































































































































































































































void eliminarDinosaurio(){
    int opcion;
    int cont=0;
    cout<<"¿Que dinosaurio desea eliminar?, porfavor ingreselo...."<<endl;
    for(int i = 0; i < Vdino.size(); i++)
    {
        cout<<cont<<", "<<Vdino[i]->getNombre()<<endl;
        cont++;
    }
    cin>>opcion;
    if(opcion<0||opcion>Vdino.size()){
        cout<<"Incorrecto, opcion fuera de rango"<<endl;
        cin>>opcion;
    }else{
        Vdino.erase(begin(Vdino)+opcion);
    }
}

void cargarArchivos(){
    ifstream infile("texto.txt");
         char temporalChar;
         string strTemporal="";
         int cont=0;
         Dinosaurio* temPtrDinosaurio;
         
        void setNombre(string);
    void setAltura(int);
    void setPeso(double);
    void setFecha(string);
    void setSexo(string);
    void setLongitud(double);

         do {
            do {
                infile>>temporalChar;
                if (temporalChar!=',' && temporalChar!='/') {
                    strTemporal+=temporalChar;
                }
            } while(temporalChar!=',' && temporalChar!='/');
            //cout<<strTemporal<<endl;
        
            switch(cont){
             case 0:
                temPtrDinosaurio=new Dinosaurio;
                temPtrDinosaurio->setNombre(strTemporal);
                cont++;
             break;
             case 1:
                temPtrDinosaurio->setAltura(atoi(strTemporal.c_str()));
               cont++;
             break;
             case 2:
                temPtrDinosaurio->setFecha(strTemporal.c_str());
                cont++;
             break;
             case 3:
                temPtrDinosaurio->setPeso(atoi(strTemporal.c_str()));
                cont++;
             break;
             case 4:
                temPtrDinosaurio->setLongitud(atoi(strTemporal.c_str()));
                bodegaTemp->setIngredientres(temPtrDinosaurio);
                cont=0;
             break;
            }
            strTemporal="";
         
         } while(temporalChar!='/');
         infile.close();
        
        //Fin cargar
}