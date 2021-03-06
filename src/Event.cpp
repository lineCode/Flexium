#include <Flexium/Event.hpp>

namespace flx {

	World * Event::getWorld() {
		return world;
	}

	void Event::setWorld(World * w) {
		world = w;
	}

	void Event::trigger() {
		onTrigger();
	}

	void Event::trigger(World * w) {
		setWorld(w);
		trigger();
	}

	void Event::onTrigger(World * w) {
		setWorld(w);
		trigger();
	}

}