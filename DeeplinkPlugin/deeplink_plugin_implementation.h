///
// © 2024-present https://github.com/cengiz-pz
//

#ifndef deeplink_plugin_implementation_h
#define deeplink_plugin_implementation_h

#include "core/object/object.h"
#include "core/object/class_db.h"


extern String const URL_OPENED_SIGNAL;


class DeeplinkPlugin : public Object {
	GDCLASS(DeeplinkPlugin, Object);

private:

	bool initialized;
	static DeeplinkPlugin* instance;

	static void _bind_methods();
	
public:
	
	Error initialize();

	static DeeplinkPlugin* get_singleton();
	
	DeeplinkPlugin();
	~DeeplinkPlugin();
};

#endif /* deeplink_plugin_implementation_h */
