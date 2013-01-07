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
