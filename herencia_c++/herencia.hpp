#include <iostream>

class Alienígena
{
    protected:
    int mortalidad; 
    int intelecto; 
    std::string planeta;
    public:
    Alienígena(int edad, int iq, char* p)
    {
        mortalidad = edad;
        intelecto = iq;
        planeta = p;
    }
    std::string comunicar();
    void crear(int duracion); 
};

class Sayayin : public Alienígena
{
    private:
    int nivel_poder;
    protected:
    float ki;
     Sayayin(int edad, int iq, char* p, float k) : Alienígena(edad, iq, p)
    {
        ki = k;
        nivel_poder = intelecto*ki/mortalidad;
    }
    // Determina si puede transformarse en una fase de super sayayin, basándose en atributo nivel_poder como métrica.
    bool super_sayayin(int fase); 
};

class homoSapiens : public Alienígena
{
    protected:
    int ego;
    int creatividad;
    public:
    homoSapiens(int edad, int iq, char *p, int e, int c) : Alienígena(edad, iq, p) 
    {
        int ego = e;
        int creatividad = c;
    }
    float calcular();
    void guerra();
};

class Wookie : public Alienígena
{
    protected:
    float fuerza_bruta;
    public:
    Wookie(int edad, int iq, char *p, float fuerza) : Alienígena(edad, iq, p)
    {
        fuerza_bruta = fuerza;
    }
    void atacar(Alienígena alien); // reduce la vida de 'alien'
    // alien.mortalidad = alien.mortalidad - fuerza bruta;
};