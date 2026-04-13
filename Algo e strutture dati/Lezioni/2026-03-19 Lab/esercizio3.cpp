struct Richiesta␍
{
    int id_;
    int prio_;
    Richiesta(int id, int prio) : id_(id) , prio_(prio){}
};

ool confrontaRichieste( Richiesta r1 , Richiesta r2)␍
{
    if(r1.id_ < r2.id_) {
        return true;
    }
}
