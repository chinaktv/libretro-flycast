// drkPvr.cpp : Defines the entry point for the DLL application.
//

/*
	Plugin structure
	Interface
	SPG
	TA
	Renderer
*/

#include "spg.h"
#include "pvr_regs.h"
#include "Renderer_if.h"
#include "rend/CustomTexture.h"
#include "rend/TexCache.h"

void libPvr_Reset(bool hard)
{
   KillTex = true;
   Regs_Reset(hard);
   spg_Reset(hard);
}


s32 libPvr_Init(void)
{
   if (!spg_Init())
   {
      //failed
      return -1;
   }

	return 0;
}

//called when exiting from sh4 thread , from the new thread context (for any thread specific de init) :P
void libPvr_Term(void)
{
   custom_texture.Terminate();	// Avoid deadlock on exit (win32)
   rend_term();
   spg_Term();
}
