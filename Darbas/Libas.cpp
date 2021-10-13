#include "Libas.h"
#include "Timer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::left;
using std::setprecision;
using std::sort;
using std::getline;
using std::vector;
using std::ifstream;
using std::stringstream;
using std::exception;





void pild(studentas& kint) {
    float sum = 0, vid = 0, n, med;
    int count = 0;

    cout << "Iveskite studento varda ir pavarde: ";
    cin >> kint.vardas >> kint.pavarde;

    cout << "Ar norite atsitiktinai generuoti pazymius? (Iveskite 't', jei taip, 'n' - jei ne): ";
    char ats;
    cin >> ats;
    while (cin.fail() || (ats != 't' && ats != 'n')) {
        cout << "Klaida! Iveskite raides 't' arba 'n'" << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> ats;
    }
    if (ats == 't') {
        cout << "Iveskite pazymiu skaiciu: ";
        int sk;
        
        tikrinimas(sk);
        for (int i = 0;i < sk;i++) {
            int x = rand() % 10 + 1;
            kint.nd.push_back(x);
            sum += kint.nd[i];
        }
        kint.egzam = rand() % 10 + 1;
        cout << "Ar galutini bala norite skaiciuoti pagal vidurki ar mediana? (Iveskite 'v', jei pagal vidurki, 'm' - pagal mediana):  ";
        cin >> kint.skaiciavimas;
        while (cin.fail() || (kint.skaiciavimas != 'v' && kint.skaiciavimas != 'm')) {
            cout << "Klaida! Iveskite raides 'v' arba 'm'" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin >> kint.skaiciavimas;
        }
        vid = sum / sk;
        med = mediana(kint.nd);
        kint.galutinisVid = vid * 0.4 + 0.6 * kint.egzam;
        kint.galutinisMed = med * 0.4 + 0.6 * kint.egzam;

    }
    else if (ats == 'n') {
        cout << "Iveskite pazymi, kai baigsite, iveskite bet kokia raide: " << endl;
        while (cin >> n) {
            kint.nd.push_back(n);
            sum += n;
            count++;
        }


        while (count == 0) {
            cout << "Klaida! Iveskite bent 1 pazymi" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            while (cin >> n) {
                kint.nd.push_back(n);
                sum += n;
                count++;
            }
        }

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        

        cout << "Iveskite egzamino bala: ";
        
        tikrinimas(kint.egzam);

        cout << "Ar galutini bala norite skaiciuoti pagal vidurki ar mediana? (Iveskite 'v', jei pagal vidurki, 'm' - pagal mediana):  ";
        cin >> kint.skaiciavimas;
        while (cin.fail() || (kint.skaiciavimas != 'v' && kint.skaiciavimas != 'm')) {
            cout << "Klaida! Iveskite raides 'v' arba 'm'" << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin >> kint.skaiciavimas;
        }
        
        vid = sum / count;
        med = mediana(kint.nd);

        kint.galutinisVid = vid * 0.4 + 0.6 * kint.egzam;
        kint.galutinisMed = med * 0.4 + 0.6 * kint.egzam;
    }
}

void printas(studentas& kin) {


    if (kin.skaiciavimas == 'v') {
        cout << setw(20) << left << kin.vardas << setw(20) << left << kin.pavarde << setw(20) << left << setprecision(3) << kin.galutinisVid << endl;
    }
    else
        cout << setw(20) << left << kin.vardas << setw(20) << left << kin.pavarde << setw(20) << left << setprecision(3) << kin.galutinisMed << endl;
}

float mediana(vector<float> vec) {
    typedef vector<float>::size_type vecSize;
    vecSize size = vec.size();
    if (size == 0)
        throw std::domain_error("Klaida! Negalima skaiciuoti medianos tusciam vektoriui");
    sort(vec.begin(), vec.end());
    vecSize vid = size / 2;
    return size % 2 == 0 ? (vec[vid] + vec[vid - 1]) / 2 : vec[vid];
}

void nuskaitymas(string read) {
    vector<string> sarasas;
    string eil;
    vector<studentas> grupe;


    ifstream failas(read);

    while (failas) {
        if (!failas.eof()) {
            std::getline(failas, eil);
            sarasas.push_back(eil);
        }
        else break;
    }
    failas.close();

    for (int i = 0; i < sarasas.size() - 1;i++) {
        studentas tempas;
        uzpildymas(tempas, sarasas[i]);
        grupe.push_back(tempas);

    }


}

void uzpildymas(studentas& k, string eilute) {
    string str = eilute;
    stringstream s(str);
    float sum = 0, vid, med;


    float nd1, nd2, nd3, nd4, nd5, nd6, nd7, nd8, nd9, nd10, nd11, nd12, nd13, nd14, nd15, egzam;
    s >> k.vardas >> k.pavarde >> nd1 >> nd2 >> nd3 >> nd4 >> nd5 >> nd6 >> nd7 >> nd8 >> nd9 >> nd10 >> nd11 >> nd12 >> nd13 >> nd14 >> nd15 >> k.egzam;
    k.nd.push_back(nd1);
    k.nd.push_back(nd2);
    k.nd.push_back(nd3);
    k.nd.push_back(nd4);
    k.nd.push_back(nd5);
    k.nd.push_back(nd6);
    k.nd.push_back(nd7);
    k.nd.push_back(nd8);
    k.nd.push_back(nd9);
    k.nd.push_back(nd10);
    k.nd.push_back(nd11);
    k.nd.push_back(nd12);
    k.nd.push_back(nd13);
    k.nd.push_back(nd14);
    k.nd.push_back(nd15);

    for (float p : k.nd) {
        sum += p;
    }


    vid = sum / k.nd.size();
    med = mediana(k.nd);

    k.galutinisVid = 0.4 * vid + 0.6 * k.egzam;
    k.galutinisMed = med * 0.4 + 0.6 * k.egzam;

}

bool mycompare(studentas a, studentas b) {
    return a.vardas.compare(b.vardas) < 0;
}

void printfile(studentas& stud) {
    cout << setw(20) << left << stud.vardas << setw(20) << left << stud.pavarde << setw(20) << left << setprecision(3) << stud.galutinisVid << setw(20) << left << setprecision(3) << stud.galutinisMed << endl;
}

void tikrinimas(int &a) {
    cin >> a;
    do {
        try {
            if (cin.fail()) { throw std::runtime_error("Bloga ivestis!!!\n"); }
        }
        catch (const std::runtime_error& e) {
            cout << e.what();
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Veskite is naujo: ";
            cin >> a;
        }
        
    }
    while (cin.fail() == true);
}


void create_file(string name, float sk) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 10);

    std::ofstream failas;
    failas.open(name);

    for (int i = 1;i < sk + 1;i++) {
        int nd1 = dist(mt);
        int nd2 = dist(mt);
        int nd3 = dist(mt);
        int nd4 = dist(mt);
        int nd5 = dist(mt);
        int egz = dist(mt);
        failas << "Vardas" << i << "    Pavarde" << i << "        " << setw(10) << left << nd1 << setw(10) << left << nd2 << setw(10) << left << nd3 << setw(10) << left << nd4 << setw(10) << left << nd5 << setw(10) << left << egz << "\n";
    }
    failas.close();

}
