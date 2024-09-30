#include "USERS_SCREEN.h"
#include "LOGIN.h"

System::Void CarDealership::USERS_SCREEN::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void CarDealership::USERS_SCREEN::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Hide(); LOGIN^ f = gcnew LOGIN; f->Show();
}

System::Void CarDealership::USERS_SCREEN::USERS_SCREEN_Load(System::Object^ sender, System::EventArgs^ e)
{
    OdbcConnection^ conn = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT mark_name FROM public.marks group BY mark_name order by mark_name ASC ", conn);
    OdbcDataReader^ reader = command->ExecuteReader();
    if (reader->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader);
            comboBox1->DataSource = rea;
            comboBox1->DisplayMember = "mark_name";
        }
    }
    reader->Close();

    OdbcCommand^ command1 = gcnew OdbcCommand("SELECT car_status  FROM public.cars group BY car_status order by car_status ASC ", conn);
    OdbcDataReader^ reader1 = command1->ExecuteReader();
    if (reader1->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader1);
            comboBox_status->DataSource = rea;
            comboBox_status->DisplayMember = "car_status";
        }
    }
    reader1->Close();

    OdbcCommand^ command2 = gcnew OdbcCommand("SELECT car_type_corpus  FROM public.cars group BY car_type_corpus order by car_type_corpus ASC", conn);
    OdbcDataReader^ reader2 = command2->ExecuteReader();
    if (reader2->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader2);
            comboBox_type_corp->DataSource = rea;
            comboBox_type_corp->DisplayMember = "car_type_corpus";
        }
    }
    reader2->Close();

    OdbcCommand^ command3 = gcnew OdbcCommand("SELECT mark_country FROM public.marks group BY mark_country order by mark_country ASC", conn);
    OdbcDataReader^ reader3 = command3->ExecuteReader();
    if (reader3->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader3);
            comboBox_country->DataSource = rea;
            comboBox_country->DisplayMember = "mark_country";
        }
    }
    reader3->Close();

    OdbcCommand^ command4 = gcnew OdbcCommand("SELECT car_type_engin FROM public.cars group BY car_type_engin order by car_type_engin ASC", conn);
    OdbcDataReader^ reader4 = command4->ExecuteReader();
    if (reader4->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader4);
            comboBox_type_engine->DataSource = rea;
            comboBox_type_engine->DisplayMember = "car_type_engin";
        }
    }
    reader4->Close();

    OdbcCommand^ command5 = gcnew OdbcCommand("SELECT car_color FROM public.cars group BY car_color order by car_color ASC", conn);
    OdbcDataReader^ reader5 = command5->ExecuteReader();
    if (reader5->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader5);
            comboBox_color->DataSource = rea;
            comboBox_color->DisplayMember = "car_color";
        }
    }
    reader5->Close();

    OdbcCommand^ command6 = gcnew OdbcCommand("SELECT EXTRACT(YEAR FROM car_year_create) as year FROM public.cars group BY EXTRACT(YEAR FROM car_year_create) order by year ASC", conn);
    OdbcDataReader^ reader6 = command6->ExecuteReader();
    if (reader6->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader6);
            comboBox_year->DataSource = rea;
            comboBox_year->DisplayMember = "year";
        }
    }
    reader6->Close();

    OdbcCommand^ command7 = gcnew OdbcCommand("SELECT car_engin_volume FROM public.cars group BY car_engin_volume order by car_engin_volume ASC", conn);
    OdbcDataReader^ reader7 = command7->ExecuteReader();
    if (reader7->HasRows)
    {
        {
            DataTable^ rea = gcnew DataTable();
            rea->Load(reader7);
            comboBox_engine_volume->DataSource = rea;
            comboBox_engine_volume->DisplayMember = "car_engin_volume";
        }
    }
    reader7->Close();

    comboBox1->Text = "";
    comboBox_color->Text = "";
    comboBox_country->Text = "";
    comboBox_engine_volume->Text = "";
    comboBox_status->Text = "";
    comboBox_type_corp->Text = "";
    comboBox_type_engine->Text = "";
    comboBox_year->Text = "";

    OdbcCommand^ command8 = gcnew OdbcCommand("SELECT C.car_name as \"Название\", M.Mark_name as \"Марка\",  M.Mark_country as \"Страна\",  EXTRACT(YEAR FROM C.car_year_create) as \"Год\",  C.car_coast as \"Цена\", C.car_color as \"Цвет\", C.car_type_corpus as \"Тип\", C.car_type_engin as \"Тип двигателя\", C.car_engin_volume as \"Объем\", C.car_status as \"Статус\" FROM Cars C JOIN Marks M ON C.car_id_mark = M.id_mark", conn);
    OdbcDataReader^ reader8 = command8->ExecuteReader();
    if (reader8->HasRows)
    {
        DataTable^ rea = gcnew DataTable();
        rea->Load(reader8);
        dataGridView1->DataSource = rea;
    }
    reader8->Close();

    conn->Close();
}

