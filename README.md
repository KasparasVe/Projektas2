# Projektas2
**v1.1:**
* sukurta klasė Studentas
* sukurti konstruktoriai, setteriai ir getteriai
* pakoreguoti turimi metodai, kad veiktų su klasės Studentas tipo objektais
* atliktas spartos testas, lyginantis programos veikimo spartą, priklausomai, ar naudojama struktūra, ar klasė

<h3>REZULTATAI SU 1 000 000 STUDENTŲ FAILU:</h3>

**NAUDOJANT STRUKTŪRĄ:**<br>
Nuskaitymas užtruko: 5.72856 s<br>
Padalijimas užtruko: 0.186204 s<br>
Visas testo laikas: 5.95307 s<br>

**NAUDOJANT KLASĘ:**<br>
Nuskaitymas uztruko: 5.66867 s<br>
Padalijimas uztruko: 0.0965085 s<br>
Visas testo laikas: 5.7931 s<br>

**LAIKŲ SANTYKIAI:**<br>
Nuskaitymo laiko santykis (t_struct/t_class): 1.01057<br>
Padalijimo laiko santykis (t_struct/t_class): 1.92941<br>
Viso testo laiko santykis (t_struct/t_class): 1.02762<br>

**IŠVADOS:** nuskaitymo laikas reikšmingai nesiskiria, padalijimas beveik dvigubai greitesnis naudojant klasę.
