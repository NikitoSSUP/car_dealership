#include "ADMIN_SCREEN.h"
#include "LOGIN.h"

System::Void CarDealership::ADMIN_SCREEN::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void CarDealership::ADMIN_SCREEN::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); LOGIN^ f = gcnew LOGIN; f->Show();
}

System::Void CarDealership::ADMIN_SCREEN::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� �����";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "��������";
    label2->Text = "������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ����������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = true;
    label8->Visible = true;
    label9->Visible = true;
    label10->Visible = false;
    label1->Text = "������";
    label2->Text = "ID �����";
    label3->Text = "���� �������";
    label4->Text = "����";
    label5->Text = "������";
    label6->Text = "����";
    label7->Text = "��� ������";
    label8->Text = "��� ���������";
    label9->Text = "����� ���������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = true;
    textBox8->Visible = true;
    textBox9->Visible = true;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "��������";
    label2->Text = "���������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ���������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "���";
    label2->Text = "�������";
    label3->Text = "Email";
    label4->Text = "������";
    label5->Text = "����� ��������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Menegers(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::�����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� �����";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    label2->Text = "��������";
    label3->Text = "������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ����������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = true;
    label8->Visible = true;
    label9->Visible = true;
    label10->Visible = true;
    label1->Text = "ID";
    label2->Text = "������";
    label3->Text = "ID �����";
    label4->Text = "���� �������";
    label5->Text = "����";
    label6->Text = "������";
    label7->Text = "����";
    label8->Text = "��� ������";
    label9->Text = "��� ���������";
    label10->Text = "����� ���������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = true;
    textBox8->Visible = true;
    textBox9->Visible = true;
    textBox10->Visible = true;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    label2->Text = "��������";
    label3->Text = "���������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::���������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "�������� ���������";
    label1->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    label4->Visible = true;
    label5->Visible = true;
    label6->Visible = true;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    label2->Text = "���";
    label3->Text = "�������";
    label4->Text = "Email";
    label5->Text = "������";
    label6->Text = "����� ��������";
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Menegers(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::�����ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "������� �����";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "��������";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::����������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "������� ����������";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "������� ������";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Cars(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::���������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "������� ���������";
    label1->Visible = true;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    label1->Text = "ID";
    textBox1->Visible = true;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    textBox8->Visible = false;
    textBox9->Visible = false;
    textBox10->Visible = false;
    FillDataGridFromDatabase_Menegers(dataGridView2);
}

System::Void CarDealership::ADMIN_SCREEN::ADMIN_SCREEN_Load(System::Object^ sender, System::EventArgs^ e)
{
    FillDataGridFromDatabase_Marks(dataGridView1);
    FillDataGridFromDatabase_Cars(dataGridView2);
    FillDataGridFromDatabase_Service_uslugs(dataGridView3);
    //FillDataGridFromDatabase_Menegers();
}

System::Void CarDealership::ADMIN_SCREEN::button_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (button->Text == "�������� �����")
    {
        InsertMarkToDatabase(textBox1->Text, textBox2->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ����������")
    {
        InsertCarToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text, textBox9->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ������")
    {
        InsertService_uslugToDatabase(textBox1->Text, textBox2->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ���������")
    {
        InsertMenegerToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text);
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
    if (button->Text == "�������� �����")
    {
        UpdateMark(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ����������")
    {
        UpdateCar(Convert::ToInt16(textBox1->Text), textBox2->Text, Convert::ToInt16(textBox3->Text), Convert::ToDateTime(textBox4->Text), Convert::ToSingle(textBox5->Text), textBox6->Text, textBox7->Text, textBox8->Text, textBox9->Text, Convert::ToSingle(textBox10->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ������")
    {
        UpdateService_uslugs(Convert::ToInt16(textBox1->Text), textBox2->Text, Convert::ToSingle(textBox3->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "�������� ���������")
    {
        UpdateMeneger(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
    if (button->Text == "������� �����")
    {
        DeleteMarkFromDatabase(textBox1->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "������� ����������")
    {
        DeleteCarFromDatabase(Convert::ToInt16(textBox1->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "������� ������")
    {
        DeleteService_uslugFromDatabase(Convert::ToInt16(textBox1->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "������� ���������")
    {
        DeleteMenegerFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
}
