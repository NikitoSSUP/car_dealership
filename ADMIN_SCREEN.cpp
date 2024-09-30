#include "ADMIN_SCREEN.h"
#include "LOGIN.h"

System::Void CarDealership::ADMIN_SCREEN::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void CarDealership::ADMIN_SCREEN::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); LOGIN^ f = gcnew LOGIN; f->Show();
}

System::Void CarDealership::ADMIN_SCREEN::маркуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Добавить марку";
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
    label1->Text = "Название";
    label2->Text = "Страна";
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

System::Void CarDealership::ADMIN_SCREEN::автомобильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Добавить автомобиль";
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
    label1->Text = "Модель";
    label2->Text = "ID марки";
    label3->Text = "Дата выпуска";
    label4->Text = "Цена";
    label5->Text = "Статус";
    label6->Text = "Цвет";
    label7->Text = "Тип кузова";
    label8->Text = "Тип двигателя";
    label9->Text = "Объем двигателя";
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

System::Void CarDealership::ADMIN_SCREEN::услугуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Добавить услугу";
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
    label1->Text = "Описание";
    label2->Text = "Стоимость";
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

System::Void CarDealership::ADMIN_SCREEN::менеджераToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Добавить менеджера";
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
    label1->Text = "Имя";
    label2->Text = "Фамилия";
    label3->Text = "Email";
    label4->Text = "Пароль";
    label5->Text = "Номер телефона";
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

System::Void CarDealership::ADMIN_SCREEN::маркуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Изменить марку";
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
    label2->Text = "Название";
    label3->Text = "Страна";
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

System::Void CarDealership::ADMIN_SCREEN::автомобильToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Изменить автомобиль";
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
    label2->Text = "Модель";
    label3->Text = "ID марки";
    label4->Text = "Дата выпуска";
    label5->Text = "Цена";
    label6->Text = "Статус";
    label7->Text = "Цвет";
    label8->Text = "Тип кузова";
    label9->Text = "Тип двигателя";
    label10->Text = "Объем двигателя";
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

System::Void CarDealership::ADMIN_SCREEN::услугуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Изменить услугу";
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
    label2->Text = "Описание";
    label3->Text = "Стоимость";
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

System::Void CarDealership::ADMIN_SCREEN::менеджераToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Изменить менеджера";
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
    label2->Text = "Имя";
    label3->Text = "Фамилия";
    label4->Text = "Email";
    label5->Text = "Пароль";
    label6->Text = "Номер телефона";
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

System::Void CarDealership::ADMIN_SCREEN::маркуToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Удалить марку";
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
    label1->Text = "Название";
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

System::Void CarDealership::ADMIN_SCREEN::автомобильToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Удалить автомобиль";
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

System::Void CarDealership::ADMIN_SCREEN::услугуToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Удалить услугу";
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

System::Void CarDealership::ADMIN_SCREEN::менеджераToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e)
{
    button->Text = "Удалить менеджера";
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
    if (button->Text == "Добавить марку")
    {
        InsertMarkToDatabase(textBox1->Text, textBox2->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Добавить автомобиль")
    {
        InsertCarToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text, textBox9->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Добавить услугу")
    {
        InsertService_uslugToDatabase(textBox1->Text, textBox2->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Добавить менеджера")
    {
        InsertMenegerToDatabase(textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text);
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
    if (button->Text == "Изменить марку")
    {
        UpdateMark(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Изменить автомобиль")
    {
        UpdateCar(Convert::ToInt16(textBox1->Text), textBox2->Text, Convert::ToInt16(textBox3->Text), Convert::ToDateTime(textBox4->Text), Convert::ToSingle(textBox5->Text), textBox6->Text, textBox7->Text, textBox8->Text, textBox9->Text, Convert::ToSingle(textBox10->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Изменить услугу")
    {
        UpdateService_uslugs(Convert::ToInt16(textBox1->Text), textBox2->Text, Convert::ToSingle(textBox3->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Изменить менеджера")
    {
        UpdateMeneger(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, textBox6->Text);
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
    if (button->Text == "Удалить марку")
    {
        DeleteMarkFromDatabase(textBox1->Text);
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Удалить автомобиль")
    {
        DeleteCarFromDatabase(Convert::ToInt16(textBox1->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Удалить услугу")
    {
        DeleteService_uslugFromDatabase(Convert::ToInt16(textBox1->Text));
        Thread^ thread1 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Marks));
        thread1->Start(dataGridView1);
        Thread^ thread2 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Cars));
        thread2->Start(dataGridView2);
        Thread^ thread3 = gcnew Thread(gcnew ParameterizedThreadStart(this, &ADMIN_SCREEN::FillDataGridFromDatabase_Service_uslugs));
        thread3->Start(dataGridView3);
    }
    if (button->Text == "Удалить менеджера")
    {
        DeleteMenegerFromDatabase(Convert::ToInt16(textBox1->Text));
        FillDataGridFromDatabase_Menegers(dataGridView2);
    }
}
