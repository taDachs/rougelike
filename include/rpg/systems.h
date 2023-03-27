#pragma once

#include "rpg/components.h"
#include "rpg/ecs.h"
#include "rpg/map.h"
#include <SDL.h>
#include <glm/glm.hpp>

namespace rpg {

class MoveableSystem : public System
{
public:
  bool isApplicable(const Entity& entity) override;
  void update(const Entity& entity) override;
private:
  uint m_last_tick;
  uint m_tick_delay = 100;
};
}

