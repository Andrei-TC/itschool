#include <iostream>

using namespace std;

class Avion {
public:
	Avion() {
		producator = "Producator";
		model = "Model";
	}
	~Avion() = default;

	string getProducator() const {
		return producator;
	}

	void setProducator(string prod) {
		this->producator = prod;
	}
	string getModel() const {
		return model;
	}

	void setModel(string model) {
		this->model = model;
	}

	virtual void afiseazaDetalii() {
		cout << "Detalii despre avoin:" << endl;;
		cout << "Model: " << model << endl;
		cout << "Producator: " << producator << endl;
	}

private:
	string producator;
	string model;
};
class AvionMilitar : public Avion {
public:
	AvionMilitar() {
		setModel("Militar");
		setProducator("SpaceX");
	}

	string getUM() const {
		return unitateMilitara;
	}

	void setUM(string um) {
		this->unitateMilitara = um;
	}
private:
	string unitateMilitara;
};

class AvionLupta : public AvionMilitar {
public:
	AvionLupta() {
		setModel("X77c2z");
		setProducator("AirLine");
		numarRachete = 5;
	}
	int getNumarR() const {
		return numarRachete;
	}

	void setNumarR(int nr_r) {
		this->numarRachete = nr_r;
	}
	void afiseazaDetalii() override {
		cout << "Detalii despre avoin:" << endl;;
		cout << "Model: " << getModel() << endl;
		cout << "Producator: " << getProducator() << endl;
		cout << "Numar rachete: " << numarRachete << endl;
	}
private:
	int numarRachete;
};

class AvionVanatoare : public AvionLupta {
public:
	AvionVanatoare() {
		setModel("Alpha-C7");
		setProducator("USA-Mil");
		vitezaMaxima = "Mac-1";
	}
	string getVitMax() const {
		return vitezaMaxima;
	}

	void setVitMax(int vit_max) {
		this->vitezaMaxima = vit_max;
	}
	void afiseazaDetalii() override {
		cout << "Detalii despre avoin:" << endl;;
		cout << "Model: " << getModel() << endl;
		cout << "Producator: " << getProducator() << endl;
		cout << "Viteza maxima: " << vitezaMaxima << endl;
	}
private:
	string vitezaMaxima;
};

class Bombardier : public AvionLupta {
public:
	Bombardier() {
		setModel("Bomb91");
		setProducator("USA-Mil");
		capacitateBombe = 10;
	}
	int getCapBombe() const {
		return capacitateBombe;
	}

	void setCapBombe(int cap_bombe) {
		this->capacitateBombe = cap_bombe;
	}
	void afiseazaDetalii() override {
		cout << "Detalii despre avoin:" << endl;;
		cout << "Model: " << getModel() << endl;
		cout << "Producator: " << getProducator() << endl;
		cout << "Capacitate bombe: " << capacitateBombe << endl;
	}
private:
	int capacitateBombe;
};

class AvionTransport : public AvionMilitar {
public:
	AvionTransport() {
		setModel("Wizz88p1");
		setProducator("WizzAir");
		capacitateTransport = 553;
	}
	int getCapTransport() const {
		return capacitateTransport;
	}

	void setCapTransport(int cap_trans) {
		this->capacitateTransport = cap_trans;
	}
	void afiseazaDetalii() override {
		cout << "Detalii despre avoin:" << endl;;
		cout << "Model: " << getModel() << endl;
		cout << "Producator: " << getProducator() << endl;
		cout << "Capacitate transport: " << capacitateTransport << "kg" << endl;
	}

private:
	int capacitateTransport;
};

int main()
{
	Avion avion;
	AvionMilitar a;
	AvionLupta b;
	AvionVanatoare c;
	Bombardier d;
	AvionTransport e;
	cout << "Exista multe tipuri de avione cu multiple fuctionalitati.\nAlege unu din urmatoarele categorii:" << endl;
	cout << " 1.Militar \n 2.Luptator \n 3.De vanatoare \n 4.Bombardier \n 5.De transport" << endl;
	int input;
	cin >> input;
	string output;
	switch (input) {
	case 1:
		a.afiseazaDetalii();
		break;
	case 2:
		b.afiseazaDetalii();
		break;
	case 3:
		c.afiseazaDetalii();
		break;
	case 4:
		d.afiseazaDetalii();
		break;
	case 5:
		e.afiseazaDetalii();
		break;

	default:
		cout << "Introdu un numar valid!" << endl;
	}
}