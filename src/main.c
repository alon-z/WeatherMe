#include <pebble.h>

Window *my_window;
static void load_main_window(Window *window);
static void unload_main_window(Window *window);

static void handle_init(void) {
	my_window = window_create();

  // Set handlers to manage the window
	window_set_window_handlers(my_window, (WindowHandlers) {
		.load = load_main_window,
		.unload = unload_main_window
	});
  
  window_stack_push(my_window, true);
}

static void handle_deinit(void) {
  window_destroy(my_window);
}

int main(void) {
  handle_init();
  app_event_loop();
  handle_deinit();
}

static void load_main_window(Window *window) {
	
	static TextLayer *s_time_layer;
  
}

static void unload_main_window(Window *window) {
	
	// Destroy TextLayer
  text_layer_destroy(s_time_layer);
  
}