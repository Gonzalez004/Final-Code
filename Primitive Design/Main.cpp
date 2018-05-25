#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>

using namespace std;
int Screen_Width = 600;
int Screen_Height = 600;
int BallSize = 2;
float bouncer_x = 300;
float bouncer_y =300;
double t = 1;
int main() {
	ALLEGRO_DISPLAY *Display = NULL;
	ALLEGRO_EVENT_QUEUE *Event_Queue = NULL;
	ALLEGRO_BITMAP *Bouncer = NULL;
	al_init();
	al_init_primitives_addon();
	Display = al_create_display(Screen_Width, Screen_Height);
	
	Event_Queue = al_create_event_queue();
	al_register_event_source(Event_Queue, al_get_display_event_source(Display));
	al_clear_to_color(al_map_rgb_f(0, 0, 0));
	
		
		
		
		
		for (int i = 0; i < 30; i++) {
			al_draw_filled_triangle(300, 0 + (10 * i), 0 + (10 * i), 600 - (10 * i), 600 - (10 * i), 600 - (10 * i), al_map_rgb(0 + (20 * i), 0 + (20 * i), 0));
		}
		for (int i = 0; i < 10; i++) {
			//al_draw_filled_triangle(300 + (10 * i), 0 + (10 * i), 600 - (5 * i), 600 - (20 * i), 600 - (10 * i), 0 + (10 * i), al_map_rgb(0 + (20 * i), 0 + (20 * i), 0));
			al_draw_filled_triangle(300 + (10 * i), 0 + (10 * i), 600 - (10 * i), 600 - (10 * i), 600 - (10 * i), 0 + (10 * i), al_map_rgb(0 + (20 * i), 0 + (20 * i), 0));
		}
		for (int i = 0; i < 10; i++) {
			al_draw_filled_triangle(300 - (10 * i), 0 + (10 * i), 0 + (10 * i), 0 + (10 * i), 0 + (10 * i), 600 - (10 * i), al_map_rgb(0 + (20 * i), 0 + (20 * i), 0));
		}
	
		Bouncer = al_create_bitmap(BallSize, BallSize);
		while (true) {
		al_set_target_bitmap(Bouncer);
		al_clear_to_color(al_map_rgb(255, t, 255));
		al_set_target_bitmap(al_get_backbuffer(Display));
		t++;
		bouncer_x = 300 + 5 * (21 * cos(t) - 25 * cos(3.1*t));
		bouncer_y = 300 + 5 * (21 * sin(t) - 25 * sin(3.1*t));
		
			al_draw_bitmap(Bouncer, bouncer_x, bouncer_y, 0);
			al_draw_bitmap(Bouncer, bouncer_x+300, bouncer_y+300, 0);
			al_draw_bitmap(Bouncer, bouncer_x - 300, bouncer_y - 300, 0);
			al_draw_bitmap(Bouncer, bouncer_x - 300, bouncer_y + 300, 0);
			al_draw_bitmap(Bouncer, bouncer_x + 300, bouncer_y - 300, 0);
		
		al_flip_display();
	}
		al_destroy_bitmap(Bouncer);
		al_destroy_display(Display);
		al_destroy_event_queue(Event_Queue);
}
