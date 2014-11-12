/******
*ohjelman nimi: harjoitus 16
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot naytölle.

*versio 1.0
*pvm: 12.11.2014
*/
#include <iostream>
using namespace std;
struct HNKT
{
	int kenka, posti;
	float matka;
	char etu[100], suku[100], osoite[100];
};
int main()
{
	HNKT henkilo;
	cout << "Etunimi? ";
	cin >> henkilo.etu;
	cout << "Sukunimi? ";
	cin >> henkilo.suku;
	cin.get();
	cout << "Osoite? ";
	cin.get(henkilo.osoite,100);
	cout << "Postinumero? ";
	cin >> henkilo.posti;
	cout << "Koulumatka? ";
	cin >> henkilo.matka;
	cout << "Kengannumero? ";
	cin >> henkilo.kenka;
	system("CLS");
	cout << "Nimi: " << henkilo.etu << " " << henkilo.suku << endl;
	cout <<"Osoite: " << henkilo.osoite << endl;
	cout <<"Postinumero: " << henkilo.posti << endl;
	cout <<"Koulumatka: " << henkilo.matka << endl;
	cout <<"Kengannumero: " << henkilo.kenka << endl;
}