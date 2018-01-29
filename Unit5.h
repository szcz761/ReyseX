//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ComCtrls.hpp>
#include <pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <list>
#include <cmath>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *Button1;
	TImage *Image2;
	TImage *ImageColor;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TButton *Button6;
	TEdit *Edit1;
	TImage *ImageEnd;
	TColorDialog *ColorDialog;
	TButton *Button7;
	TCheckBox *CheckBox3;
	TScrollBar *ScrollBar1;
	TScrollBar *ScrollBar2;
	TScrollBar *ScrollBar3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TCheckBox *CheckBox4;
	TCheckBox *CheckBox5;
	TScrollBar *ScrollBar4;
	TLabel *Label7;
	TLabel *Label8;
	void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall ImageColorClick(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall ScrollBar1Change(TObject *Sender);
	void __fastcall ScrollBar2Change(TObject *Sender);
	void __fastcall ScrollBar3Change(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall ScrollBar4Change(TObject *Sender);
private:	// User declarations
	TColor CColor;
	int IOldX;
	int IOldY;
	int IWidth;
	int IPointerLong;
	int IRadius;
	int IC;
	TPngImage* PngEnd;
	TPngImage* PngBackGround;
	std::list<TPoint> list_point;
	double DFill;
	void __fastcall draw();
	void __fastcall drawCorner(int ichoose,std::list<TPoint>::iterator pNext, std::list<TPoint>::iterator pNow);
	void __fastcall drawPointer(int ic);
	void __fastcall drawEndBlack( int ic,bool pierwszy);
	void __fastcall drawSpeciall( int ic,bool pierwszy);
	void __fastcall drawSpeciall2(int ic);
	int iPierwszy;
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
