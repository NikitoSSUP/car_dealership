#include "MANEGER_SCREE.h"
#include "LOGIN.h"

System::Void CarDealership::MANEGER_SCREE::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void CarDealership::MANEGER_SCREE::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); LOGIN^ f = gcnew LOGIN; f->Show();
}

System::Void CarDealership::MANEGER_SCREE::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� ������������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = false;
    label1->Text = "���";
    label2->Text = "�������";
    label3->Text = "�����";
    label4->Text = "����� ��������";
    label5->Text = "EMAIL";
    label6->Text = "������";
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

System::Void CarDealership::MANEGER_SCREE::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� �������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID ������";
    label2->Text = "ID �������";
    label3->Text = "����";
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

System::Void CarDealership::MANEGER_SCREE::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� ������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID ������";
    label2->Text = "ID �������";
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

System::Void CarDealership::MANEGER_SCREE::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� �����";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID ������";
    label2->Text = "ID �������";
    label3->Text = "�������� ��������";
    label4->Text = "����";
    label5->Text = "������";
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

System::Void CarDealership::MANEGER_SCREE::�����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� ������������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = true;
    label1->Text = "ID";
    label2->Text = "���";
    label3->Text = "�������";
    label4->Text = "�����";
    label5->Text = "����� ��������";
    label6->Text = "EMAIL";
    label7->Text = "������";
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

System::Void CarDealership::MANEGER_SCREE::����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� �������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID ������";
    label3->Text = "ID �������";
    label4->Text = "����";
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

System::Void CarDealership::MANEGER_SCREE::������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� ������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID ������";
    label3->Text = "ID �������";
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

System::Void CarDealership::MANEGER_SCREE::���������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "�������� �����";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = false;
    label1->Text = "ID";
    label2->Text = "ID ������";
    label3->Text = "ID �������";
    label4->Text = "�������� ��������";
    label5->Text = "����";
    label6->Text = "������";
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

System::Void CarDealership::MANEGER_SCREE::�����ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "������� ������������";
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

System::Void CarDealership::MANEGER_SCREE::����������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "������� �������";
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

System::Void CarDealership::MANEGER_SCREE::������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "������� ������";
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

System::Void CarDealership::MANEGER_SCREE::���������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button1->Text = "������� �����";
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
    if (button1->Text == "�������� ������������")
    {
        InsertClientToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "�������� �������")
    {
        InsertSoldToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(id_meneger), Convert::ToDateTime(textBox3->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "�������� ������")
    {
        InsertService_uslugToClientToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(id_meneger));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "�������� �����")
    {
        InsertService_zacazToDatabase(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), textBox3->Text, Convert::ToDateTime(textBox4->Text), textBox5->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
    if (button1->Text == "�������� ������������")
    {
        UpdateClient(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "�������� �������")
    {
        UpdateSold(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), Convert::ToInt16(id_meneger), Convert::ToDateTime(textBox4->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "�������� ������")
    {
        UpdateService_uslugs_to_Client(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), Convert::ToInt16(id_meneger));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "�������� �����")
    {
        UpdateService_zacaz(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), Convert::ToInt16(textBox3->Text), textBox4->Text, Convert::ToDateTime(textBox5->Text), textBox6->Text);
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
    if (button1->Text == "������� ������������")
    {
        DeleteClientFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "������� �������")
    {
        DeleteSoldFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Sold(dataGridView3);
    }
    if (button1->Text == "������� ������")
    {
        DeleteService_uslugToClientFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Service_uslugs(dataGridView3);
        FillDataGridFromDatabase_Service_uslugs_to_Client(dataGridView2);
    }
    if (button1->Text == "������� �����")
    {
        DeleteService_zacazFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Clients(dataGridView1);
        FillDataGridFromDatabase_Cars(dataGridView2);
        FillDataGridFromDatabase_Service_zacaz(dataGridView3);
    }
}
