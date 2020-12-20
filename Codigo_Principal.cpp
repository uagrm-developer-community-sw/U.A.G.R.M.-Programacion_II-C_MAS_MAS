//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Codigo_Principal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUCFormulario *UCFormulario;
//---------------------------------------------------------------------------
__fastcall TUCFormulario::TUCFormulario(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//                                  EJEMPLOS
//---------------------------------------------------------------------------
//isdigit('caracter') -> verifica si es un digito, resultado 4
void __fastcall TUCFormulario::BtGrpEjemploItems5Click(TObject *Sender)
{//comportamiento procedimiento
	//ShowMessage(isdigit('e')); //obtener el rango del caracter.
	ShowMessage(isdigit('1'));
}
//---------------------------------------------------------------------------
//isalpha('caracter') -> verifica si es un caracter, resultado a 256
void __fastcall TUCFormulario::BtGrpEjemploItems6Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(isalpha('1'));
	//ShowMessage(isalpha('P'));
}
//---------------------------------------------------------------------------
//isalnum('caracter') -> verifica si es un caracter y digito, resultado a 4 y 256
void __fastcall TUCFormulario::BtGrpEjemploItems22Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(isalnum('1'));
	ShowMessage(isalnum('P'));
	ShowMessage(isalnum('@'));
}
//---------------------------------------------------------------------------
//ispunct('caracter') -> verifica si es un simbolo, resultado 16
void __fastcall TUCFormulario::BtGrpEjemploItems23Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(ispunct('1'));
	ShowMessage(ispunct('P'));
	ShowMessage(ispunct('@'));
}
//---------------------------------------------------------------------------
//isspace('caracter') -> verifica si es un espacio, resultado 8
void __fastcall TUCFormulario::BtGrpEjemploItems24Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(isspace('1'));
	ShowMessage(isspace('P'));
	ShowMessage(isspace('@'));
	ShowMessage(isspace(' '));
}
//---------------------------------------------------------------------------
//islower('caracter') -> verifica si es minuscula, resultado 2
void __fastcall TUCFormulario::BtGrpEjemploItems7Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(islower('1'));
	ShowMessage(islower('A'));
	ShowMessage(islower('a'));
}
//---------------------------------------------------------------------------
//isupper('caracter') -> verifica si es mayuscula, resultado 1
void __fastcall TUCFormulario::BtGrpEjemploItems8Click(TObject *Sender)
{//comportamiento procedimiento
	ShowMessage(isupper('1'));
	ShowMessage(isupper('A'));
	ShowMessage(isupper('a'));
}
//---------------------------------------------------------------------------
//tolower('caracter') -> convertir de mayuscula a minuscual
void __fastcall TUCFormulario::BtGrpEjemploItems9Click(TObject *Sender)
{//comportamiento funcion
	char a,b,c;
	a=tolower('1');
	b=tolower('A');
	c=tolower('a');

	ShowMessage(a);
	ShowMessage(b);
	ShowMessage(c);
}
//---------------------------------------------------------------------------
//toupper('caracter') -> convertir de minuscula a mayuscula
void __fastcall TUCFormulario::BtGrpEjemploItems10Click(TObject *Sender)
{//comportamiento funcion
    char a,b,c;
	a=toupper('1');
	b=toupper('A');
	c=toupper('a');

	ShowMessage(a);
	ShowMessage(b);
	ShowMessage(c);
}
//---------------------------------------------------------------------------
//IsEmpty() -> verificar si una cadena esta vacia.
void __fastcall TUCFormulario::BtGrpEjemploItems11Click(TObject *Sender)
{//comportamiento funcion
	String cadena;
	bool verificar;
	//cadena= "hola";
	//cadena = " ";
	//cadena = "1526";
	cadena = "";
	verificar = cadena.IsEmpty();
	ShowMessage(BoolToStr(verificar,True));
}
//---------------------------------------------------------------------------
//Length() -> obtiene la longitud/cantidad de caracteres que tiene una cadena.
void __fastcall TUCFormulario::BtGrpEjemploItems12Click(TObject *Sender)
{//comportamiento procedimiento
	String cadena;
	cadena = "hola";
	//cadena =" ";
	//cadena ="1526";
	//cadena ="";
	ShowMessage(cadena.Length());
}
//---------------------------------------------------------------------------
//TrimLeft() -> elimina los espacios de inicio/izquierda.
void __fastcall TUCFormulario::BtGrpEjemploItems13Click(TObject *Sender)
{//comportamiento funcion
	String cadena, resultado;
	cadena="    hola    hola";
	//cadena=" ";
	//cadena="1526     ";
	//cadena="    hola    ";
	resultado = cadena.TrimLeft();
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//TrimRinght() -> elimina los espacios de final/derecho.
void __fastcall TUCFormulario::BtGrpEjemploItems14Click(TObject *Sender)
{//comportamiento funcion
	String cadena, resultado;
	cadena="hola    hola      ";
	//cadena="     hola";
	//cadena="   1526";
	//cadena="    hola   ";

	resultado = cadena.TrimRight();
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//Trim() -> elimina los espacios de incio y final/izquierdo y derecho.
void __fastcall TUCFormulario::BtGrpEjemploItems15Click(TObject *Sender)
{//comportamiento funcion
	String cadena, resultado;
	cadena="hola   hola   ";
	//cadena="     hola";
	//cadena="   1526";
	//cadena="    hola   ";
	resultado = cadena.Trim();
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//UpperCase() -> convertir de muniscula a mayuscula toda la cadena.
void __fastcall TUCFormulario::BtGrpEjemploItems16Click(TObject *Sender)
{//comportamiento funcion
	String cadena, resultado;
	cadena = "hola   hola  ";
	//cadena="     hola";
	//cadena="   1526";
	//cadena="    hola   ";
	resultado = cadena.UpperCase();
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//lowerCase() -> convertir de mayuscula a muniscula toda la cadena.
void __fastcall TUCFormulario::BtGrpEjemploItems17Click(TObject *Sender)
{//comportamiento funcion
	String cadena, resultado;
	cadena = "HOLA   HOLA  ";
	//cadena="     hola";
	//cadena="   1526";
	//cadena="    hola   ";
	resultado = cadena.LowerCase();
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//Delete(posicion,cantidad) -> elimina caracteres posicion mas cantidad.
void __fastcall TUCFormulario::BtGrpEjemploItems18Click(TObject *Sender)
{//comportamiento procedimiento
	String cadena = "hola bolivia ";
	cadena.Delete(7,3);
	ShowMessage(cadena);
}
//---------------------------------------------------------------------------
//SubString(posicion,cantidad) -> obtener caracteres posicion mas cantidad.
void __fastcall TUCFormulario::BtGrpEjemploItems19Click(TObject *Sender)
{//comportamiento funcion
	String cadena = "hola bolivia ";
	String resultado = cadena.SubString(7,3);
	ShowMessage(resultado);
}
//---------------------------------------------------------------------------
//Pos('caracter') -> obtener posicion del primer caracter en numero entero.
//si no lo encuentra retoran 0
void __fastcall TUCFormulario::BtGrpEjemploItems20Click(TObject *Sender)
{//comportamiento funcion
	String cadena = "hola bolivia ";
	int posicion = cadena.Pos('b');

	ShowMessage(posicion);
}
//---------------------------------------------------------------------------
//LastDelimiter('caracter') -> obtener posicion del ultmo caracter en numero entero.
//si no lo encuentra retoran 0
void __fastcall TUCFormulario::BtGrpEjemploItems28Click(TObject *Sender)
{//comportamiento funcion
	String cadena = "hola bolivia ";
	int posicion = cadena.LastDelimiter('b');

	ShowMessage(posicion);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//INPUTBOX
void __fastcall TUCFormulario::BtGrpEjemploItems0Click(TObject *Sender)
{
int valor_entero;
float valor_real;
String valor_cadena;

//Ejemplo
//InputBox("ENTRADA DE DATOS","Ingrese una expresion","expresion");

//Enteros
//valor_entero = StrToInt(InputBox("ENTRADA DE DATOS", "Ingrese un numero entero",""));

//Cadena
//valor_cadena = InputBox("ENTRADA DE DATOS","Ingrese una cadena","");

//Real
//valor_real = StrToFloat(InputBox("ENTRADA DE DATOS","Ingrese el numero real",""));
}
//---------------------------------------------------------------------------
//                          NUMEROS NATURALES
//---------------------------------------------------------------------------

//PROGRAMA QUE MUESTRA LOS PRIMEROS N NÚMEROS NATURALES
void Mostrar_n_num_naturales(int n){

	if(n!=0){
		Mostrar_n_num_naturales(n-1);
		ShowMessage(n);
	}
}

//---------------------------------------------------------------------------
//PROGRAMA QUE CUENTA LA CANTIDAD LOS NÚMEROS NATURALES INGRESADOS POR TECLADO.
int Mostrar_cantidad_numeros_naturales(int n){
	int c=0;
	if(n<10){
	c = 1;
	}else{
		c=Mostrar_cantidad_numeros_naturales(n/10);
		c=c+1;
	}
	return c;
}
//---------------------------------------------------------------------------
//PROGRAMA QUE MUESTRA LA CANTIDAD DE DIGITOS PARES QUE ESTAN INMEDIATAMENTE ANTES DE UNO IMPAR.
byte Cantidad_Digitos_Pares_Antes_Impar(Cardinal n){
byte i, na;
	if(n<10){
	i=0;
	}else{
		na=n%100;
		i=Cantidad_Digitos_Pares_Antes_Impar(n/100);
		if (((na/10)%2==0) && ((na % 10)%2!=0)) {
			i++;
		}
	}
		return i;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//                          		CADENAS
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//                          		VECTORES
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//                          		MATRICES
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//            			 LLAMADA A LOS ALGORITMOS                          //
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void __fastcall TUCFormulario::BtGrpEjemploItems1Click(TObject *Sender)
{
String cadena="hola bolivia";
cadena.Delete(7,3);
ShowMessage(cadena);
}
//---------------------------------------------------------------------------
//PROGRAMA QUE MUESTRA LOS PRIMEROS N NÚMEROS NATURALES
void __fastcall TUCFormulario::BtGrpNumerosItems0Click(TObject *Sender)
{
int valor_entero;
valor_entero = StrToInt(InputBox("ENTRADA DE DATOS", "Ingrese un numero entero",""));
Mostrar_n_num_naturales(valor_entero);
}
//---------------------------------------------------------------------------

//PROGRAMA QUE CUENTA LA CANTIDAD LOS NÚMEROS NATURALES INGRESADOS POR TECLADO.

void __fastcall TUCFormulario::BtGrpNumerosItems12Click(TObject *Sender)
{
	txtSalida->Text= (IntToStr(Mostrar_cantidad_numeros_naturales(StrToInt(txtEntrada->Text))));
}
//---------------------------------------------------------------------------
//PROGRAMA QUE MUESTRA LA CANTIDAD DE DIGITOS PARES DE UN NUMERO
void __fastcall TUCFormulario::BtGrpNumerosItems6Click(TObject *Sender)
{
	txtSalida->Text= (IntToStr(Mostrar_cantidad_numeros_naturales(StrToInt(txtEntrada->Text))));
}
//---------------------------------------------------------------------------