System::Void CarDealership::USERS_SCREEN::Sort_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ car_name = textBox_name->Text;
    String^ mark = comboBox1->Text;
    String^ color = comboBox_color->Text;
    String^ country = comboBox_country->Text;
    String^ volum = comboBox_engine_volume->Text;
    String^ stat = comboBox_status->Text;
    String^ corp = comboBox_type_corp->Text;
    String^ engin = comboBox_type_engine->Text;
    String^ year = comboBox_year->Text;

    String^ Zapros = "SELECT C.car_name as \"Название\", M.Mark_name as \"Марка\",  M.Mark_country as \"Страна\",  EXTRACT(YEAR FROM C.car_year_create) as \"Год\",  C.car_coast as \"Цена\", C.car_color as \"Цвет\", C.car_type_corpus as \"Тип\", C.car_type_engin as \"Тип двигателя\", C.car_engin_volume as \"Объем\", C.car_status as \"Статус\" FROM Cars C JOIN Marks M ON C.car_id_mark = M.id_mark ";
    OdbcConnection^ conn = ConnectToDatabase();
    if (textBox_name->Text != "" || textBox_coast->Text != "" || comboBox1->Text != "" || comboBox_color->Text != "" || comboBox_country->Text != "" || comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
    {
        Zapros = Zapros + " where ";

        if (textBox_name->Text != "")
        {
            Zapros = Zapros + "C.car_name ='" + car_name + "' ";
            if (textBox_coast->Text != "" || comboBox1->Text != "" || comboBox_color->Text != "" || comboBox_country->Text != "" || comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }
        if (textBox_coast->Text != "")
        {
            int coast = Convert::ToInt32(textBox_coast->Text);
            Zapros = Zapros + "C.car_coast <" + coast + " ";
            if (comboBox1->Text != "" || comboBox_color->Text != "" || comboBox_country->Text != "" || comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }
        if (comboBox1->Text != "")
        {
            Zapros = Zapros + "M.Mark_name ='" + mark + "' ";
            if (comboBox_color->Text != "" || comboBox_country->Text != "" || comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }
        if (comboBox_color->Text != "")
        {
            Zapros = Zapros + "C.Car_color ='" + color + "' ";
            if (comboBox_country->Text != "" || comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_country->Text != "")
        {
            Zapros = Zapros + "M.Mark_country ='" + country + "' ";
            if (comboBox_year->Text != "" || comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_year->Text != "")
        {
            Zapros = Zapros + "EXTRACT(YEAR FROM C.Car_year_create) = '" + year + "' ";
            if (comboBox_engine_volume->Text != "" || comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_engine_volume->Text != "")
        {
            Zapros = Zapros + "C.Car_engin_volume ='" + volum + "' ";
            if (comboBox_status->Text != "" || comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_status->Text != "")
        {
            Zapros = Zapros + "C.Car_status ='" + stat + "' ";
            if (comboBox_type_corp->Text != "" || comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_type_corp->Text != "")
        {
            Zapros = Zapros + "C.Car_type_corpus ='" + corp + "' ";
            if (comboBox_type_engine->Text != "")
            {
                Zapros = Zapros + " and ";
            }
        }

        if (comboBox_type_engine->Text != "")
        {
            Zapros = Zapros + "C.Car_type_engin ='" + engin + "' ";
        }
        Zapros = Zapros + ";";
    }
    else
    {
        Zapros = Zapros + ";";
    }

    OdbcCommand^ command = gcnew OdbcCommand(Zapros, conn);

    OdbcDataReader^ reader = command->ExecuteReader();
    if (reader->HasRows)
    {
        DataTable^ rea = gcnew DataTable();
        rea->Load(reader);
        dataGridView1->DataSource = rea;
    }
    reader->Close();
    conn->Close();
}

System::Void CarDealership::USERS_SCREEN::каталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    comboBox1->Visible = true;
    comboBox_color->Visible = true;
    comboBox_country->Visible = true;
    comboBox_engine_volume->Visible = true;
    comboBox_status->Visible = true;
    comboBox_type_corp->Visible = true;
    comboBox_type_engine->Visible = true;
    comboBox_year->Visible = true;
    textBox_name->Visible = true;
    textBox_coast->Visible = true;
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
    Sort_button->Visible = true;
}

System::Void CarDealership::USERS_SCREEN::моиПокупкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ sr1 = gcnew StreamReader("ID.txt");
    String^ id_user = sr1->ReadToEnd();
    sr1->Close();
    comboBox1->Visible = false;
    comboBox_color->Visible = false;
    comboBox_country->Visible = false;
    comboBox_engine_volume->Visible = false;
    comboBox_status->Visible = false;
    comboBox_type_corp->Visible = false;
    comboBox_type_engine->Visible = false;
    comboBox_year->Visible = false;
    textBox_name->Visible = false;
    textBox_coast->Visible = false;
    label1->Visible = false;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    Sort_button->Visible = false;

    OdbcConnection^ connection = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT m.Mark_name as \"Марка\", c.Car_name as \"Модель\", me.Meneger_name as \"Имя\", me.Meneger_fam as \"Фамилия\", s.Sold_date as \"Дата продажи\" FROM Sold s JOIN Cars c ON s.Sold_id_car = c.id_car JOIN Marks m ON c.Car_id_mark = m.id_mark JOIN Menegers me ON s.Sold_id_meneger = me.id_meneger where s.sold_id_client ="+ id_user, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();

    try
    {
        // Заполняем DataTable данными из базы данных
        adapter->Fill(dataTable);

        // Привязываем DataTable к DataGridView
        dataGridView1->DataSource = dataTable;

        // Автоматическая настройка высоты строк и длины столбцов
        dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // Обработка исключений
        MessageBox::Show(e->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        connection->Close();
    }
}

System::Void CarDealership::USERS_SCREEN::моиУслугиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ sr1 = gcnew StreamReader("ID.txt");
    String^ id_user = sr1->ReadToEnd();
    sr1->Close();
    comboBox1->Visible = false;
    comboBox_color->Visible = false;
    comboBox_country->Visible = false;
    comboBox_engine_volume->Visible = false;
    comboBox_status->Visible = false;
    comboBox_type_corp->Visible = false;
    comboBox_type_engine->Visible = false;
    comboBox_year->Visible = false;
    textBox_name->Visible = false;
    textBox_coast->Visible = false;
    label1->Visible = false;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    Sort_button->Visible = false;

    OdbcConnection^ connection = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT su.Service_uslugs_name as \"Название\", su.Service_uslugs_coast as \"Стоимость\", me.Meneger_name as \"Имя\", me.Meneger_fam as \"Фамилия\" FROM Service_uslugs_to_Client stc JOIN Service_uslugs su ON stc.Service_uslugs_to_Client_id_uslug = su.id_service_uslugs JOIN Menegers me ON stc.Service_uslugs_to_Client_id_meneger = me.id_meneger where service_uslugs_to_client_id_client=" + id_user, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();

    try
    {
        // Заполняем DataTable данными из базы данных
        adapter->Fill(dataTable);

        // Привязываем DataTable к DataGridView
        dataGridView1->DataSource = dataTable;

        // Автоматическая настройка высоты строк и длины столбцов
        dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // Обработка исключений
        MessageBox::Show(e->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        connection->Close();
    }
}

System::Void CarDealership::USERS_SCREEN::моиЗаказыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ sr1 = gcnew StreamReader("ID.txt");
    String^ id_user = sr1->ReadToEnd();
    sr1->Close();
    comboBox1->Visible = false;
    comboBox_color->Visible = false;
    comboBox_country->Visible = false;
    comboBox_engine_volume->Visible = false;
    comboBox_status->Visible = false;
    comboBox_type_corp->Visible = false;
    comboBox_type_engine->Visible = false;
    comboBox_year->Visible = false;
    textBox_name->Visible = false;
    textBox_coast->Visible = false;
    label1->Visible = false;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    Sort_button->Visible = false;

    OdbcConnection^ connection = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT m.Mark_name as \"Марка\", c.Car_name as \"Модель\", sz.Service_zacaz_problem as \"Описание\", sz.Service_zacaz_date as \"Дата заказа\", sz.Service_zacaz_status as \"Статус\" FROM Service_zacaz sz JOIN Cars c ON sz.Service_zacaz_id_car = c.id_car JOIN Marks m ON c.Car_id_mark = m.id_mark where service_zacaz_id_client=" + id_user, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();

    try
    {
        // Заполняем DataTable данными из базы данных
        adapter->Fill(dataTable);

        // Привязываем DataTable к DataGridView
        dataGridView1->DataSource = dataTable;

        // Автоматическая настройка высоты строк и длины столбцов
        dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // Обработка исключений
        MessageBox::Show(e->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        connection->Close();
    }
}

System::Void CarDealership::USERS_SCREEN::профильToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ sr1 = gcnew StreamReader("ID.txt");
    String^ id_user = sr1->ReadToEnd();
    sr1->Close();
    StreamReader^ sr2 = gcnew StreamReader("password.txt");
    String^ password = sr2->ReadToEnd();
    sr2->Close();
    comboBox1->Visible = false;
    comboBox_color->Visible = false;
    comboBox_country->Visible = false;
    comboBox_engine_volume->Visible = false;
    comboBox_status->Visible = false;
    comboBox_type_corp->Visible = false;
    comboBox_type_engine->Visible = false;
    comboBox_year->Visible = false;
    textBox_name->Visible = false;
    textBox_coast->Visible = false;
    label1->Visible = false;
    label2->Visible = false;
    label3->Visible = false;
    label4->Visible = false;
    label5->Visible = false;
    label6->Visible = false;
    label7->Visible = false;
    label8->Visible = false;
    label9->Visible = false;
    label10->Visible = false;
    Sort_button->Visible = false;

    OdbcConnection^ connection = ConnectToDatabase();
    OdbcCommand^ command = gcnew OdbcCommand("SELECT client_name as \"Имя\", client_fam as \"Фамилия\", client_adress as \"Адрес\", pgp_sym_decrypt(client_phone_num::bytea, '" + password + "') as \"Номер\", client_email as \"Почта\" from clients where id_client=" + id_user, connection);
    OdbcDataAdapter^ adapter = gcnew OdbcDataAdapter(command);
    DataTable^ dataTable = gcnew DataTable();

    try
    {
        // Заполняем DataTable данными из базы данных
        adapter->Fill(dataTable);

        // Привязываем DataTable к DataGridView
        dataGridView1->DataSource = dataTable;

        // Автоматическая настройка высоты строк и длины столбцов
        dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
        dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
    }
    catch (Exception^ e)
    {
        // Обработка исключений
        MessageBox::Show(e->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        connection->Close();
    }
}
