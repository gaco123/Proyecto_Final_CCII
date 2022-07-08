#pragma once
namespace VetPro {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Drawing::Drawing2D;
	ref class CircularPictureBox :PictureBox
	{
	protected:
		Void OnPaint(System::Windows::Forms::PaintEventArgs^ pe) override {
			GraphicsPath^ g = gcnew GraphicsPath();
			g->AddEllipse(0, 0, ClientSize.Width, ClientSize.Height);
			this->Region = gcnew System::Drawing::Region(g);
			OnPaint(pe);
		}
	};

}