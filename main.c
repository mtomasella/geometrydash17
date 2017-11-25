#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/allegro_font.h"
#include "allegro5/allegro_ttf.h"
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "funciones.h"

int main(int argc, char **argv){
 
	ini_var *variables = malloc (sizeof (ini_var));
	
	(variables -> display) = NULL;
	(variables -> event_queue) = NULL;
	(variables -> timer) = NULL;
	//ALLEGRO_BITMAP *bouncer = NULL;
	
	
	(variables -> fondoimg)   = NULL;//fondo
	(variables -> pisoimg)   = NULL;//piso
	(variables -> cuboimg)  = NULL;//cubo
	(variables -> enemigoimg)   = NULL;//enemigo
	(variables -> explosionimg)   = NULL;//explosion
	(variables -> bloqueimg)   = NULL;//bloque
	(variables -> muertofinimg)   = NULL; // muerto
	(variables -> monedaimg)   = NULL; // moneda
	(variables -> volverimg)  = NULL; // volver al menu
	
	
	(variables -> temajuego) = NULL;  
	(variables -> explosionsfx) = NULL;  
	(variables -> monedasfx) = NULL;
	
	
	// menu
	
	(variables -> fondomenuimg)   = NULL; // fondo menu
	(variables -> opcionesmenuimg)  = NULL; // opciones menu
	(variables -> font) = NULL;
	(variables -> font2) = NULL;
	(variables -> temamenu) = NULL;
	
	Inicializar (&variables);
	
	GameLoop (&variables);
	
	return 0;
}

//fprintf (stderr, "hasta aca anda \n");
