//---------------------------------------------------------------------------

#ifndef Codigo_PrincipalH
#define Codigo_PrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TUCFormulario : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PCMenu;
	TTabSheet *Numeros;
	TTabSheet *Cadenas;
	TTabSheet *Vectores;
	TTabSheet *Matrices;
	TButtonGroup *BtGrpNumeros;
	TLabel *LbEntrada;
	TEdit *txtEntrada;
	TEdit *txtSalida;
	TLabel *LbSalida;
	TButton *btnCargar;
	TTabSheet *Ejemplos;
	TButtonGroup *BtGrpEjemplo;
	TEdit *txtAuxiliar;
	TLabel *lbAuxiliar;
	TButtonGroup *BtGrpCadenas;
	TButtonGroup *BtGrpVectores;
	TPanel *PMenu;
	TStringGrid *StringGrid1;
	TButton *Button2;
	TEdit *txtVColumnas;
	TButtonGroup *ButtonGroup5;
	TStringGrid *SGMatriz;
	TLabel *Label4;
	TEdit *txtMFilas;
	TLabel *Label5;
	TEdit *txtMColumnas;
	TButton *Button3;
	TButton *Button1;
	void __fastcall BtGrpEjemploItems0Click(TObject *Sender);
	void __fastcall BtGrpEjemploItems1Click(TObject *Sender);
	void __fastcall BtGrpNumerosItems0Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TUCFormulario(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUCFormulario *UCFormulario;
//---------------------------------------------------------------------------
#endif
