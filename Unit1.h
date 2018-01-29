//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <pngimage.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TImage *FieldEND;
	TImage *FieldMID;
	TImage *FieldTOP;
	TImage *FieldSPECIAL;
	TImage *FieldBOT;
	TImage *FieldBLUE;
	TScrollBar *ScrollBar1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *Button1;
	TCheckBox *CheckBox1;
	TEdit *Edit3;
	TLabel *Label3;
	TButton *Button2;
	TScrollBar *ScrollBar2;
	TCheckBox *CheckBox2;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);

private:	// User declarations
	int IHeight;
    int IDifference;
	TPngImage *PngPictureEND;
	TPngImage *PngPictureTOP;
	TPngImage *PngPictureMID;
	TPngImage *PngPictureBOT;
	TPngImage *PngPictureSPECIAL;
	UnicodeString SSource;
	__fastcall void draw();
    __fastcall void load(int iNr);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
