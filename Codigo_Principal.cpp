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

//PROGRAMA QUE MUESTRA LOS PRIMEROS N N�MEROS NATURALES
void Mostrar_n_num_naturales(int n){

	if(n!=0){
		Mostrar_n_num_naturales(n-1);
		ShowMessage(n);
	}
}

//---------------------------------------------------------------------------



//---------------------------------------------------------------------------

void __fastcall TUCFormulario::BtGrpEjemploItems1Click(TObject *Sender)
{
String cadena="hola bolivia";
cadena.Delete(7,3);
ShowMessage(cadena);
}
//---------------------------------------------------------------------------
//PROGRAMA QUE MUESTRA LOS PRIMEROS N N�MEROS NATURALES
void __fastcall TUCFormulario::BtGrpNumerosItems0Click(TObject *Sender)
{
int valor_entero;
valor_entero = StrToInt(InputBox("ENTRADA DE DATOS", "Ingrese un numero entero",""));
Mostrar_n_num_naturales(valor_entero);
}
//---------------------------------------------------------------------------
