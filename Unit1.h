//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DMXTCP.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TScrollBar *ScrollBar4;
	TScrollBar *ScrollBar5;
	TScrollBar *ScrollBar6;
	TScrollBar *ScrollBar7;
	TScrollBar *ScrollBar8;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit1;
	TTimer *Timer1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton15;
	TTrackBar *TrackBar1;
	TTrackBar *TrackBar2;
	TTrackBar *TrackBar3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TBevel *Bevel1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
	void __fastcall ScrollBar5Change(TObject *Sender);
	void __fastcall ScrollBar6Change(TObject *Sender);
	void __fastcall ScrollBar7Change(TObject *Sender);
	void __fastcall ScrollBar8Change(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
private:	// Déclarations utilisateur
	  DMXTCP monDMXTCP;
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
