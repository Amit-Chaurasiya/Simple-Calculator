#pragma once

namespace SimpleCalculator 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtdisplay;
	private: System::Windows::Forms::Button^ btnallclear;
	protected:

	private: System::Windows::Forms::Button^ btndelete;

	private: System::Windows::Forms::Button^ btndivide;

	private: System::Windows::Forms::Button^ btnmultiply;

	private: System::Windows::Forms::Button^ digit7;
	private: System::Windows::Forms::Button^ digit8;
	private: System::Windows::Forms::Button^ digit9;
	private: System::Windows::Forms::Button^ btnsubtract;




	private: System::Windows::Forms::Button^ digit4;
	private: System::Windows::Forms::Button^ digit5;
	private: System::Windows::Forms::Button^ digit6;
	private: System::Windows::Forms::Button^ btnadd;




	private: System::Windows::Forms::Button^ digit1;
	private: System::Windows::Forms::Button^ digit2;
	private: System::Windows::Forms::Button^ digit3;



	private: System::Windows::Forms::Button^ digit00;
	private: System::Windows::Forms::Button^ btndecimal;
	private: System::Windows::Forms::Button^ digit0;
	private: System::Windows::Forms::Button^ btnequal;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtdisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnallclear = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->btndivide = (gcnew System::Windows::Forms::Button());
			this->btnmultiply = (gcnew System::Windows::Forms::Button());
			this->digit7 = (gcnew System::Windows::Forms::Button());
			this->digit8 = (gcnew System::Windows::Forms::Button());
			this->digit9 = (gcnew System::Windows::Forms::Button());
			this->btnsubtract = (gcnew System::Windows::Forms::Button());
			this->digit4 = (gcnew System::Windows::Forms::Button());
			this->digit5 = (gcnew System::Windows::Forms::Button());
			this->digit6 = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->digit1 = (gcnew System::Windows::Forms::Button());
			this->digit2 = (gcnew System::Windows::Forms::Button());
			this->digit3 = (gcnew System::Windows::Forms::Button());
			this->digit00 = (gcnew System::Windows::Forms::Button());
			this->btndecimal = (gcnew System::Windows::Forms::Button());
			this->digit0 = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtdisplay
			// 
			this->txtdisplay->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdisplay->Location = System::Drawing::Point(12, 12);
			this->txtdisplay->Multiline = true;
			this->txtdisplay->Name = L"txtdisplay";
			this->txtdisplay->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtdisplay->Size = System::Drawing::Size(298, 54);
			this->txtdisplay->TabIndex = 0;
			this->txtdisplay->Text = L"0";
			this->txtdisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnallclear
			// 
			this->btnallclear->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnallclear->Location = System::Drawing::Point(12, 81);
			this->btnallclear->Name = L"btnallclear";
			this->btnallclear->Size = System::Drawing::Size(70, 70);
			this->btnallclear->TabIndex = 1;
			this->btnallclear->Text = L"AC";
			this->btnallclear->UseVisualStyleBackColor = true;
			this->btnallclear->Click += gcnew System::EventHandler(this, &MyForm::btnallclear_Click);
			// 
			// btndelete
			// 
			this->btndelete->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndelete->Location = System::Drawing::Point(88, 81);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(70, 70);
			this->btndelete->TabIndex = 1;
			this->btndelete->Text = L"DEL";
			this->btndelete->UseVisualStyleBackColor = true;
			this->btndelete->Click += gcnew System::EventHandler(this, &MyForm::btndelete_Click);
			// 
			// btndivide
			// 
			this->btndivide->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivide->Location = System::Drawing::Point(164, 81);
			this->btndivide->Name = L"btndivide";
			this->btndivide->Size = System::Drawing::Size(70, 70);
			this->btndivide->TabIndex = 1;
			this->btndivide->Text = L"/";
			this->btndivide->UseVisualStyleBackColor = true;
			this->btndivide->Click += gcnew System::EventHandler(this, &MyForm::Enteroperator);
			// 
			// btnmultiply
			// 
			this->btnmultiply->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmultiply->Location = System::Drawing::Point(240, 81);
			this->btnmultiply->Name = L"btnmultiply";
			this->btnmultiply->Size = System::Drawing::Size(70, 70);
			this->btnmultiply->TabIndex = 1;
			this->btnmultiply->Text = L"*";
			this->btnmultiply->UseVisualStyleBackColor = true;
			this->btnmultiply->Click += gcnew System::EventHandler(this, &MyForm::Enteroperator);
			// 
			// digit7
			// 
			this->digit7->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit7->Location = System::Drawing::Point(12, 157);
			this->digit7->Name = L"digit7";
			this->digit7->Size = System::Drawing::Size(70, 70);
			this->digit7->TabIndex = 1;
			this->digit7->Text = L"7";
			this->digit7->UseVisualStyleBackColor = true;
			this->digit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit8
			// 
			this->digit8->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit8->Location = System::Drawing::Point(88, 157);
			this->digit8->Name = L"digit8";
			this->digit8->Size = System::Drawing::Size(70, 70);
			this->digit8->TabIndex = 1;
			this->digit8->Text = L"8";
			this->digit8->UseVisualStyleBackColor = true;
			this->digit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit9
			// 
			this->digit9->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit9->Location = System::Drawing::Point(164, 157);
			this->digit9->Name = L"digit9";
			this->digit9->Size = System::Drawing::Size(70, 70);
			this->digit9->TabIndex = 1;
			this->digit9->Text = L"9";
			this->digit9->UseVisualStyleBackColor = true;
			this->digit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnsubtract
			// 
			this->btnsubtract->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubtract->Location = System::Drawing::Point(240, 157);
			this->btnsubtract->Name = L"btnsubtract";
			this->btnsubtract->Size = System::Drawing::Size(70, 70);
			this->btnsubtract->TabIndex = 1;
			this->btnsubtract->Text = L"-";
			this->btnsubtract->UseVisualStyleBackColor = true;
			this->btnsubtract->Click += gcnew System::EventHandler(this, &MyForm::Enteroperator);
			// 
			// digit4
			// 
			this->digit4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit4->Location = System::Drawing::Point(12, 233);
			this->digit4->Name = L"digit4";
			this->digit4->Size = System::Drawing::Size(70, 70);
			this->digit4->TabIndex = 1;
			this->digit4->Text = L"4";
			this->digit4->UseVisualStyleBackColor = true;
			this->digit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit5
			// 
			this->digit5->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit5->Location = System::Drawing::Point(88, 233);
			this->digit5->Name = L"digit5";
			this->digit5->Size = System::Drawing::Size(70, 70);
			this->digit5->TabIndex = 1;
			this->digit5->Text = L"5";
			this->digit5->UseVisualStyleBackColor = true;
			this->digit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit6
			// 
			this->digit6->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit6->Location = System::Drawing::Point(164, 233);
			this->digit6->Name = L"digit6";
			this->digit6->Size = System::Drawing::Size(70, 70);
			this->digit6->TabIndex = 1;
			this->digit6->Text = L"6";
			this->digit6->UseVisualStyleBackColor = true;
			this->digit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnadd
			// 
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(240, 233);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(70, 146);
			this->btnadd->TabIndex = 1;
			this->btnadd->Text = L"+";
			this->btnadd->UseVisualStyleBackColor = true;
			this->btnadd->Click += gcnew System::EventHandler(this, &MyForm::Enteroperator);
			// 
			// digit1
			// 
			this->digit1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit1->Location = System::Drawing::Point(12, 309);
			this->digit1->Name = L"digit1";
			this->digit1->Size = System::Drawing::Size(70, 70);
			this->digit1->TabIndex = 1;
			this->digit1->Text = L"1";
			this->digit1->UseVisualStyleBackColor = true;
			this->digit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit2
			// 
			this->digit2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit2->Location = System::Drawing::Point(88, 309);
			this->digit2->Name = L"digit2";
			this->digit2->Size = System::Drawing::Size(70, 70);
			this->digit2->TabIndex = 1;
			this->digit2->Text = L"2";
			this->digit2->UseVisualStyleBackColor = true;
			this->digit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit3
			// 
			this->digit3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit3->Location = System::Drawing::Point(164, 309);
			this->digit3->Name = L"digit3";
			this->digit3->Size = System::Drawing::Size(70, 70);
			this->digit3->TabIndex = 1;
			this->digit3->Text = L"3";
			this->digit3->UseVisualStyleBackColor = true;
			this->digit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// digit00
			// 
			this->digit00->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit00->Location = System::Drawing::Point(12, 385);
			this->digit00->Name = L"digit00";
			this->digit00->Size = System::Drawing::Size(70, 70);
			this->digit00->TabIndex = 1;
			this->digit00->Text = L"00";
			this->digit00->UseVisualStyleBackColor = true;
			this->digit00->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndecimal
			// 
			this->btndecimal->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndecimal->Location = System::Drawing::Point(88, 385);
			this->btndecimal->Name = L"btndecimal";
			this->btndecimal->Size = System::Drawing::Size(70, 70);
			this->btndecimal->TabIndex = 1;
			this->btndecimal->Text = L".";
			this->btndecimal->UseVisualStyleBackColor = true;
			this->btndecimal->Click += gcnew System::EventHandler(this, &MyForm::btndecimal_Click);
			// 
			// digit0
			// 
			this->digit0->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit0->Location = System::Drawing::Point(164, 385);
			this->digit0->Name = L"digit0";
			this->digit0->Size = System::Drawing::Size(70, 70);
			this->digit0->TabIndex = 1;
			this->digit0->Text = L"0";
			this->digit0->UseVisualStyleBackColor = true;
			this->digit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnequal
			// 
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(240, 385);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(70, 70);
			this->btnequal->TabIndex = 1;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnequal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(321, 464);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btnsubtract);
			this->Controls->Add(this->btnmultiply);
			this->Controls->Add(this->digit0);
			this->Controls->Add(this->btndecimal);
			this->Controls->Add(this->digit3);
			this->Controls->Add(this->digit2);
			this->Controls->Add(this->digit6);
			this->Controls->Add(this->digit5);
			this->Controls->Add(this->digit00);
			this->Controls->Add(this->digit9);
			this->Controls->Add(this->digit1);
			this->Controls->Add(this->digit8);
			this->Controls->Add(this->digit4);
			this->Controls->Add(this->btndivide);
			this->Controls->Add(this->digit7);
			this->Controls->Add(this->btndelete);
			this->Controls->Add(this->btnallclear);
			this->Controls->Add(this->txtdisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstdigit, seconddigit, result;
		String^ operators;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtdisplay->Text == "0")
	{
		txtdisplay->Text = Numbers->Text;
	}

	else
	{
		txtdisplay->Text = txtdisplay->Text + Numbers->Text;
	}
}

private: System::Void Enteroperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstdigit = Double::Parse(txtdisplay->Text);
	txtdisplay->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void btndecimal_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtdisplay->Text->Contains("."))
	{
		txtdisplay->Text = txtdisplay->Text + ".";
	}
}
private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {

	seconddigit = Double::Parse(txtdisplay->Text);
	if (operators == "+")
	{
		result = firstdigit + seconddigit;
		txtdisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "-")
	{
		result = firstdigit - seconddigit;
		txtdisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "*")
	{
		result = firstdigit * seconddigit;
		txtdisplay->Text = System::Convert::ToString(result);
	}

	else if (operators == "/")
	{
		result = firstdigit / seconddigit;
		txtdisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnallclear_Click(System::Object^ sender, System::EventArgs^ e) {

	txtdisplay->Text = "0";
}
private: System::Void btndelete_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtdisplay->Text->Length > 0)
	{
		txtdisplay->Text = txtdisplay->Text->Remove(txtdisplay->Text->Length - 1, 1);
	}

	if (txtdisplay->Text == "")
	{
		txtdisplay->Text = "0";
	}
}
};
}
