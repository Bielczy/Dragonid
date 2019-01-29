#include "Autor.h"
#include "Gra.h"
#include "Powitanie.h"

using namespace Dragonid;

[STAThreadAttribute]

void ZamykanieOkna(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0) {
		Application::Exit();
	}
	else {
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamykanieOkna);
	}
}
int main(array<String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Powitanie^ pierwszaForma = gcnew Powitanie();
	pierwszaForma->FormClosed += gcnew FormClosedEventHandler(ZamykanieOkna);
	pierwszaForma->Show();
	Application::Run();



	return 0;
}