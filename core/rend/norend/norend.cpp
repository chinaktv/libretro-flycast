
#include "hw/pvr/Renderer_if.h"

void rend_set_fb_scale(float x,float y) { }

struct norend : Renderer
{
	bool Init()
	{
		return true;
	}

	void Resize(int w, int h) { }
	void Term() { }


        bool Process(TA_context* ctx) { return true; }

        void DrawOSD() {  }

	bool Render()
	{
		return true;//!pvrrc.isRTT;
	}
};


Renderer* rend_norend() { return new norend(); }

u32 GetTexture(TSP tsp,TCW tcw) { return 0; }
