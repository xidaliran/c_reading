#ifndef _GAMERENDERPASS_H
#define _GAMERENDERPASS_H


/** 
 * Game object rendering passes. 
 * @author Jani Kajala (jani.kajala@helsinki.fi)
 */
class GameRenderPass
{
public:
	enum RenderPass
	{
		RENDERPASS_LEVEL_SOLID						= (1<<0),
		RENDERPASS_SHADOW_VOLUME					= (1<<1),
		RENDERPASS_SHADOW_FILLER					= (1<<2),
		RENDERPASS_CHARACTER_SOLID					= (1<<3),
		RENDERPASS_CHARACTER_TRANSPARENT			= (1<<4),
		RENDERPASS_DYNAMIC_OBJECT_SOLID				= RENDERPASS_CHARACTER_SOLID,
		RENDERPASS_DYNAMIC_OBJECT_TRANSPARENT		= RENDERPASS_CHARACTER_TRANSPARENT,
		RENDERPASS_WEAPON_SOLID						= RENDERPASS_CHARACTER_SOLID,
		RENDERPASS_WEAPON_TRANSPARENT				= RENDERPASS_CHARACTER_TRANSPARENT,
		RENDERPASS_PROJECTILE_SOLID					= RENDERPASS_CHARACTER_SOLID,
		RENDERPASS_PROJECTILE_TRANSPARENT			= RENDERPASS_CHARACTER_TRANSPARENT,
		RENDERPASS_LEVEL_TRANSPARENT				= RENDERPASS_CHARACTER_TRANSPARENT,
		RENDERPASS_FLARES							= (1<<5)
	};
};


#endif // _GAMERENDERPASS_H