//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
client s;

vector <client>::iterator p;

strcpy(s.name,Edit1->Text.t_str());
strcpy(s.country,Edit2->Text.t_str());
strcpy(s.genre,Edit3->Text.t_str());
strcpy(s.label,Edit4->Text.t_str());
strcpy(s.influence,Edit5->Text.t_str());
strcpy(s.existence2,Edit7->Text.t_str());
strcpy(s.list,Edit8->Text.t_str());
strcpy(s.list1,Edit8->Text.t_str());
strcpy(s.list2,Edit8->Text.t_str());
strcpy(s.list3,Edit8->Text.t_str());
strcpy(s.list4,Edit8->Text.t_str());
strcpy(s.list5,Edit8->Text.t_str());
strcpy(s.list6,Edit8->Text.t_str());
strcpy(s.list7,Edit8->Text.t_str());
strcpy(s.list8,Edit8->Text.t_str());


s.existence1=Edit6->Text.ToIntDef(-1);

p=find(lib.begin(),lib.end(),s);
iCur=p-lib.begin(); ShowRecord1();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::ShowRecord1()
{
Label9->Caption=lib[iCur].name;
Label10->Caption=lib[iCur].country;
Label11->Caption=lib[iCur].genre;
Label16->Caption=lib[iCur].label;
Label18->Caption=lib[iCur].influence;
Label14->Caption=lib[iCur].existence2;
Label25->Caption=lib[iCur].list;
Label26->Caption=lib[iCur].list1;
Label27->Caption=lib[iCur].list2;
Label28->Caption=lib[iCur].list3;
Label29->Caption=lib[iCur].list4;
Label30->Caption=lib[iCur].list5;
Label31->Caption=lib[iCur].list6;
Label32->Caption=lib[iCur].list7;
Label33->Caption=lib[iCur].list8;

Label12->Caption=IntToStr(lib[iCur].existence1);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
client s;

vector <client>::iterator p;

strcpy(s.name,Edit1->Text.t_str());
strcpy(s.country,Edit2->Text.t_str());
strcpy(s.genre,Edit3->Text.t_str());
strcpy(s.label,Edit4->Text.t_str());
strcpy(s.influence,Edit5->Text.t_str());
strcpy(s.existence2,Edit7->Text.t_str());
strcpy(s.list,Edit8->Text.t_str());
strcpy(s.list1,Edit8->Text.t_str());
strcpy(s.list2,Edit8->Text.t_str());
strcpy(s.list2,Edit8->Text.t_str());
strcpy(s.list3,Edit8->Text.t_str());
strcpy(s.list4,Edit8->Text.t_str());
strcpy(s.list5,Edit8->Text.t_str());
strcpy(s.list6,Edit8->Text.t_str());
strcpy(s.list7,Edit8->Text.t_str());
strcpy(s.list8,Edit8->Text.t_str());
s.existence1=Edit6->Text.ToIntDef(-1);

p=find(lib.begin()+iCur+1 ,lib.end(),s);
iCur=p-lib.begin(); ShowRecord1();
}
//---------------------------------------------------------------------------










void __fastcall TForm2::Button6Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
Edit4->Text="";
Edit5->Text="";
Edit6->Text="";
Edit7->Text="";
Edit8->Text="";
Edit9->Text="";
Edit10->Text="";
Edit11->Text="";
Edit12->Text="";
Edit13->Text="";
Edit14->Text="";
Edit15->Text="";
Edit16->Text="";


Label10->Caption="";
Label11->Caption="";
Label12->Caption="";
Label14->Caption="";
Label16->Caption="";
Label18->Caption="";
Label9->Caption="";
Label25->Caption="";
Label26->Caption="";
Label27->Caption="";
Label28->Caption="";
Label29->Caption="";
Label30->Caption="";
Label31->Caption="";
Label32->Caption="";
Label33->Caption="";

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


