#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>	float catetoA,catetoB,hipotenusa;
	

using namespace std;

int main (int argc, char** argv){
	int opciones;

	cout<<"______________Operaciones disponibles_________________________"<<endl;
	
	cout<<" #1 Suma, Resta, Multiplicación y División de dos números "<<endl;
	cout<<" #2 Determinar si un número es par o impar"<<endl;
	cout<<" #3 Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<" #4 Determinar si una palabra o un número es palíndromo."<<endl;
	cout<<" #5 Conversión de números arábigos a romanos (mínimo 1,000)"<<endl;
	cout<<" #6 Conversión de números enteros a letras"<<endl;
	cout<<" #7 Conversión de números enteros con decimal a letras"<<endl;
	cout<<" #8 Una tabla de multiplicar"<<endl;
	cout<<" #9 Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<" #10 Conversión de números decimales a binario"<<endl;
	cout<<" #11 Conversión de números decimales a hexadecimales"<<endl;
	cout<<" #12 Simular un Cajero Automático (Autómata)"<<endl;
	cout<<" #13 Calcular la hipotenusa"<<endl;
	cout<<" Que opcion desea realizar ";
	cin>>opciones;


	
	switch(opciones){
		case 1: 	{
					int dato1, dato2 , res , opc;

					cout<<"______________Operaciones disponibles_________________________"<<endl;
	
					cout<<" #1 sumar"<<endl;
					cout<<" #2 restar"<<endl;
					cout<<" #3 multiplicar"<<endl;
					cout<<" #4 dividir"<<endl;
					cout<<" Que opcion desea realizar ";
					cin>>opc;

					cout<<"______________Ingrese sus valores________________________________"<<endl;
	 
					cout<<"Ingrese el primer dato 1: ";
					cin>>dato1;
					cout<<"Ingrese el segundo dato 2: ";
					cin>>dato2;
	
					switch(opc){
					case 1: res=dato1+dato2;
					break;
					case 2: res=dato1-dato2;
					break;
					case 3: res=dato1*dato2;
					break;
					case 4: res=dato1/dato2;
					break;
					defatult:
					break;
					}
					
	
					cout<<"_________________________Resultado__________________________"<<endl;
					cout<<" El resultado es : "<<res<<endl;
					break;
					}
					
		case 2:		{
					int num=0;
					cout<<"Ingrese Numero: ";
					cin>>num;
	
					if((num%2)==0){
					cout<<"Par"<<endl;	
					}else{
					cout<<"Impar"<<endl;
					}
			
					system ("pause");
					break;
					}
		case 3:		{
					int op; 
					double kilometros,millas,metros,pulgadas,libras,kilos,res;

					cout<<"______________Operaciones disponibles_________________________"<<endl;
	
					cout<<" #1 Kilometros a Millas"<<endl;
					cout<<" #2 Millas a Kilometros"<<endl;
					cout<<" #3 Metros a Pulgadas"<<endl;
					cout<<" #4 Pulgadas a Metros"<<endl;
					cout<<" #5 Libras a Kilos"<<endl;
					cout<<" #6 Kilos a Libras"<<endl;
	
					cout<<" Que opcion desea realizar ";
					cin>>op;

					switch(op){
					case 1: 
					cout<<" ------Kilometros a Millas------ "<<endl;
					cout<<" Ingrese la cantidad en Kilometros: "<<endl;
					cin>>kilometros;
					millas = kilometros*0.621;
					cout<<"Total Millas: "<<millas<<endl;
						
					break;
					case 2: 
					cout<<" ------Millas a Kilometros------ "<<endl;
					cout<<" Ingrese la cantidad en Millas: "<<endl;
					cin>>millas;
					kilometros = millas*1.60934;
					cout<<"Total Kilometros: "<<kilometros<<endl;
					break;
					case 3:
					cout<<" ------Metros a Pulgadas------ "<<endl;
					cout<<" Ingrese la cantidad en Metros: "<<endl;
					cin>>metros;
					pulgadas = metros*39.3701;
					cout<<"Total Pulgadas: "<<pulgadas<<endl; 
					break;
					case 4: 
					cout<<" ------Pulgadas a Metros------ "<<endl;
					cout<<" Ingrese la cantidad en Pulgadas: "<<endl;
					cin>>pulgadas;
					metros = pulgadas*0.0254;
					cout<<"Total Metros: "<<metros<<endl;
					break;
					case 5: 
					cout<<" ------Libras a Kilos------ "<<endl;
					cout<<" Ingrese la cantidad en Libras: "<<endl;
					cin>>libras;
					kilos = libras*0.453592;
					cout<<"Total Kilos: "<<kilos<<endl;
					break;
					case 6:
					cout<<" ------Kilos a Libras------ "<<endl;
					cout<<" Ingrese la cantidad en Kilos: "<<endl;
					cin>>kilos;
					libras = kilos*2.20462;
					cout<<"Total Libras: "<<libras<<endl; 
					break;
					
					break;
					}
	
	
					system ("pause");
	
					return 0;
	
					
					}
		case 4:		{
					string palabra;
					string palindromo;
					int i = 0;
					cout<< " Ingrese la palabra a verificar: ";
					cin>>palabra;
	
					for (i = palabra.size() -1 ; i >=0 ; i--) {
					cout<<palabra[i]<<endl;
					palindromo += palabra[i];
					}
	
					cout<<palindromo<<endl;
	  
	
					if(palabra == palindromo){
					cout << " La palabra o numero es palindromo "<<endl;
					}else{
					cout <<" La palabra o numero no es palindromo "<<endl;
					}
		
	
	
	
					system ("pause");
					break;
					}		
		
		case 5:		{
					int num,unidades,decenas,centenas,millares;
					cout<<" Ingrese el numero Arabigo: ";
					cin>>num;
					
					unidades = num%10; num /=10; 
					decenas = num%10; num /=10;
					centenas = num%10; num/=10;
					millares = num%10; num/=10;
					
					cout<< "---El numero Romano es: ---"<<endl;
					
					switch(millares){
						case 1: cout<<"M";
						break;
					}
					switch(centenas){
						case 1: cout<<" C";
						break;
						case 2: cout<<"CC";
						break;
						case 3: cout<<"CCC";
						break;
						case 4: cout<<"CD";
						break;
						case 5: cout<<"D";
						break;
						case 6: cout<<"DC";
						break;
						case 7: cout<<"DCC";
						break;
						case 8: cout<<"DCCC";
						break;
						case 9: cout<<"CM";
						break;
					}
					switch(decenas){
						case 1: cout<<"X";
						break;
						case 2: cout<<"XX";
						break;
						case 3: cout<<"XXX";
						break;
						case 4: cout<<"XL";
						break;
						case 5: cout<<"L";
						break;
						case 6: cout<<"LX";
						break;
						case 7: cout<<"LXX";
						break;
						case 8: cout<<"LXX";
						break;
						case 9: cout<<"XC";
						break;
					}	
					switch(unidades){
						case 1: cout<<"I";
						break;
						case 2: cout<<"II";
						break;
						case 3: cout<<"III";
						break;
						case 4: cout<<"IV";
						break;
						case 5: cout<<"V";
						break;
						case 6: cout<<"VI";
						break;
						case 7: cout<<"VII";
						break;
						case 8: cout<<"VIII";
						break;
						case 9: cout<<"IX";
						break;
					}
					
					return 0;
									break;
									}	
		case 6:		{
					setlocale (LC_CTYPE, "Spanish");
					int num,unidades,decenas,centenas,millares,decimales;
					cout<<" Ingrese la cantidad: ";
					cin>>num;
					
					if (num>=1 && num <=9999){
					unidades = num%10; num=num /10; 
					decenas = num%10; num=num /10;
					centenas = num%10; num=num/10;
					millares = num%10;
					
					cout<< "---La cantidad en letras es: ---"<<endl;
					
					switch(millares){
						case 0 : cout<<"";
						break;
						case 1 : cout<<"mil ";
						break;
						case 2 : cout<<"dos mil ";
						break;
						case 3 : cout<<"tres mil ";
						break;
						case 4 : cout<<"cuatro mil ";
						break;
						case 5 : cout<<"cinco mil ";
						break;
						case 6 : cout<<"seis mil ";
						break;
						case 7 : cout<<"siete mil ";
						break;
						case 8 : cout<<"ocho mil ";
						break;
						case 9 : cout<<"nueve mil ";
						break;
					}
					switch(centenas){
						case 0 : cout<<"";
						break;
						case 1 : if (decenas ==0 && centenas ==0) {
							cout<<"cien ";
						}else{
							cout<<"ciento";
						}
						break;
						case 2 : cout<<"doscientos ";
						break;
						case 3 : cout<<"trescientos ";
						break;
						case 4 : cout<<"cuatrocientos ";
						break;
						case 5 : cout<<"quinientos ";
						break;
						case 6 : cout<<"seiscientos";
						break;
						case 7 : cout<<"setecientos ";
						break;
						case 8 : cout<<"ochocientos ";
						break;
						case 9 : cout<<"nuevecientos ";
						break;
						
					
					}
					switch(decenas){
						case 1 : switch (unidades){
							case 0 : cout<<"diez ";
							break;
							case 1 : cout<<"once ";
							break;
							case 2 : cout<<"doce ";
							break;
							case 3 : cout<<"trece ";
							break;
							case 4 : cout<<"catorce ";
							break;
							case 5 : cout<<"quince ";
							break;
							case 6 : cout<<"diecises ";
							break;
							case 7 : cout<<"diecisiete ";
							break;
							case 8 : cout<<"dieciocho ";
							break;
							case 9 : cout<<"diecinueve ";
							break;
						}
						break;
						case 2:  switch (unidades){
							case 0 : cout<<"veinte ";
							break;
							case 1 : cout<<"veintiuno ";
							break;
							case 2 : cout<<"veintidos";
							break;
							case 3 : cout<<"veintitres ";
							break;
							case 4 : cout<<"veinticuatro";
							break;
							case 5 : cout<<"veinticinco ";
							break;
							case 6 : cout<<"veintiseis ";
							break;
							case 7 : cout<<"veintisiese ";
							break;
							case 8 : cout<<"veintiocho";
							break;
							case 9 : cout<<"veintinueve ";
							break;
						}
						break;
						case 3:  if (unidades ==0) {
							cout<<"treinta ";
							}else{
							cout<<"treinta y ";
							}
							break;
						case 4 :  if (unidades ==0) {
							cout<<"cuarenta ";
							}else{
							cout<<"cuarenta y ";
							}
							break;	
						case 5 :  if (unidades ==0) {
							cout<<"cincuenta ";
							}else{
							cout<<"cincuenta y ";
							}
							break;
						case 6 :  if (unidades ==0) {
							cout<<"sesenta ";
							}else{
							cout<<"sesenta y ";
							}
							break;		
						case 7 :  if (unidades ==0) {
							cout<<"setenta ";
							}else{
							cout<<"setenta y ";
							}
							break;		
						case 8 :  if (unidades ==0) {
							cout<<"ochenta ";
							}else{
							cout<<"ochenta y ";
							}
							break;		
						case 9 :  if (unidades ==0) {
							cout<<"noventa ";
							}else{
							cout<<"noventa y ";
							}
							break;	
					
					}	
					switch(unidades){
						case 1 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"uno";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"uno";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"uno";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"uno";
								}else{
								cout<<"";
								}
								break;
						case 2 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"dos";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"dos";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"dos";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"dos";
								}else{
								cout<<"";
								}
								break;
						case 3 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"tres";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"tres";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"tres";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"tres";
								}else{
								cout<<"";
								}
								break;					
						case 4 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"cuatro";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"cuatro";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"cuatro";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"cinco";
								}else{
								cout<<"";
								}
								break;		
						case 5 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"cinco";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"cinco";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"cinco";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"cinco";
								}else{
								cout<<"";
								}
								break;	
						case 6 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"seis";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"seis";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"seis";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"seis";
								}else{
								cout<<"";
								}
								break;
						case 7 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"siete";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"siete";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"siete";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"siete";
								}else{
								cout<<"";
								}
								break;						
						case 8 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"ocho";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"ocho";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"ocho";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"ocho";
								}else{
								cout<<"";
								}
								break;	
						case 9 : if (millares == 0 && centenas == 0 && decenas ==0){
								cout<<"nueve";
								}else if (millares==0 && centenas == 0 && decenas >=3){
								cout<<"nueve";
								}else if (millares==0 && centenas >= 1 && decenas >=3 || decenas ==0){
								cout<<"nueve";
								}else if (millares>=1 && centenas >= 0 && decenas >=3 || decenas ==0){
								cout<<"nueve";
								}else{
								cout<<"";
								}
								break;				
					}	
					}else{
						cout<<" El numero ingresado no esta en el rango disponible ingrese un numero del 1 al 9999";
					}
					
					cout<<"\n";
					
					
					return 0;
							break;
						}
		case 7:		{
					double valor;
					 int miles,cientos,unidades,decimales;

					 char numeros[100][20] = 
					 {
					  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
					  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
					  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
					  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
					  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
					  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
					  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
					  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
					  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
					  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
					 };
					
					 char centenas[10][20] = 
					 {
					  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
					 };
					 
					 std::cout << "Introduzca numero a transcribir: ";
					 std::cin >> valor;
					
					 miles = ((int)valor)/1000;
					 cientos = (((int)valor)%1000)/100;
					 unidades = ((int)valor)%100;
					 decimales = ((int) (valor*100.0))%100 ;
					
					 if (miles)
					  std::cout << numeros[miles] << " mil ";
					 
					 if (cientos)
					  std::cout << centenas[cientos] << " ";
					 
					 if (unidades) 
					  std::cout << numeros[unidades];
					 
					 if (decimales)
					 {
					  if(miles || cientos || unidades)
					  {
					   std::cout << " con ";
					  }
					 
					  std::cout << numeros[decimales] << " centavos.";
					 }
					
					 std::cout << std::endl;
					
					
					 system("pause");
					 return 0;
								break;
							}	
		case 8:		{
					int tabla = 0, res= 0;
					cout <<"Ingrese tabla: ";
					cin>>tabla;
	
					for(int i=1;i<=10;i++){
					res=tabla * i;
					cout<<tabla<<" X "<<  i << "  = "<<res<<endl;

					}
		
					system("pause");
					break;
					}
		case 9:		{
					int inicial = 0, fin = 0 , res= 0;
					cout <<"Ingrese tabla inicial: ";
					cin>>inicial;
					cout <<"Ingrese tabla final: ";
					cin>>fin;
	
					for(int rango=inicial;rango<=fin;rango++){
					cout<<"tabla del "<<rango<<endl;
			 		for(int  i=1;i<=10;i++){
					res=rango * i;
					cout<<rango<<" X "<<  i << "  = "<<res<<endl;
					}	
	
					}
	
					system("pause");
					break;
					}
		case 10:	{
					int decimal;
					short binario[15];
	
					cout<<"Ingrese un numero decimal: "<<endl;
					cin>>decimal;
	
					for (int i = 0 ; i < 15; i++){
					binario[i] = decimal % 2;
					decimal /= 2;
					}
	
					cout<<" El numero binario es: "<<endl;
	
					for (int i = 15; i>=0 ; i--){
					cout<<binario[i];
					}
	
					cout<<endl;
					system ("pause");
					break;
					}
		case 11:	{
					int digitoex[20];
					int decimal, residuo, resultado, i = 0;
					
					cout<<" Ingresar numero decimal: "<<endl;
					cin>>decimal;
					
					do{
						residuo = decimal % 16;
						resultado = decimal / 16;
						digitoex[i] = residuo;
						decimal = resultado;
						i++;
					}while (resultado > 15);
					
					
					digitoex[i ]= resultado;
					cout<<" El equivalente en hexadecimal es: "<<endl;
					
					for (int j=i;j>=0;j--){
						if(digitoex[j] == 10){
							cout<<"A";
						}else if (digitoex[j] == 11){
							cout<<"B";
						}else if (digitoex[j] == 12){
							cout<<"C";
						}else if (digitoex[j] == 13){
							cout<<"D";
						}else if (digitoex[j] == 14){
							cout<<"E";
						}else if (digitoex[j] == 15){
							cout<<"F";
						}else{
							cout<<digitoex[j];
						}
					}
					
					cout<<endl;
					
					system("pause");
							break;
						}
		case 12:	{
					 const string claveCorrecta = "1234";
				    cout << "Bienvenido al cajero automático\n";
				    cout << "Ingrese la clave: ";
				    string clave = "";
				    cin >> clave;
				    if (clave != claveCorrecta)
				    {
				        cout << "Clave incorrecta";
				        return 0;
				    }
				   
				    cout << "Clave correcta\nBienvenido\n";
				    double fondos = 5000;
				
				    string eleccion = "";
				    
				    while (eleccion != "2")
				    {
				        
				        cout << "Fondos disponibles: " << fondos << endl;
				      
				        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
				        cin >> eleccion;
				        if (eleccion == "1")
				        {
				            
				            double retiro;
				            cout << "Ingrese cantidad a retirar: " << endl;
				            cin >> retiro;
				         
				            if (retiro > fondos || retiro <= 0)
				            {
				                cout << "No puede retirar esa cantidad";
				            }
				            else
				            {
				               
				                cout << "OK. Ha retirado " << retiro << endl;
				               
				                fondos = fondos - retiro;
				               
				            }
				        }
				    }
				    return 0;
							break;
						}
		case 13:	{
					float catetoA,catetoB,hipotenusa;
	
					cout<<"Ingrese el cateto A: ";
					cin>>catetoA;
					cout<<"Ingrese el cateto B: ";
					cin>>catetoB;
	
					hipotenusa = pow(catetoA,2)+pow(catetoB,2);
					hipotenusa = sqrt(hipotenusa);
	
					cout<<" El valor de la hipotenusa es: "<<hipotenusa<<endl;
	
	
	
	
					system("pause");
					break;
					}	
	}//termina el menu
									
									
									
	system ("pause");
									
	return 0;
						
	
	

}
