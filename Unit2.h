//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TImage *FieldEND;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TImage *FieldBOT;
	TImage *FieldMID;
	TImage *FieldLEFT;
	TImage *FieldRIGHT;
	TImage *FieldSPECIAL;
	TImage *FieldTOP;
	TImage *FieldBLUE;
	TCheckBox *CheckBox1;
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TScrollBar *ScrollBar4;
	TLabel *Label8;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox5;
	TCheckBox *CheckBox6;
	TCheckBox *CheckBox7;
	TCheckBox *CheckBox8;
	TCheckBox *CheckBox9;
	TCheckBox *CheckBox10;
	TCheckBox *CheckBox11;
	TCheckBox *CheckBox12;
	TCheckBox *CheckBox13;
	TCheckBox *CheckBox14;
	TCheckBox *CheckBox15;
	TCheckBox *CheckBox16;
	TCheckBox *CheckBox17;
	TCheckBox *CheckBox18;
	TCheckBox *CheckBox19;
	TCheckBox *CheckBox20;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall CheckBox6Click(TObject *Sender);
	void __fastcall CheckBox7Click(TObject *Sender);
	void __fastcall CheckBox8Click(TObject *Sender);
	void __fastcall CheckBox9Click(TObject *Sender);
	void __fastcall CheckBox10Click(TObject *Sender);
	void __fastcall CheckBox11Click(TObject *Sender);
	void __fastcall CheckBox12Click(TObject *Sender);
	void __fastcall CheckBox20Click(TObject *Sender);
	void __fastcall CheckBox15Click(TObject *Sender);
	void __fastcall CheckBox16Click(TObject *Sender);
	void __fastcall CheckBox17Click(TObject *Sender);
	void __fastcall CheckBox18Click(TObject *Sender);
	void __fastcall CheckBox19Click(TObject *Sender);
	void __fastcall CheckBox14Click(TObject *Sender);
private:	// User declarations
	int IWidth;
    int IDifference;
	TPngImage *PngPictureEND;
	TPngImage *PngPictureTOP;
	TPngImage *PngPictureMID;
	TPngImage *PngPictureBOT;
	TPngImage *PngPictureLEFT;
	TPngImage *PngPictureRIGHT;
	TPngImage *PngPictureSPECIAL;
	UnicodeString SSource;
	//int IPosisionBot;
	int IOldPosision[18];
	__fastcall void draw();
	__fastcall void load(int iNr);
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
