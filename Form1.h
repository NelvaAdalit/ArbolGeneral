#pragma once
#include "ArbolGeneral.h"

namespace ArbolGeneral_D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		ArbolGeneral^ Arbol = gcnew ArbolGeneral();

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->groupBox2->SuspendLayout();
			   this->groupBox1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->groupBox2->Controls->Add(this->label4);
			   this->groupBox2->Controls->Add(this->textBox1);
			   this->groupBox2->Controls->Add(this->label5);
			   this->groupBox2->Controls->Add(this->label6);
			   this->groupBox2->Controls->Add(this->textBox2);
			   this->groupBox2->Controls->Add(this->textBox3);
			   this->groupBox2->Location = System::Drawing::Point(12, 12);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(298, 196);
			   this->groupBox2->TabIndex = 18;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"AREAS";
			   this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(39, 22);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(44, 13);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Nombre";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(104, 22);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(76, 20);
			   this->textBox1->TabIndex = 0;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(14, 110);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(69, 13);
			   this->label5->TabIndex = 5;
			   this->label5->Text = L"Responsable";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(39, 60);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(63, 13);
			   this->label6->TabIndex = 4;
			   this->label6->Text = L"Descripcion";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(104, 56);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(76, 20);
			   this->textBox2->TabIndex = 1;
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(104, 110);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(76, 20);
			   this->textBox3->TabIndex = 2;
			   // 
			   // listBox1
			   // 
			   this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->listBox1->FormattingEnabled = true;
			   this->listBox1->Location = System::Drawing::Point(536, 12);
			   this->listBox1->Name = L"listBox1";
			   this->listBox1->Size = System::Drawing::Size(481, 329);
			   this->listBox1->TabIndex = 19;
			   this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(14, 161);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(32, 13);
			   this->label8->TabIndex = 11;
			   this->label8->Text = L"Edad";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(62, 111);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(76, 20);
			   this->textBox5->TabIndex = 13;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(14, 111);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(23, 13);
			   this->label3->TabIndex = 7;
			   this->label3->Text = L"Rol";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(62, 161);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(76, 20);
			   this->textBox6->TabIndex = 14;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(3, 51);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(44, 13);
			   this->label2->TabIndex = 6;
			   this->label2->Text = L"Nombre";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(6, 220);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(42, 13);
			   this->label7->TabIndex = 10;
			   this->label7->Text = L"Genero";
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(75, 220);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(100, 20);
			   this->textBox7->TabIndex = 8;
			   // 
			   // textBox8
			   // 
			   this->textBox8->Location = System::Drawing::Point(62, 48);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(76, 20);
			   this->textBox8->TabIndex = 9;
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->groupBox1->Controls->Add(this->label7);
			   this->groupBox1->Controls->Add(this->textBox7);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->textBox5);
			   this->groupBox1->Controls->Add(this->label8);
			   this->groupBox1->Controls->Add(this->textBox6);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->textBox8);
			   this->groupBox1->Location = System::Drawing::Point(316, 12);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(197, 268);
			   this->groupBox1->TabIndex = 17;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"ELEMENTOS AREA";
			   this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->button1->Location = System::Drawing::Point(44, 225);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(148, 27);
			   this->button1->TabIndex = 16;
			   this->button1->Text = L"AGREGAR AREA";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->button2->Location = System::Drawing::Point(303, 305);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(175, 27);
			   this->button2->TabIndex = 20;
			   this->button2->Text = L"AGREGAR ELEMENTO AREA";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->ClientSize = System::Drawing::Size(1029, 420);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->listBox1);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->button1);
			   this->Name = L"Form1";
			   this->Text = L"Form1";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void InsertRaiz_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void InsertHijo_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void EliminarHijo_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void Pre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void Entre_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}

	private: System::Void Post_Orden_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Lógica para carga del formulario
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Agregar Producto
		String^ nombre = textBox8->Text;
		String^ ROL = textBox5->Text;
		String^ EDAD = textBox6->Text;
		String^ GENERO = textBox7->Text;

		// Crear un nodo para representar el producto
		TNodoArbol^ AREA = gcnew TNodoArbol(nombre + " - AREA");
		TNodoArbol^ detalles = gcnew TNodoArbol("Detalles:");
		TNodoArbol^ ROLNodo = gcnew TNodoArbol("ROL: " + ROL);
		TNodoArbol^ EDADNodo = gcnew TNodoArbol("EDAD: " + EDAD);
		TNodoArbol^ precioNodo = gcnew TNodoArbol("GENERO: " + GENERO);

		// Insertar los detalles como hijos del nodo producto
		Arbol->Insertar(detalles, AREA);
		Arbol->Insertar(ROLNodo, detalles);
		Arbol->Insertar(EDADNodo, detalles);
		Arbol->Insertar(precioNodo, detalles);

		// Insertar el producto en el árbol
		Arbol->InsertarRaiz(AREA);

		Arbol->buscar(AREA, nombre);
		Arbol->Eliminar(AREA,nombre);
		

		// Construir la representación con saltos de línea
		String^ representacion = "AREA: " + nombre + "\n";
		representacion += "- ROL ELEMENTO: " + ROL + "\n";
		representacion += "- EDAD: " + EDAD + "\n";
		representacion += "- GENERO: " + GENERO;

		// Mostrar en el listBox1 el árbol completo
		listBox1->Items->Add(representacion);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Agregar Receta
		String^ nombre = textBox1->Text;
		String^ descripcionArea = textBox2->Text;
		String^ responsable = textBox3->Text;

		// Crear un nodo para representar la receta
		TNodoArbol^ AREAS = gcnew TNodoArbol(nombre + " - AREA:");
		TNodoArbol^ detalles = gcnew TNodoArbol(" - DESCRIPCION:");
		TNodoArbol^ DescripcionArea = gcnew TNodoArbol(" - DESCRIPCION:" + descripcionArea);
		TNodoArbol^ responsableNodo = gcnew TNodoArbol(" - RESPONSABLE: " + responsable);

		// Insertar los detalles como hijos del nodo receta
		Arbol->Insertar(detalles, AREAS);
		Arbol->Insertar(DescripcionArea, detalles);
		Arbol->Insertar(responsableNodo, detalles);

		// Insertar la receta en el árbol
		Arbol->InsertarRaiz(AREAS);

		// Construir la representación con saltos de línea
		String^ representacion = "AREA: " + nombre + "\n";
		representacion += "- DESCRIPCION:\n" + descripcionArea + "\n";
		representacion += "- RESPONSABLE:\n" + responsable;

		// Mostrar en el listBox1 el árbol completo
		listBox1->Items->Add(representacion);
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}

