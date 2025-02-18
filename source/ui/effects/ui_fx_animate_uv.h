#pragma once

#include "mcv_platform.h"
#include "ui/ui_effect.h"

namespace UI
{
  class CFXAnimateUV : public CEffect
  {
  public:
    void update(float dt) override;
	void stopUiFx();
	void changeSpeedUV(float x, float y);
	void setMinUV(VEC2 vector);
	void setMaxUV(VEC2 vector);

  private:
    VEC2 _speed = VEC2::Zero;

    friend class CParser;
  };
}
