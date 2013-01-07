//---------------------------------------------------------------------------

#ifndef mainFormH
#define mainFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TCaluculator : public TForm
{
__published:	// IDE 管理のコンポーネント
    TEdit *Edit1;
    TEdit *Edit2;
    TEdit *Edit3;
    TEdit *Edit4;
    TLabel *Label1;
    TLabel *Label2;
    TButton *Button1;
    void __fastcall Button1Click(TObject *Sender);
private:
    long double calculate(long double value1, long double value2, long double value3);
public:		// ユーザー宣言
    __fastcall TCaluculator(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCaluculator *Caluculator;
//---------------------------------------------------------------------------
#endif
