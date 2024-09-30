#include "LOGIN.h"
#include "USERS_SCREEN.h"
#include "MANEGER_SCREE.h"
#include "ADMIN_SCREEN.h"


System::Void CarDealership::LOGIN::Exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void CarDealership::LOGIN::Login_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ login = textBox_login->Text;
	String^ password = textBox_pass->Text;
	try

	{
		if (RB_Klient->Checked == true)
		{
			OdbcConnection^ conn = ConnectToDatabase();
			String^ query = "SELECT id_client FROM clients WHERE pgp_sym_decrypt(client_phone_num::bytea, '" + password + "') = '" + login + "' AND client_pass = crypt('" + password + "', client_pass); ";
			OdbcCommand^ command = gcnew OdbcCommand(query, conn);
			int status = 0;
			status = safe_cast<int>(command->ExecuteScalar());
			conn->Close();
			if (status > 0)
			{
				StreamWriter^ sw = gcnew StreamWriter("login.txt");
				sw->Write(login);
				sw->Close();

				StreamWriter^ sw1 = gcnew StreamWriter("password.txt");
				sw1->Write(password);
				sw1->Close();

				StreamWriter^ sw2 = gcnew StreamWriter("ID.txt");
				sw2->Write(System::Convert::ToString(status));
				sw2->Close();

				this->Hide(); USERS_SCREEN^ f = gcnew USERS_SCREEN; f->Show();
			}
		}

		if (RB_Admin->Checked == true)
		{
			OdbcConnection^ conn = ConnectToDatabase();
			String^ query = "SELECT id_admin FROM admins WHERE pgp_sym_decrypt(admin_phone_num::bytea, '" + password + "') = '" + login + "' AND admin_pass = crypt('" + password + "', admin_pass); ";
			OdbcCommand^ command = gcnew OdbcCommand(query, conn);
			int status = 0;
			status = safe_cast<int>(command->ExecuteScalar());
			conn->Close();
			if (status > 0)
			{
				StreamWriter^ sw = gcnew StreamWriter("login.txt");
				sw->Write(login);
				sw->Close();

				StreamWriter^ sw1 = gcnew StreamWriter("password.txt");
				sw1->Write(password);
				sw1->Close();

				StreamWriter^ sw2 = gcnew StreamWriter("ID.txt");
				sw2->Write(System::Convert::ToString(status));
				sw2->Close();

				this->Hide(); ADMIN_SCREEN^ f = gcnew ADMIN_SCREEN; f->Show();
			}
		}

		if (RB_Operator->Checked == true)
		{
			OdbcConnection^ conn = ConnectToDatabase();
			String^ query = "SELECT id_meneger FROM menegers WHERE pgp_sym_decrypt(maneger_phone_num::bytea, '" + password + "') = '" + login + "' AND meneger_pass = crypt('" + password + "', meneger_pass); ";
			OdbcCommand^ command = gcnew OdbcCommand(query, conn);
			int status = 0;
			status = safe_cast<int>(command->ExecuteScalar());
			conn->Close();
			if (status > 0)
			{
				StreamWriter^ sw = gcnew StreamWriter("login.txt");
				sw->Write(login);
				sw->Close();

				StreamWriter^ sw1 = gcnew StreamWriter("password.txt");
				sw1->Write(password);
				sw1->Close();

				StreamWriter^ sw2 = gcnew StreamWriter("ID.txt");
				sw2->Write(System::Convert::ToString(status));
				sw2->Close();

				this->Hide(); MANEGER_SCREE^ f = gcnew MANEGER_SCREE; f->Show();
			}
		}
	}
	catch (Exception^) {
		MessageBox::Show("Õ≈¬≈–Õ€… ÀŒ√»Õ »À» œ¿–ŒÀ‹", "Œÿ»¡ ¿");
	}
}
