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
__published:	// IDE �Ǘ��̃R���|�[�l���g
    TEdit *Edit1;
    TEdit *Edit2;
    TEdit *Edit3;
    TEdit *Edit4;
    TLabel *Label1;
    TLabel *Label2;
    TButton *Button1;
    void __fastcall Button1Click(TObject *Sender);
private:	// ���[�U�[�錾
public:		// ���[�U�[�錾
    __fastcall TCaluculator(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCaluculator *Caluculator;
//---------------------------------------------------------------------------
#endif
