# Projektas2
**v1.1:**
* sukurta klasė Studentas
* sukurti konstruktoriai, setteriai ir getteriai
* pakoreguoti turimi metodai, kad veiktų su klasės Studentas tipo objektais
* atliktas spartos testas, lyginantis programos veikimo spartą, priklausomai, ar naudojama struktūra, ar klasė

<h3>/O2 REZULTATAI SU 1 000 000 STUDENTŲ FAILU:</h3>

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

**IŠVADOS:** naudojant /O2 nuskaitymo laikas reikšmingai nesiskiria, padalijimas beveik dvigubai greitesnis naudojant klasę.

<h3>/O1 REZULTATAI SU 1 000 000 STUDENTŲ FAILU:</h3>

**NAUDOJANT STRUKTŪRĄ:**<br>
Nuskaitymas uztruko: 6.81367 s<br>
Padalijimas uztruko: 0.2555 s<br>
Visas testo laikas: 7.11995 s<br>

**NAUDOJANT KLASĘ:**<br>
Nuskaitymas uztruko: 6.42794 s<br>
Padalijimas uztruko: 0.146075 s<br>
Visas testo laikas: 6.60349 s<br>

**LAIKŲ SANTYKIAI:**<br>
Nuskaitymo santykis (t_struct/t_class): 1.06001<br>
Padalijimo santykis (t_struct/t_class): 1.7491<br>
Viso testo laiko santykis (t_struct/t_class): 1.07821<br>

**IŠVADOS:** naudojant /O1 programa veikia lėčiau, nuskaitymo laikas reikšmingai nesiskiria, padalijimas greitesnis naudojant klasę, bet nuskaitymo laiko santykis mažesnis negu naudojant /O2.
