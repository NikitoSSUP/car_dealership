#include "MANEGER_SCREE.h"
#include "LOGIN.h"

System::Void CarDealership::MANEGER_SCREE::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void CarDealership::MANEGER_SCREE::âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); LOGIN^ f = gcnew LOGIN; f->Show();
}

System::Void CarDealership::MANEGER_SCREE::ìàðêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Äîáàâèòü ïîëüçîâàòåëÿ";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = false;
    label1->Text = "Èìÿ";
    label2->Text = "Ôàìèëèÿ";
    label3->Text = "Àäðåñ";
    label4->Text = "Íîìåð òåëåôîíà";
    label5->Text = "EMAIL";
    label6->Text = "Ïàðîëü";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::àâòîìîáèëüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Äîáàâèòü ïðîäàæó";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID Ìàøèíû";
    label2->Text = "ID Êëèåíòà";
    label3->Text = "Äàòà";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::óñëóãóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Äîáàâèòü óñëóãó";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID Óñëóãè";
    label2->Text = "ID Êëèåíòà";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Service_uslugs(dataGridView3);
    FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
}

System::Void CarDealership::MANEGER_SCREE::ìåíåäæåðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Äîáàâèòü çàêàç";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID Ìàøèíû";
    label2->Text = "ID Êëèåíòà";
    label3->Text = "Îïèñàíèå ïðîáëåìû";
    label4->Text = "Äàòà";
    label5->Text = "Ñòàòóñ";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Service_zacaz(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::ìàðêóToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Èçìåíèòü ïîëüçîâàòåëÿ";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = true;
    label1->Text = "ID";
    label2->Text = "Èìÿ";
    label3->Text = "Ôàìèëèÿ";
    label4->Text = "Àäðåñ";
    label5->Text = "Íîìåð òåëåôîíà";
    label6->Text = "EMAIL";
    label7->Text = "Ïàðîëü";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = true;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::àâòîìîáèëüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Èçìåíèòü ïðîäàæó";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID Ìàøèíû";
    label3->Text = "ID Êëèåíòà";
    label4->Text = "Äàòà";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::óñëóãóToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Èçìåíèòü óñëóãó";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID Óñëóãè";
    label3->Text = "ID Êëèåíòà";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Service_uslugs(dataGridView3);
    FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
}

System::Void CarDealership::MANEGER_SCREE::ìåíåäæåðàToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Èçìåíèòü çàêàç";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID Ìàøèíû";
    label3->Text = "ID Êëèåíòà";
    label4->Text = "Îïèñàíèå ïðîáëåìû";
    label5->Text = "Äàòà";
    label6->Text = "Ñòàòóñ";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Service_zacaz(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::ìàðêóToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Óäàëèòü ïîëüçîâàòåëÿ";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::àâòîìîáèëüToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Óäàëèòü ïðîäàæó";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Sold(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::óñëóãóToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Óäàëèòü óñëóãó";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Service_uslugs(dataGridView3);
    FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
}

System::Void CarDealership::MANEGER_SCREE::ìåíåäæåðàToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "Óäàëèòü çàêàç";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Service_zacaz(dataGridView3);
}

System::Void CarDealership::MANEGER_SCREE::MANEGER_SCREE_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridFromDatabase_Clients(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    //FillDataGridFromDatabase_Sold;
   // FillDataGridFromDatabase_Service_zacaz;
    FillDataGridFromDatabase_Service_uslugs(dataGridView3);
    //FillDataGridFromDatabase_Service_uslugs_to_Client;
}

System::Void CarDealership::MANEGER_SCREE::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ sr1 = gcnew StreamReader("ID.txt");
    String^ id_meneger = sr1->ReadToEnd();
    sr1->Close();
    if (button1->Text == "Äîáàâèòü ïîëüçîâàòåëÿ")
    {
        InsertClientToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Äîáàâèòü ïðîäàæó")
    {
        InsertSoldToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(id_meneger), Convert::ToDateTime(textBox3->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Äîáàâèòü óñëóãó")
    {
        InsertService_uslugToClientToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(id_meneger));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "Äîáàâèòü çàêàç")
    {
        InsertService_zacazToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), textBox3->Text, Convert::ToDateTime(textBox4->Text), textBox5->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
    if (button1->Text == "Èçìåíèòü ïîëüçîâàòåëÿ")
    {
        UpdateClient(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Èçìåíèòü ïðîäàæó")
    {
        UpdateSold(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), Convert::ToInt16(id_meneger), Convert::ToDateTime(textBox4->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Èçìåíèòü óñëóãó")
    {
        UpdateService_uslugs_to_Client(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), Convert::ToInt16(id_meneger));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "Èçìåíèòü çàêàç")
    {
        UpdateService_zacaz(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), textBox4->Text, Convert::ToDateTime(textBox5->Text), textBox6->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
    if (button1->Text == "Óäàëèòü ïîëüçîâàòåëÿ")
    {
        DeleteClientFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Óäàëèòü ïðîäàæó")
    {
        DeleteSoldFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "Óäàëèòü óñëóãó")
    {
        DeleteService_uslugToClientFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "Óäàëèòü çàêàç")
    {
        DeleteService_zacazFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
}
