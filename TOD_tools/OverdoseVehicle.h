#pragma once

#include "RigidBody.h"

class OverdoseVehicle : RigidBody
{
	float m_fLFspring;
	float m_fRFspring;
	float m_fLRspring;
	float m_fRRspring;
	float m_f88;
	float m_f8C;
	float m_f90;
	float m_f94;
	Vector4f m_vVelocity;
	float m_fSpringKoeff;
	float m_fSpringDamping;
	float m_fStiffness;
	float m_fRealMainBody_DefaultY;
	byte m_bIsBike[4];
	Vector4f m_vFrontPointVelocity;
	Vector4f m_vRearPointVelocity;
	Vector4f m_vFrontPointT;
	Vector4f m_vRearPointT;
	float m_fRollAngleT;
	float m_fTiltAngleSpeed;
	Entity* m_pGroundprobe;
	int field_108;
	int field_10C;
	int field_110;
	int field_114;
	int field_118;
	int field_11C;
	int field_120;
	int field_124;
	int field_128;
	int field_12C;
	int field_130;
	int field_134;
	int field_138;
	int field_13C;
	int field_140;
	int field_144;
	int field_148;
	int field_14C;
	int field_150;
	int field_154;
	int field_158;
	int field_15C;
	int field_160;
	float m_fWheelRadius;
	int* m_pDistList;
	int field_16C;
	int field_170;
	int field_174;
	int field_178;
	int* m_pCVList;
	int field_180;
	int field_184;
	int field_188;
	int field_18C;
	int* m_pCarContactList;
	int field_194;
	int field_198;
	int field_19C;
	int field_1A0;
	float m_fTilt;
	byte m_bIsOutOfBounds[4];
	float m_fAxleHeight;
	float m_fWidth;
	int m_nWheelMaterial_LeftRear;
	int field_1B8;
	byte m_bCppPropertiesInited[4];
	Entity* m_pRealWheel_LF;
	Entity* m_pRealWheel_LR;
	Entity* m_pRealWheel_RF;
	Entity* m_pRealWheel_RR;
	Entity* m_pRealmainbody;
	Entity* m_pDamagectrl;
	Vector4f m_vUnkVec_1;
	Vector4f m_vUnkVec_2;
	Vector4f m_vUnkVec_3;
	int field_208;
	int field_20C;
	int field_210;
	int field_214;
	int field_218;
	int field_21C;
	int field_220;
	int field_224;
	int field_228;
	int field_22C;
	int field_230;
	int field_234;
	int field_238;
	int field_23C;
	int field_240;
	int field_244;
	int field_248;
	int field_24C;
	int field_250;
	int field_254;
	int field_258;
	int field_25C;
	int field_260;
	int field_264;
	int field_268;
	int field_26C;
	int field_270;
	int field_274;
	int field_278;
	int field_27C;
	int field_280;
	int field_284;
	int field_288;
	int field_28C;
	int field_290;
	int field_294;
	int field_298;
	int field_29C;
	int field_2A0;
	int field_2A4;
	int field_2A8;
	int field_2AC;
	int field_2B0;
	int field_2B4;
	int field_2B8;
	int field_2BC;
	int field_2C0;
	int field_2C4;
	int field_2C8;
	int field_2CC;
	int field_2D0;
	int field_2D4;
	int field_2D8;
	int field_2DC;
	int field_2E0;
	int field_2E4;
	int field_2E8;
	int field_2EC;
	int field_2F0;
	int field_2F4;
	int field_2F8;
	int field_2FC;
	int field_300;
	int field_304;
	int field_308;
	int field_30C;
	int field_310;
	int field_314;
	int field_318;
	int field_31C;
	int field_320;
	int field_324;
	int field_328;
	int field_32C;
	int field_330;
	int field_334;
	int field_338;
	int field_33C;
	int field_340;
	int field_344;
	int field_348;
	int field_34C;
	int field_350;
	int field_354;
	int field_358;
	int field_35C;
	int field_360;
	int field_364;
	int field_368;
	int field_36C;
	int field_370;
	int field_374;
	int field_378;
	int field_37C;
	int field_380;
	int field_384;
	int field_388;
	int field_38C;
	int field_390;
	int field_394;
	int field_398;
	int field_39C;
	int field_3A0;
	int field_3A4;
	int field_3A8;
	int field_3AC;
	int field_3B0;
	int field_3B4;
	int field_3B8;
	int field_3BC;
	int field_3C0;
	int field_3C4;
	int field_3C8;
	int field_3CC;
	int field_3D0;
};

extern OverdoseVehicle* g_pOverdoseVehicle;

static_assert(sizeof(OverdoseVehicle) == 0x5A0, MESSAGE_WRONG_CLASS_SIZE("OverdoseVehicle"));