//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
client C;
int iMax=0,iCur=0, POL;
vector <client> lib;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
lib.push_back(client());
try{
Edit1->Text!="";
Edit2->Text!="";
Edit3->Text!="";
Edit4->Text!="";
Edit5->Text!="";
Edit6->Text!="";
Edit7->Text!="";
strcpy(lib[iMax].name,Edit1->Text.t_str());
strcpy(lib[iMax].country,Edit2->Text.t_str());
strcpy(lib[iMax].genre,Edit3->Text.t_str());
strcpy(lib[iMax].label,Edit4->Text.t_str());
strcpy(lib[iMax].influence,Edit5->Text.t_str());
strcpy(lib[iMax].existence2,Edit7->Text.t_str());
strcpy(lib[iMax].list,Edit8->Text.t_str());
strcpy(lib[iMax].list1,Edit9->Text.t_str());
strcpy(lib[iMax].list2,Edit10->Text.t_str());
strcpy(lib[iMax].list3,Edit11->Text.t_str());
strcpy(lib[iMax].list4,Edit12->Text.t_str());
strcpy(lib[iMax].list5,Edit13->Text.t_str());
strcpy(lib[iMax].list6,Edit14->Text.t_str());
strcpy(lib[iMax].list7,Edit15->Text.t_str());
strcpy(lib[iMax].list8,Edit16->Text.t_str());
lib[iMax].existence1=Edit6->Text.ToInt();


////ComboBox1->AddItem(Edit1->Text,0);

iCur=iMax; iMax++;
Label22->Caption=IntToStr(iMax);
ShowRecord();
}
catch(EConvertError*){ShowMessage("��������� ����!");}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowRecord()
{
Edit1->Text=lib[iCur].name;
Edit2->Text=lib[iCur].country;
Edit3->Text=lib[iCur].genre;
Edit4->Text=lib[iCur].label;
Edit5->Text=lib[iCur].influence;
Edit7->Text=lib[iCur].existence2;
Edit8->Text=lib[iCur].list;
Edit9->Text=lib[iCur].list1;
Edit10->Text=lib[iCur].list2;
Edit11->Text=lib[iCur].list3;
Edit12->Text=lib[iCur].list4;
Edit13->Text=lib[iCur].list5;
Edit14->Text=lib[iCur].list6;
Edit15->Text=lib[iCur].list7;
Edit16->Text=lib[iCur].list8;

Edit6->Text=IntToStr(lib[iCur].existence1);
Label22->Caption=IntToStr(iCur+1);



Label17->Caption=Edit1->Text;
Label18->Caption=Edit2->Text;
Label19->Caption=Edit3->Text;
Label20->Caption=Edit4->Text;
Label13->Caption=Edit6->Text;
Label16->Caption=Edit5->Text;
Label25->Caption=Edit7->Text;
Label21->Caption=Edit8->Text;
Label28->Caption=Edit9->Text;
Label29->Caption=Edit10->Text;
Label30->Caption=Edit11->Text;
Label31->Caption=Edit12->Text;
Label32->Caption=Edit13->Text;
Label34->Caption=Edit14->Text;
Label35->Caption=Edit15->Text;
Label36->Caption=Edit16->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
if(iCur<=0) return;
iCur--; ShowRecord();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
if(iCur>=iMax-1) return;
iCur++; ShowRecord();
}

void __fastcall TForm1::Button7Click(TObject *Sender)
{
sort(lib.begin(),lib.end());
iCur=0; ShowRecord();

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button8Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
SaveDialog1->Execute();
FILE *f=fopen(SaveDialog1->FileName.t_str(),"wb");
if(f)fwrite(&lib[0],sizeof(client),iMax,f);
else ShowMessage("���� �� ��������");

fclose(f);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
OpenDialog1->Execute();
FILE *f=fopen(OpenDialog1->FileName.t_str(),"rb");

if(f==0){
        ShowMessage("���� �� ������");return;
}

for(int i=0;i<lib.max_size();i++){
		client s;
		fread(&s,sizeof(client),1,f);
        if(feof(f)) break;
		lib.push_back(s);
}
fclose(f);
iMax=lib.size(); iCur=0; ShowRecord();

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button4Click(TObject *Sender)
{
lib.erase(lib.begin()+iCur);
iMax=iMax-1;
ShowRecord();
}
//---------------------------------------------------------------------------















void __fastcall TForm1::Button2Click(TObject *Sender)
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
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Edit1Change(TObject *Sender)
{
///ComboBox1->AddItem(Edit1->Text,0);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
//ComboBox1->AddItem(Edit1->Text,0);


iCur=iMax; iMax++;
///Label22->Caption=IntToStr(iMax);
ShowRecord();
Label17->Caption=Edit1->Text;
Label18->Caption=Edit2->Text;
Label19->Caption=Edit3->Text;
Label20->Caption=Edit4->Text;
Label13->Caption=Edit6->Text;
Label16->Caption=Edit5->Text;
Label25->Caption=Edit7->Text;
Label21->Caption=Edit8->Text;
Label28->Caption=Edit9->Text;
Label29->Caption=Edit10->Text;
Label30->Caption=Edit11->Text;
Label31->Caption=Edit12->Text;
Label32->Caption=Edit13->Text;
Label34->Caption=Edit14->Text;
Label35->Caption=Edit15->Text;
Label36->Caption=Edit16->Text;
}
//---------------------------------------------------------------------------










