
#ifndef PERSO_H_
#define PERSO_H_

typedef struct 
{
int a;
}Personne;



void init (Personne * p, int numperso);
void initPerso(Personne *p);
void afficherPerso(Personne p, SDL_Surface * screen);
void deplacerPerso (Personne *p);
void animerPerso (Personne* p);
void saut (Personne* p);

#endif


