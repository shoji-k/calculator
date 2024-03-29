//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCaluculator *Caluculator;
//---------------------------------------------------------------------------
__fastcall TCaluculator::TCaluculator(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCaluculator::Button1Click(TObject *Sender)
{
    long double value1, value2, value3;
    value1 = StrToFloat(Edit1->Text);
    value2 = StrToFloat(Edit2->Text);
    value3 = StrToFloat(Edit3->Text);

    try {
        if (value3 == 0.0)  throw("0では割れません");
    } catch (char *errstr) {
        Edit4->Text = errstr;
    } catch (...) {
        Edit4->Text = "例外エラー";
    }

    Edit4->Text = FloatToStr(calculate(value1, value2, value3));
}
//---------------------------------------------------------------------------


long double TCaluculator::calculate(
    long double value1, long double value2, long double value3
)
{
    return (value1 + value2) / value3;
}