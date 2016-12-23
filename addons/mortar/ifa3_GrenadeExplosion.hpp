// Generated by unRap v1.06 by Kegetys

class ifa3_GrenadeExplosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};

	class GrenadeExp1
	{
		simulation = "particles";
		type = "ifa3_GrenadeExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};

	class MortarExp1
	{
		simulation = "particles";
		type = "MortarExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};

	class MortarSmoke1
	{
		simulation = "particles";
		type = "CloudBigDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class GrenadeBubbles
	{
		simulation = "particles";
		type = "GrenadeBubbles1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class MineWater1
	{
		simulation = "particles";
		type = "MineUnderwaterWaterPDM";
		enabled = "distToWater interpolate [-5.0001,-5,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

	class MineWave
	{
		simulation = "particles";
		type = "GrenadeWaveSmall";
		enabled = "(distToWater interpolate [-10.0001,-10,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
