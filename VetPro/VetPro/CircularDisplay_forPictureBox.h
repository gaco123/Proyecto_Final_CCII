#pragma once

namespace VetPro {
	using namespace System::Windows::Forms;
	using namespace System::Drawing::Drawing2D;

	class CircularDisplay_forPictureBox {
	public:
		void operator() (PictureBox^ x) {
			GraphicsPath^ cp = gcnew System::Drawing::Drawing2D::GraphicsPath();
			cp->AddEllipse(x->DisplayRectangle);
			x->Region = gcnew System::Drawing::Region(cp);
		}
	};
}


