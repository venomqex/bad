#include "Head.h"
#include "CS2_SDK.h"
const float Flake_Version = 5.0;//程序版本
const string Flake_ReleaseDate = "TR[2024-12-31 12:02]";//程序发布日期时间
namespace Control_Var//套用到菜单的调试变量 (例如功能开关)
{
	EasyGUI::EasyGUI GUI_VAR; EasyGUI::EasyGUI_IO GUI_IO; BOOL Menu_Open = true; string Preset_Folder = "RPr";//菜单初始化变量
	//----------------------------------------------------------------------------------------------
	BOOL UI_Legit_Aimbot = 0;
	int UI_Legit_Aimbot_Key = 0;
	BOOL UI_Legit_Aimbot_JudgingWall = 0;
	BOOL UI_Legit_Aimbot_RemoveRecoil = 0;
	BOOL UI_Legit_Aimbot_TriggerOnAim = 0;
	BOOL UI_Legit_Aimbot_AutoShoot = 0;
	BOOL UI_Legit_Aimbot_AutoStop = 0;
	int UI_Legit_Aimbot_AutoShootDelay = 0;
	BOOL UI_Legit_AdaptiveAimbot = 0;
	BOOL UI_Legit_Armory_ShowAimbotRange = 0;
	BOOL UI_Legit_Armory_BodyAim_PISTOL = 0;
	int UI_Legit_Armory_Range_PISTOL = 0;
	float UI_Legit_Armory_Smooth_PISTOL = 0;
	BOOL UI_Legit_Armory_BodyAim_RIFLE = 0;
	int UI_Legit_Armory_Range_RIFLE = 0;
	float UI_Legit_Armory_Smooth_RIFLE = 0;
	BOOL UI_Legit_Armory_BodyAim_SNIPER = 0;
	int UI_Legit_Armory_Range_SNIPER = 0;
	float UI_Legit_Armory_Smooth_SNIPER = 0;
	BOOL UI_Legit_Triggerbot = 0;
	int UI_Legit_Triggerbot_Key = 0;
	BOOL UI_Legit_Triggerbot_AnyTarget = 0;
	int UI_Legit_Triggerbot_ShootDelay = 1;
	int UI_Legit_Triggerbot_ShootDuration = 1;
	BOOL UI_Legit_PreciseAim = 0;
	float UI_Legit_PreciseAim_DefaultSensitivity = 0;
	float UI_Legit_PreciseAim_EnableSensitivity = 0;
	BOOL UI_Legit_RemoveRecoil = 0;
	BOOL UI_Legit_RemoveRecoil_HorizontalRepair = 0;
	int UI_Legit_RemoveRecoil_StartBullet = 1;
	BOOL UI_Legit_Backtracking = 0;
	int UI_Legit_Backtracking_MaximumTime = 0;
	BOOL UI_Visual_ESP = 0;
	int UI_Visual_ESP_Key = 0;
	BOOL UI_Visual_ESP_Box = 0;
	BOOL UI_Visual_ESP_Health = 0;
	BOOL UI_Visual_ESP_ActiveWeapon = 0;
	BOOL UI_Visual_ESP_Line = 0;
	BOOL UI_Visual_ESP_Skeleton = 0;
	BOOL UI_Visual_ESP_HeadDot = 0;
	BOOL UI_Visual_ESP_State = 0;
	BOOL UI_Visual_ESP_Name = 0;
	BOOL UI_Visual_ESP_Drops = 0;
	BOOL UI_Visual_ESP_OutFOV = 0;
	int UI_Visual_ESP_OutFOV_Size = 20;
	int UI_Visual_ESP_OutFOV_Radius = 0;
	BOOL UI_Visual_ESP_CustomColor = 0;
	Variable::Vector4 UI_Visual_ESP_CustomColor_Color = { 255,255,255,255 };
	int UI_Visual_ESP_DrawDelay = 1;
	BOOL UI_Visual_Radar = 0;
	BOOL UI_Visual_Radar_FollowAngle = 0;
	float UI_Visual_Radar_Range = 0.2;
	int UI_Visual_Radar_Size = 150;
	int UI_Visual_Radar_Alpha = 255;
	Variable::Vector2 UI_Visual_Radar_Pos = { 30, 30 };
	BOOL UI_Misc_BunnyHop = 0;
	BOOL UI_Misc_HitSound = 0;
	int UI_Misc_HitSound_Tone = 10;
	int	UI_Misc_HitSound_Length = 10;
	BOOL UI_Visual_HitMark = 0;
	BOOL UI_Visual_HitMark_Damage = 0;
	int UI_Visual_HitMark_Range = 3;
	int UI_Visual_HitMark_Length = 3;
	BOOL UI_Misc_AutoKnife = 0;
	BOOL UI_Misc_AutoTaser = 0;
	int UI_Misc_AutoKnife_Key = 0;
	int UI_Misc_AutoTaser_Key = 0;
	BOOL UI_Misc_Watermark = 1;
	BOOL UI_Misc_SniperCrosshair = 0;
	BOOL UI_Misc_TeamCheck = 1;
	BOOL UI_Misc_LockGameWindow = 0;
	BOOL UI_Debug_ShowDebugWindow = 0;
	BOOL UI_Misc_Sonar = 0;
	int UI_Misc_Sonar_Key = 0;
	int UI_Misc_Sonar_Range_Far = 500;
	int UI_Misc_Sonar_Range_Near = 0;
	int UI_Setting_MenuKey = 45;
	BOOL UI_Setting_CustomColor = 0;
	Variable::Vector4 UI_Setting_MainColor = { 255,255,255,250 };
	Variable::Vector4 UI_Visual_HitMark_Color = { 255,255,255 };
	int UI_Visual_HitMark_Thickness = 1;
	BOOL UI_Legit_Triggerbot_ShootWhenAccurate = 0;
	BOOL UI_Misc_AntiAFKKick = 0;
	BOOL UI_Legit_MagnetAim = 0;
	float UI_Legit_MagnetAim_Smooth = 0;
	float UI_Legit_AdaptiveAimbot_InitialSmooth = 0;
	int UI_Misc_SniperCrosshair_Size = 10;
	BOOL UI_Spoof_Spoof = 0;
	BOOL UI_Spoof_AimbotTeam = 0;
	int UI_Spoof_AimbotTeam_Key = 0;
	float UI_Spoof_AimbotTeam_Smooth = 0;
	BOOL UI_Spoof_IncreaseRecoil = 0;
	int UI_Spoof_IncreaseRecoil_Value = 50;
	BOOL UI_Spoof_DropC4 = 0;
	BOOL UI_Spoof_FakeAntiAim = 0;
	int UI_Spoof_FakeAntiAim_Key = 0;
	BOOL UI_Spoof_KillDropSniper = 0;
	float UI_Setting_MenuAnimation = 4;
	BOOL UI_Visual_HitMark_KillEffect = 0;
	int UI_Visual_HitMark_KillEffect_Quantity = 10;
	int UI_Visual_HitMark_KillEffect_Range = 10;
	int UI_Visual_ESP_Skeleton_Thickness = 1;
	BOOL UI_Misc_ByPassOBS = 0;
	BOOL UI_Misc_SavePerformance = 0;
	BOOL UI_Legit_Aimbot_AutoScope = 0;
	BOOL UI_Misc_NightMode = 0;
	int UI_Misc_NightMode_Alpha = 100;
	BOOL UI_Spoof_LearnPlayer = 0;
	int UI_Spoof_LearnPlayer_Key = 0;
	BOOL UI_Misc_AutoPeek = 0;
	int UI_Misc_AutoPeek_Key = 0;
	BOOL UI_Spoof_FakeRageBot = 0;
	int UI_Spoof_FakeRageBot_Key = 0;
	int UI_Spoof_FakeRageBot_Target = 0;
	BOOL UI_Misc_QuickStop = 0;
	string UI_Setting_MenuFont = "";
	int UI_Setting_MenuFontSize = 0;
	BOOL UI_Misc_AutoKillCeasefire = 0;
	BOOL UI_Misc_CursorESP = 0;
	int UI_Misc_CursorESP_Key = 0;
	BOOL UI_Legit_Armory_HitSiteParser = 0;
	int UI_Visual_ESP_DrawAlpha = 255;
	BOOL UI_Legit_Armory_BodyAim_SHOTGUN = 0;
	int UI_Legit_Armory_Range_SHOTGUN = 0;
	float UI_Legit_Armory_Smooth_SHOTGUN = 0;
	int UI_Legit_Armory_TriggerDistance_SHOTGUN = 100;
	int UI_Legit_MagnetAim_Range = 0;
	int UI_Legit_Backtracking_MinimumTime = 0;
	int UI_Legit_RemoveRecoil_Sensitive = 0;
	BOOL UI_Visual_HitMark_CustomColor = 0;
	int UI_Legit_Aimbot_AutoShootHitChance = 0;
	BOOL UI_Legit_MagnetAim_OnlyHeadLine = 0;
	BOOL UI_Misc_WalkingBot = 0;
	int UI_Misc_WalkingBot_Map = 0;
	BOOL UI_Misc_MouseLowSensitivity = 0;
	BOOL UI_Spoof_StepOnHead = 0;
	//----------------------------------------------------------------------------------------------
	void CreatePreset(string FileName = "") noexcept { if (FileName != "")System::Create_File(Preset_Folder + "\\" + FileName + ".cfg"); }//创建特定预设
	void DeletePreset(string FileName = "") noexcept { System::Delete_File(Preset_Folder + "\\" + FileName + ".cfg"); }//删除特定预设
	void SavePreset(string FileName = "") noexcept//保存特定预设
	{
		System::Set_File(Preset_Folder + "\\" + FileName + ".cfg",
			to_string(UI_Legit_Aimbot) + "\n" +
			to_string(UI_Legit_Aimbot_Key) + "\n" +
			to_string(UI_Legit_Aimbot_JudgingWall) + "\n" +
			to_string(UI_Legit_Aimbot_RemoveRecoil) + "\n" +
			to_string(UI_Legit_Aimbot_TriggerOnAim) + "\n" +
			to_string(UI_Legit_Aimbot_AutoShoot) + "\n" +
			to_string(UI_Legit_Aimbot_AutoStop) + "\n" +
			to_string(UI_Legit_Aimbot_AutoShootDelay) + "\n" +
			to_string(UI_Legit_AdaptiveAimbot) + "\n" +
			to_string(UI_Legit_Armory_ShowAimbotRange) + "\n" +
			to_string(UI_Legit_Armory_BodyAim_PISTOL) + "\n" +
			to_string(UI_Legit_Armory_Range_PISTOL) + "\n" +
			to_string(UI_Legit_Armory_Smooth_PISTOL) + "\n" +
			to_string(UI_Legit_Armory_BodyAim_RIFLE) + "\n" +
			to_string(UI_Legit_Armory_Range_RIFLE) + "\n" +
			to_string(UI_Legit_Armory_Smooth_RIFLE) + "\n" +
			to_string(UI_Legit_Armory_BodyAim_SNIPER) + "\n" +
			to_string(UI_Legit_Armory_Range_SNIPER) + "\n" +
			to_string(UI_Legit_Armory_Smooth_SNIPER) + "\n" +
			to_string(UI_Legit_Triggerbot) + "\n" +
			to_string(UI_Legit_Triggerbot_Key) + "\n" +
			to_string(UI_Legit_Triggerbot_AnyTarget) + "\n" +
			to_string(UI_Legit_Triggerbot_ShootDelay) + "\n" +
			to_string(UI_Legit_Triggerbot_ShootDuration) + "\n" +
			to_string(UI_Legit_PreciseAim) + "\n" +
			to_string(UI_Legit_PreciseAim_DefaultSensitivity) + "\n" +
			to_string(UI_Legit_PreciseAim_EnableSensitivity) + "\n" +
			to_string(UI_Legit_RemoveRecoil) + "\n" +
			to_string(UI_Legit_RemoveRecoil_HorizontalRepair) + "\n" +
			to_string(UI_Legit_RemoveRecoil_StartBullet) + "\n" +
			to_string(UI_Legit_Backtracking) + "\n" +
			to_string(UI_Legit_Backtracking_MaximumTime) + "\n" +
			to_string(UI_Visual_ESP) + "\n" +
			to_string(UI_Visual_ESP_Key) + "\n" +
			to_string(UI_Visual_ESP_Box) + "\n" +
			to_string(UI_Visual_ESP_Health) + "\n" +
			to_string(UI_Visual_ESP_ActiveWeapon) + "\n" +
			to_string(UI_Visual_ESP_Line) + "\n" +
			to_string(UI_Visual_ESP_Skeleton) + "\n" +
			to_string(UI_Visual_ESP_HeadDot) + "\n" +
			to_string(UI_Visual_ESP_State) + "\n" +
			to_string(UI_Visual_ESP_Name) + "\n" +
			to_string(UI_Visual_ESP_Drops) + "\n" +
			to_string(UI_Visual_ESP_OutFOV) + "\n" +
			to_string(UI_Visual_ESP_OutFOV_Size) + "\n" +
			to_string(UI_Visual_ESP_OutFOV_Radius) + "\n" +
			to_string(UI_Visual_ESP_CustomColor) + "\n" +
			to_string(UI_Visual_ESP_CustomColor_Color.r) + "\n" +
			to_string(UI_Visual_ESP_CustomColor_Color.g) + "\n" +
			to_string(UI_Visual_ESP_CustomColor_Color.b) + "\n" +
			to_string(UI_Visual_ESP_CustomColor_Color.a) + "\n" +
			to_string(UI_Visual_ESP_DrawDelay) + "\n" +
			to_string(UI_Visual_Radar) + "\n" +
			to_string(UI_Visual_Radar_FollowAngle) + "\n" +
			to_string(UI_Visual_Radar_Range) + "\n" +
			to_string(UI_Visual_Radar_Size) + "\n" +
			to_string(UI_Visual_Radar_Alpha) + "\n" +
			to_string(UI_Visual_Radar_Pos.x) + "\n" +
			to_string(UI_Visual_Radar_Pos.y) + "\n" +
			to_string(UI_Misc_BunnyHop) + "\n" +
			to_string(UI_Misc_HitSound) + "\n" +
			to_string(UI_Misc_HitSound_Tone) + "\n" +
			to_string(UI_Misc_HitSound_Length) + "\n" +
			to_string(UI_Visual_HitMark) + "\n" +
			to_string(UI_Visual_HitMark_Damage) + "\n" +
			to_string(UI_Visual_HitMark_Range) + "\n" +
			to_string(UI_Visual_HitMark_Length) + "\n" +
			to_string(UI_Misc_AutoKnife) + "\n" +
			to_string(UI_Misc_AutoTaser) + "\n" +
			to_string(UI_Misc_AutoKnife_Key) + "\n" +
			to_string(UI_Misc_AutoTaser_Key) + "\n" +
			to_string(UI_Misc_Watermark) + "\n" +
			to_string(UI_Misc_SniperCrosshair) + "\n" +
			to_string(UI_Misc_TeamCheck) + "\n" +
			to_string(UI_Misc_LockGameWindow) + "\n" +
			to_string(UI_Debug_ShowDebugWindow) + "\n" +
			to_string(UI_Misc_Sonar) + "\n" +
			to_string(UI_Misc_Sonar_Key) + "\n" +
			to_string(UI_Misc_Sonar_Range_Far) + "\n" +
			to_string(UI_Misc_Sonar_Range_Near) + "\n" +
			to_string(UI_Setting_MenuKey) + "\n" +
			to_string(UI_Setting_CustomColor) + "\n" +
			to_string(UI_Setting_MainColor.r) + "\n" +
			to_string(UI_Setting_MainColor.g) + "\n" +
			to_string(UI_Setting_MainColor.b) + "\n" +
			to_string(UI_Setting_MainColor.a) + "\n" +
			to_string(UI_Visual_HitMark_Color.r) + "\n" +
			to_string(UI_Visual_HitMark_Color.g) + "\n" +
			to_string(UI_Visual_HitMark_Color.b) + "\n" +
			to_string(UI_Visual_HitMark_Thickness) + "\n" +
			to_string(UI_Legit_Triggerbot_ShootWhenAccurate) + "\n" +
			to_string(UI_Misc_AntiAFKKick) + "\n" +
			to_string(UI_Legit_MagnetAim) + "\n" +
			to_string(UI_Legit_MagnetAim_Smooth) + "\n" +
			to_string(UI_Legit_AdaptiveAimbot_InitialSmooth) + "\n" +
			to_string(UI_Misc_SniperCrosshair_Size) + "\n" +
			to_string(UI_Spoof_Spoof) + "\n" +
			to_string(UI_Spoof_AimbotTeam) + "\n" +
			to_string(UI_Spoof_AimbotTeam_Key) + "\n" +
			to_string(UI_Spoof_AimbotTeam_Smooth) + "\n" +
			to_string(UI_Spoof_IncreaseRecoil) + "\n" +
			to_string(UI_Spoof_IncreaseRecoil_Value) + "\n" +
			to_string(UI_Spoof_DropC4) + "\n" +
			to_string(UI_Spoof_FakeAntiAim) + "\n" +
			to_string(UI_Spoof_FakeAntiAim_Key) + "\n" +
			to_string(UI_Spoof_KillDropSniper) + "\n" +
			to_string(UI_Setting_MenuAnimation) + "\n" +
			to_string(UI_Visual_HitMark_KillEffect) + "\n" +
			to_string(UI_Visual_HitMark_KillEffect_Quantity) + "\n" +
			to_string(UI_Visual_HitMark_KillEffect_Range) + "\n" +
			to_string(UI_Visual_ESP_Skeleton_Thickness) + "\n" +
			to_string(UI_Misc_ByPassOBS) + "\n" +
			to_string(UI_Misc_SavePerformance) + "\n" +
			to_string(UI_Legit_Aimbot_AutoScope) + "\n" +
			to_string(UI_Misc_NightMode) + "\n" +
			to_string(UI_Misc_NightMode_Alpha) + "\n" +
			to_string(UI_Spoof_LearnPlayer) + "\n" +
			to_string(UI_Spoof_LearnPlayer_Key) + "\n" +
			to_string(UI_Misc_AutoPeek) + "\n" +
			to_string(UI_Misc_AutoPeek_Key) + "\n" +
			to_string(UI_Spoof_FakeRageBot) + "\n" +
			to_string(UI_Spoof_FakeRageBot_Key) + "\n" +
			to_string(UI_Spoof_FakeRageBot_Target) + "\n" +
			to_string(UI_Misc_QuickStop) + "\n" +
			UI_Setting_MenuFont + "\n" +
			to_string(UI_Setting_MenuFontSize) + "\n" +
			to_string(UI_Misc_AutoKillCeasefire) + "\n" +
			to_string(UI_Misc_CursorESP) + "\n" +
			to_string(UI_Misc_CursorESP_Key) + "\n" +
			to_string(UI_Legit_Armory_HitSiteParser) + "\n" +
			to_string(UI_Visual_ESP_DrawAlpha) + "\n" +
			to_string(UI_Legit_Armory_BodyAim_SHOTGUN) + "\n" +
			to_string(UI_Legit_Armory_Range_SHOTGUN) + "\n" +
			to_string(UI_Legit_Armory_Smooth_SHOTGUN) + "\n" +
			to_string(UI_Legit_Armory_TriggerDistance_SHOTGUN) + "\n" +
			to_string(UI_Legit_MagnetAim_Range) + "\n" +
			to_string(UI_Legit_Backtracking_MinimumTime) + "\n" +
			to_string(UI_Legit_RemoveRecoil_Sensitive) + "\n" +
			to_string(UI_Visual_HitMark_CustomColor) + "\n" +
			to_string(UI_Legit_Aimbot_AutoShootHitChance) + "\n" +
			to_string(UI_Legit_MagnetAim_OnlyHeadLine) + "\n" +
			to_string(UI_Misc_WalkingBot) + "\n" +
			to_string(UI_Misc_WalkingBot_Map) + "\n" +
			to_string(UI_Misc_MouseLowSensitivity) + "\n" +
			to_string(UI_Spoof_StepOnHead) + "\n"
		);
	}
	void LoadPreset(string FileName = "") noexcept//加载特定预设
	{
		FileName = Preset_Folder + "\\" + FileName + ".cfg"; if (System::Get_File(FileName, 1) == "")return;//不加载空配置
		UI_Legit_Aimbot = Variable::string_int_(System::Get_File(FileName, 1));
		UI_Legit_Aimbot_Key = Variable::string_int_(System::Get_File(FileName, 2));
		UI_Legit_Aimbot_JudgingWall = Variable::string_int_(System::Get_File(FileName, 3));
		UI_Legit_Aimbot_RemoveRecoil = Variable::string_int_(System::Get_File(FileName, 4));
		UI_Legit_Aimbot_TriggerOnAim = Variable::string_int_(System::Get_File(FileName, 5));
		UI_Legit_Aimbot_AutoShoot = Variable::string_int_(System::Get_File(FileName, 6));
		UI_Legit_Aimbot_AutoStop = Variable::string_int_(System::Get_File(FileName, 7));
		UI_Legit_Aimbot_AutoShootDelay = Variable::string_int_(System::Get_File(FileName, 8));
		UI_Legit_AdaptiveAimbot = Variable::string_int_(System::Get_File(FileName, 9));
		UI_Legit_Armory_ShowAimbotRange = Variable::string_int_(System::Get_File(FileName, 10));
		UI_Legit_Armory_BodyAim_PISTOL = Variable::string_int_(System::Get_File(FileName, 11));
		UI_Legit_Armory_Range_PISTOL = Variable::string_int_(System::Get_File(FileName, 12));
		UI_Legit_Armory_Smooth_PISTOL = Variable::string_float_(System::Get_File(FileName, 13));
		UI_Legit_Armory_BodyAim_RIFLE = Variable::string_int_(System::Get_File(FileName, 14));
		UI_Legit_Armory_Range_RIFLE = Variable::string_int_(System::Get_File(FileName, 15));
		UI_Legit_Armory_Smooth_RIFLE = Variable::string_float_(System::Get_File(FileName, 16));
		UI_Legit_Armory_BodyAim_SNIPER = Variable::string_int_(System::Get_File(FileName, 17));
		UI_Legit_Armory_Range_SNIPER = Variable::string_int_(System::Get_File(FileName, 18));
		UI_Legit_Armory_Smooth_SNIPER = Variable::string_float_(System::Get_File(FileName, 19));
		UI_Legit_Triggerbot = Variable::string_int_(System::Get_File(FileName, 20));
		UI_Legit_Triggerbot_Key = Variable::string_int_(System::Get_File(FileName, 21));
		UI_Legit_Triggerbot_AnyTarget = Variable::string_int_(System::Get_File(FileName, 22));
		UI_Legit_Triggerbot_ShootDelay = Variable::string_int_(System::Get_File(FileName, 23));
		UI_Legit_Triggerbot_ShootDuration = Variable::string_int_(System::Get_File(FileName, 24));
		UI_Legit_PreciseAim = Variable::string_int_(System::Get_File(FileName, 25));
		UI_Legit_PreciseAim_DefaultSensitivity = Variable::string_float_(System::Get_File(FileName, 26));
		UI_Legit_PreciseAim_EnableSensitivity = Variable::string_float_(System::Get_File(FileName, 27));
		UI_Legit_RemoveRecoil = Variable::string_int_(System::Get_File(FileName, 28));
		UI_Legit_RemoveRecoil_HorizontalRepair = Variable::string_int_(System::Get_File(FileName, 29));
		UI_Legit_RemoveRecoil_StartBullet = Variable::string_int_(System::Get_File(FileName, 30));
		UI_Legit_Backtracking = Variable::string_int_(System::Get_File(FileName, 31));
		UI_Legit_Backtracking_MaximumTime = Variable::string_int_(System::Get_File(FileName, 32));
		UI_Visual_ESP = Variable::string_int_(System::Get_File(FileName, 33));
		UI_Visual_ESP_Key = Variable::string_int_(System::Get_File(FileName, 34));
		UI_Visual_ESP_Box = Variable::string_int_(System::Get_File(FileName, 35));
		UI_Visual_ESP_Health = Variable::string_int_(System::Get_File(FileName, 36));
		UI_Visual_ESP_ActiveWeapon = Variable::string_int_(System::Get_File(FileName, 37));
		UI_Visual_ESP_Line = Variable::string_int_(System::Get_File(FileName, 38));
		UI_Visual_ESP_Skeleton = Variable::string_int_(System::Get_File(FileName, 39));
		UI_Visual_ESP_HeadDot = Variable::string_int_(System::Get_File(FileName, 40));
		UI_Visual_ESP_State = Variable::string_int_(System::Get_File(FileName, 41));
		UI_Visual_ESP_Name = Variable::string_int_(System::Get_File(FileName, 42));
		UI_Visual_ESP_Drops = Variable::string_int_(System::Get_File(FileName, 43));
		UI_Visual_ESP_OutFOV = Variable::string_int_(System::Get_File(FileName, 44));
		UI_Visual_ESP_OutFOV_Size = Variable::string_int_(System::Get_File(FileName, 45));
		UI_Visual_ESP_OutFOV_Radius = Variable::string_int_(System::Get_File(FileName, 46));
		UI_Visual_ESP_CustomColor = Variable::string_int_(System::Get_File(FileName, 47));
		UI_Visual_ESP_CustomColor_Color = { Variable::string_int_(System::Get_File(FileName, 48)),Variable::string_int_(System::Get_File(FileName, 49)),Variable::string_int_(System::Get_File(FileName, 50)),Variable::string_int_(System::Get_File(FileName, 51)) };
		UI_Visual_ESP_DrawDelay = Variable::string_int_(System::Get_File(FileName, 52));
		UI_Visual_Radar = Variable::string_int_(System::Get_File(FileName, 53));
		UI_Visual_Radar_FollowAngle = Variable::string_int_(System::Get_File(FileName, 54));
		UI_Visual_Radar_Range = Variable::string_float_(System::Get_File(FileName, 55));
		UI_Visual_Radar_Size = Variable::string_int_(System::Get_File(FileName, 56));
		UI_Visual_Radar_Alpha = Variable::string_int_(System::Get_File(FileName, 57));
		UI_Visual_Radar_Pos = { Variable::string_int_(System::Get_File(FileName, 58)), Variable::string_int_(System::Get_File(FileName, 59)) };
		UI_Misc_BunnyHop = Variable::string_int_(System::Get_File(FileName, 60));
		UI_Misc_HitSound = Variable::string_int_(System::Get_File(FileName, 61));
		UI_Misc_HitSound_Tone = Variable::string_int_(System::Get_File(FileName, 62));
		UI_Misc_HitSound_Length = Variable::string_int_(System::Get_File(FileName, 63));
		UI_Visual_HitMark = Variable::string_int_(System::Get_File(FileName, 64));
		UI_Visual_HitMark_Damage = Variable::string_int_(System::Get_File(FileName, 65));
		UI_Visual_HitMark_Range = Variable::string_int_(System::Get_File(FileName, 66));
		UI_Visual_HitMark_Length = Variable::string_int_(System::Get_File(FileName, 67));
		UI_Misc_AutoKnife = Variable::string_int_(System::Get_File(FileName, 68));
		UI_Misc_AutoTaser = Variable::string_int_(System::Get_File(FileName, 69));
		UI_Misc_AutoKnife_Key = Variable::string_int_(System::Get_File(FileName, 70));
		UI_Misc_AutoTaser_Key = Variable::string_int_(System::Get_File(FileName, 71));
		UI_Misc_Watermark = Variable::string_int_(System::Get_File(FileName, 72));
		UI_Misc_SniperCrosshair = Variable::string_int_(System::Get_File(FileName, 73));
		UI_Misc_TeamCheck = Variable::string_int_(System::Get_File(FileName, 74));
		UI_Misc_LockGameWindow = Variable::string_int_(System::Get_File(FileName, 75));
		UI_Debug_ShowDebugWindow = Variable::string_int_(System::Get_File(FileName, 76));
		UI_Misc_Sonar = Variable::string_int_(System::Get_File(FileName, 77));
		UI_Misc_Sonar_Key = Variable::string_int_(System::Get_File(FileName, 78));
		UI_Misc_Sonar_Range_Far = Variable::string_int_(System::Get_File(FileName, 79));
		UI_Misc_Sonar_Range_Near = Variable::string_int_(System::Get_File(FileName, 80));
		UI_Setting_MenuKey = Variable::string_int_(System::Get_File(FileName, 81));
		UI_Setting_CustomColor = Variable::string_int_(System::Get_File(FileName, 82));
		UI_Setting_MainColor = { Variable::string_int_(System::Get_File(FileName, 83)),Variable::string_int_(System::Get_File(FileName, 84)),Variable::string_int_(System::Get_File(FileName, 85)),Variable::string_int_(System::Get_File(FileName, 86)) };
		UI_Visual_HitMark_Color = { Variable::string_int_(System::Get_File(FileName, 87)),Variable::string_int_(System::Get_File(FileName, 88)),Variable::string_int_(System::Get_File(FileName, 89)) };
		UI_Visual_HitMark_Thickness = Variable::string_int_(System::Get_File(FileName, 90));
		UI_Legit_Triggerbot_ShootWhenAccurate = Variable::string_int_(System::Get_File(FileName, 91));
		UI_Misc_AntiAFKKick = Variable::string_int_(System::Get_File(FileName, 92));
		UI_Legit_MagnetAim = Variable::string_int_(System::Get_File(FileName, 93));
		UI_Legit_MagnetAim_Smooth = Variable::string_float_(System::Get_File(FileName, 94));
		UI_Legit_AdaptiveAimbot_InitialSmooth = Variable::string_float_(System::Get_File(FileName, 95));
		UI_Misc_SniperCrosshair_Size = Variable::string_int_(System::Get_File(FileName, 96));
		UI_Spoof_Spoof = Variable::string_int_(System::Get_File(FileName, 97));
		UI_Spoof_AimbotTeam = Variable::string_int_(System::Get_File(FileName, 98));
		UI_Spoof_AimbotTeam_Key = Variable::string_int_(System::Get_File(FileName, 99));
		UI_Spoof_AimbotTeam_Smooth = Variable::string_float_(System::Get_File(FileName, 100));
		UI_Spoof_IncreaseRecoil = Variable::string_int_(System::Get_File(FileName, 101));
		UI_Spoof_IncreaseRecoil_Value = Variable::string_int_(System::Get_File(FileName, 102));
		UI_Spoof_DropC4 = Variable::string_int_(System::Get_File(FileName, 103));
		UI_Spoof_FakeAntiAim = Variable::string_int_(System::Get_File(FileName, 104));
		UI_Spoof_FakeAntiAim_Key = Variable::string_int_(System::Get_File(FileName, 105));
		UI_Spoof_KillDropSniper = Variable::string_int_(System::Get_File(FileName, 106));
		UI_Setting_MenuAnimation = Variable::string_float_(System::Get_File(FileName, 107));
		UI_Visual_HitMark_KillEffect = Variable::string_int_(System::Get_File(FileName, 108));
		UI_Visual_HitMark_KillEffect_Quantity = Variable::string_int_(System::Get_File(FileName, 109));
		UI_Visual_HitMark_KillEffect_Range = Variable::string_int_(System::Get_File(FileName, 110));
		UI_Visual_ESP_Skeleton_Thickness = Variable::string_int_(System::Get_File(FileName, 111));
		UI_Misc_ByPassOBS = Variable::string_int_(System::Get_File(FileName, 112));
		UI_Misc_SavePerformance = Variable::string_int_(System::Get_File(FileName, 113));
		UI_Legit_Aimbot_AutoScope = Variable::string_int_(System::Get_File(FileName, 114));
		UI_Misc_NightMode = Variable::string_int_(System::Get_File(FileName, 115));
		UI_Misc_NightMode_Alpha = Variable::string_int_(System::Get_File(FileName, 116));
		UI_Spoof_LearnPlayer = Variable::string_int_(System::Get_File(FileName, 117));
		UI_Spoof_LearnPlayer_Key = Variable::string_int_(System::Get_File(FileName, 118));
		UI_Misc_AutoPeek = Variable::string_int_(System::Get_File(FileName, 119));
		UI_Misc_AutoPeek_Key = Variable::string_int_(System::Get_File(FileName, 120));
		UI_Spoof_FakeRageBot = Variable::string_int_(System::Get_File(FileName, 121));
		UI_Spoof_FakeRageBot_Key = Variable::string_int_(System::Get_File(FileName, 122));
		UI_Spoof_FakeRageBot_Target = Variable::string_int_(System::Get_File(FileName, 123));
		UI_Misc_QuickStop = Variable::string_int_(System::Get_File(FileName, 124));
		UI_Setting_MenuFont = System::Get_File(FileName, 125);
		UI_Setting_MenuFontSize = Variable::string_int_(System::Get_File(FileName, 126));
		UI_Misc_AutoKillCeasefire = Variable::string_int_(System::Get_File(FileName, 127));
		UI_Misc_CursorESP = Variable::string_int_(System::Get_File(FileName, 128));
		UI_Misc_CursorESP_Key = Variable::string_int_(System::Get_File(FileName, 129));
		UI_Legit_Armory_HitSiteParser = Variable::string_int_(System::Get_File(FileName, 130));
		UI_Visual_ESP_DrawAlpha = Variable::string_int_(System::Get_File(FileName, 131));
		UI_Legit_Armory_BodyAim_SHOTGUN = Variable::string_int_(System::Get_File(FileName, 132));
		UI_Legit_Armory_Range_SHOTGUN = Variable::string_int_(System::Get_File(FileName, 133));
		UI_Legit_Armory_Smooth_SHOTGUN = Variable::string_float_(System::Get_File(FileName, 134));
		UI_Legit_Armory_TriggerDistance_SHOTGUN = Variable::string_int_(System::Get_File(FileName, 135));
		UI_Legit_MagnetAim_Range = Variable::string_int_(System::Get_File(FileName, 136));
		UI_Legit_Backtracking_MinimumTime = Variable::string_int_(System::Get_File(FileName, 137));
		UI_Legit_RemoveRecoil_Sensitive = Variable::string_int_(System::Get_File(FileName, 138));
		UI_Visual_HitMark_CustomColor = Variable::string_int_(System::Get_File(FileName, 139));
		UI_Legit_Aimbot_AutoShootHitChance = Variable::string_int_(System::Get_File(FileName, 140));
		UI_Legit_MagnetAim_OnlyHeadLine = Variable::string_int_(System::Get_File(FileName, 141));
		UI_Misc_WalkingBot = Variable::string_int_(System::Get_File(FileName, 142));
		UI_Misc_WalkingBot_Map = Variable::string_int_(System::Get_File(FileName, 143));
		UI_Misc_MouseLowSensitivity = Variable::string_int_(System::Get_File(FileName, 144));
		UI_Spoof_StepOnHead = Variable::string_int_(System::Get_File(FileName, 145));
	}
	void LoadCloudPreset(string FileName = "", string NormalURL = "https://github.com/venomqex/bad/blob/main/Cloud%20Files/") noexcept//加载特定Github云预设
	{
		System::URL_READ URL_PRESET = { "Cache_CloudPreset" };
		if (URL_PRESET.StoreMem(NormalURL + FileName + (string)".cfg?raw=true"))
		{
			UI_Legit_Aimbot = Variable::string_int_(URL_PRESET.Read(1));
			UI_Legit_Aimbot_Key = Variable::string_int_(URL_PRESET.Read(2));
			UI_Legit_Aimbot_JudgingWall = Variable::string_int_(URL_PRESET.Read(3));
			UI_Legit_Aimbot_RemoveRecoil = Variable::string_int_(URL_PRESET.Read(4));
			UI_Legit_Aimbot_TriggerOnAim = Variable::string_int_(URL_PRESET.Read(5));
			UI_Legit_Aimbot_AutoShoot = Variable::string_int_(URL_PRESET.Read(6));
			UI_Legit_Aimbot_AutoStop = Variable::string_int_(URL_PRESET.Read(7));
			UI_Legit_Aimbot_AutoShootDelay = Variable::string_int_(URL_PRESET.Read(8));
			UI_Legit_AdaptiveAimbot = Variable::string_int_(URL_PRESET.Read(9));
			UI_Legit_Armory_ShowAimbotRange = Variable::string_int_(URL_PRESET.Read(10));
			UI_Legit_Armory_BodyAim_PISTOL = Variable::string_int_(URL_PRESET.Read(11));
			UI_Legit_Armory_Range_PISTOL = Variable::string_int_(URL_PRESET.Read(12));
			UI_Legit_Armory_Smooth_PISTOL = Variable::string_float_(URL_PRESET.Read(13));
			UI_Legit_Armory_BodyAim_RIFLE = Variable::string_int_(URL_PRESET.Read(14));
			UI_Legit_Armory_Range_RIFLE = Variable::string_int_(URL_PRESET.Read(15));
			UI_Legit_Armory_Smooth_RIFLE = Variable::string_float_(URL_PRESET.Read(16));
			UI_Legit_Armory_BodyAim_SNIPER = Variable::string_int_(URL_PRESET.Read(17));
			UI_Legit_Armory_Range_SNIPER = Variable::string_int_(URL_PRESET.Read(18));
			UI_Legit_Armory_Smooth_SNIPER = Variable::string_float_(URL_PRESET.Read(19));
			UI_Legit_Triggerbot = Variable::string_int_(URL_PRESET.Read(20));
			UI_Legit_Triggerbot_Key = Variable::string_int_(URL_PRESET.Read(21));
			UI_Legit_Triggerbot_AnyTarget = Variable::string_int_(URL_PRESET.Read(22));
			UI_Legit_Triggerbot_ShootDelay = Variable::string_int_(URL_PRESET.Read(23));
			UI_Legit_Triggerbot_ShootDuration = Variable::string_int_(URL_PRESET.Read(24));
			UI_Legit_PreciseAim = Variable::string_int_(URL_PRESET.Read(25));
			UI_Legit_PreciseAim_DefaultSensitivity = Variable::string_float_(URL_PRESET.Read(26));
			UI_Legit_PreciseAim_EnableSensitivity = Variable::string_float_(URL_PRESET.Read(27));
			UI_Legit_RemoveRecoil = Variable::string_int_(URL_PRESET.Read(28));
			UI_Legit_RemoveRecoil_HorizontalRepair = Variable::string_int_(URL_PRESET.Read(29));
			UI_Legit_RemoveRecoil_StartBullet = Variable::string_int_(URL_PRESET.Read(30));
			UI_Legit_Backtracking = Variable::string_int_(URL_PRESET.Read(31));
			UI_Legit_Backtracking_MaximumTime = Variable::string_int_(URL_PRESET.Read(32));
			UI_Visual_ESP = Variable::string_int_(URL_PRESET.Read(33));
			UI_Visual_ESP_Key = Variable::string_int_(URL_PRESET.Read(34));
			UI_Visual_ESP_Box = Variable::string_int_(URL_PRESET.Read(35));
			UI_Visual_ESP_Health = Variable::string_int_(URL_PRESET.Read(36));
			UI_Visual_ESP_ActiveWeapon = Variable::string_int_(URL_PRESET.Read(37));
			UI_Visual_ESP_Line = Variable::string_int_(URL_PRESET.Read(38));
			UI_Visual_ESP_Skeleton = Variable::string_int_(URL_PRESET.Read(39));
			UI_Visual_ESP_HeadDot = Variable::string_int_(URL_PRESET.Read(40));
			UI_Visual_ESP_State = Variable::string_int_(URL_PRESET.Read(41));
			UI_Visual_ESP_Name = Variable::string_int_(URL_PRESET.Read(42));
			UI_Visual_ESP_Drops = Variable::string_int_(URL_PRESET.Read(43));
			UI_Visual_ESP_OutFOV = Variable::string_int_(URL_PRESET.Read(44));
			UI_Visual_ESP_OutFOV_Size = Variable::string_int_(URL_PRESET.Read(45));
			UI_Visual_ESP_OutFOV_Radius = Variable::string_int_(URL_PRESET.Read(46));
			UI_Visual_ESP_CustomColor = Variable::string_int_(URL_PRESET.Read(47));
			UI_Visual_ESP_CustomColor_Color = { Variable::string_int_(URL_PRESET.Read(48)),Variable::string_int_(URL_PRESET.Read(49)),Variable::string_int_(URL_PRESET.Read(50)),Variable::string_int_(URL_PRESET.Read(51)) };
			UI_Visual_ESP_DrawDelay = Variable::string_int_(URL_PRESET.Read(52));
			UI_Visual_Radar = Variable::string_int_(URL_PRESET.Read(53));
			UI_Visual_Radar_FollowAngle = Variable::string_int_(URL_PRESET.Read(54));
			UI_Visual_Radar_Range = Variable::string_float_(URL_PRESET.Read(55));
			UI_Visual_Radar_Size = Variable::string_int_(URL_PRESET.Read(56));
			UI_Visual_Radar_Alpha = Variable::string_int_(URL_PRESET.Read(57));
			UI_Visual_Radar_Pos = { Variable::string_int_(URL_PRESET.Read(58)), Variable::string_int_(URL_PRESET.Read(59)) };
			UI_Misc_BunnyHop = Variable::string_int_(URL_PRESET.Read(60));
			UI_Misc_HitSound = Variable::string_int_(URL_PRESET.Read(61));
			UI_Misc_HitSound_Tone = Variable::string_int_(URL_PRESET.Read(62));
			UI_Misc_HitSound_Length = Variable::string_int_(URL_PRESET.Read(63));
			UI_Visual_HitMark = Variable::string_int_(URL_PRESET.Read(64));
			UI_Visual_HitMark_Damage = Variable::string_int_(URL_PRESET.Read(65));
			UI_Visual_HitMark_Range = Variable::string_int_(URL_PRESET.Read(66));
			UI_Visual_HitMark_Length = Variable::string_int_(URL_PRESET.Read(67));
			UI_Misc_AutoKnife = Variable::string_int_(URL_PRESET.Read(68));
			UI_Misc_AutoTaser = Variable::string_int_(URL_PRESET.Read(69));
			UI_Misc_AutoKnife_Key = Variable::string_int_(URL_PRESET.Read(70));
			UI_Misc_AutoTaser_Key = Variable::string_int_(URL_PRESET.Read(71));
			UI_Misc_Watermark = Variable::string_int_(URL_PRESET.Read(72));
			UI_Misc_SniperCrosshair = Variable::string_int_(URL_PRESET.Read(73));
			UI_Misc_TeamCheck = Variable::string_int_(URL_PRESET.Read(74));
			UI_Misc_LockGameWindow = Variable::string_int_(URL_PRESET.Read(75));
			UI_Debug_ShowDebugWindow = Variable::string_int_(URL_PRESET.Read(76));
			UI_Misc_Sonar = Variable::string_int_(URL_PRESET.Read(77));
			UI_Misc_Sonar_Key = Variable::string_int_(URL_PRESET.Read(78));
			UI_Misc_Sonar_Range_Far = Variable::string_int_(URL_PRESET.Read(79));
			UI_Misc_Sonar_Range_Near = Variable::string_int_(URL_PRESET.Read(80));
			UI_Setting_MenuKey = Variable::string_int_(URL_PRESET.Read(81));
			UI_Setting_CustomColor = Variable::string_int_(URL_PRESET.Read(82));
			UI_Setting_MainColor = { Variable::string_int_(URL_PRESET.Read(83)),Variable::string_int_(URL_PRESET.Read(84)),Variable::string_int_(URL_PRESET.Read(85)),Variable::string_int_(URL_PRESET.Read(86)) };
			UI_Visual_HitMark_Color = { Variable::string_int_(URL_PRESET.Read(87)) ,Variable::string_int_(URL_PRESET.Read(88)) ,Variable::string_int_(URL_PRESET.Read(89)) };
			UI_Visual_HitMark_Thickness = Variable::string_int_(URL_PRESET.Read(90));
			UI_Legit_Triggerbot_ShootWhenAccurate = Variable::string_int_(URL_PRESET.Read(91));
			UI_Misc_AntiAFKKick = Variable::string_int_(URL_PRESET.Read(92));
			UI_Legit_MagnetAim = Variable::string_int_(URL_PRESET.Read(93));
			UI_Legit_MagnetAim_Smooth = Variable::string_float_(URL_PRESET.Read(94));
			UI_Legit_AdaptiveAimbot_InitialSmooth = Variable::string_float_(URL_PRESET.Read(95));
			UI_Misc_SniperCrosshair_Size = Variable::string_int_(URL_PRESET.Read(96));
			UI_Spoof_Spoof = Variable::string_int_(URL_PRESET.Read(97));
			UI_Spoof_AimbotTeam = Variable::string_int_(URL_PRESET.Read(98));
			UI_Spoof_AimbotTeam_Key = Variable::string_int_(URL_PRESET.Read(99));
			UI_Spoof_AimbotTeam_Smooth = Variable::string_float_(URL_PRESET.Read(100));
			UI_Spoof_IncreaseRecoil = Variable::string_int_(URL_PRESET.Read(101));
			UI_Spoof_IncreaseRecoil_Value = Variable::string_int_(URL_PRESET.Read(102));
			UI_Spoof_DropC4 = Variable::string_int_(URL_PRESET.Read(103));
			UI_Spoof_FakeAntiAim = Variable::string_int_(URL_PRESET.Read(104));
			UI_Spoof_FakeAntiAim_Key = Variable::string_int_(URL_PRESET.Read(105));
			UI_Spoof_KillDropSniper = Variable::string_int_(URL_PRESET.Read(106));
			UI_Setting_MenuAnimation = Variable::string_float_(URL_PRESET.Read(107));
			UI_Visual_HitMark_KillEffect = Variable::string_int_(URL_PRESET.Read(108));
			UI_Visual_HitMark_KillEffect_Quantity = Variable::string_int_(URL_PRESET.Read(109));
			UI_Visual_HitMark_KillEffect_Range = Variable::string_int_(URL_PRESET.Read(110));
			UI_Visual_ESP_Skeleton_Thickness = Variable::string_int_(URL_PRESET.Read(111));
			UI_Misc_ByPassOBS = Variable::string_int_(URL_PRESET.Read(112));
			UI_Misc_SavePerformance = Variable::string_int_(URL_PRESET.Read(113));
			UI_Legit_Aimbot_AutoScope = Variable::string_int_(URL_PRESET.Read(114));
			UI_Misc_NightMode = Variable::string_int_(URL_PRESET.Read(115));
			UI_Misc_NightMode_Alpha = Variable::string_int_(URL_PRESET.Read(116));
			UI_Spoof_LearnPlayer = Variable::string_int_(URL_PRESET.Read(117));
			UI_Spoof_LearnPlayer_Key = Variable::string_int_(URL_PRESET.Read(118));
			UI_Misc_AutoPeek = Variable::string_int_(URL_PRESET.Read(119));
			UI_Misc_AutoPeek_Key = Variable::string_int_(URL_PRESET.Read(120));
			UI_Spoof_FakeRageBot = Variable::string_int_(URL_PRESET.Read(121));
			UI_Spoof_FakeRageBot_Key = Variable::string_int_(URL_PRESET.Read(122));
			UI_Spoof_FakeRageBot_Target = Variable::string_int_(URL_PRESET.Read(123));
			UI_Misc_QuickStop = Variable::string_int_(URL_PRESET.Read(124));
			UI_Setting_MenuFont = URL_PRESET.Read(125);
			UI_Setting_MenuFontSize = Variable::string_int_(URL_PRESET.Read(126));
			UI_Misc_AutoKillCeasefire = Variable::string_int_(URL_PRESET.Read(127));
			UI_Misc_CursorESP = Variable::string_int_(URL_PRESET.Read(128));
			UI_Misc_CursorESP_Key = Variable::string_int_(URL_PRESET.Read(129));
			UI_Legit_Armory_HitSiteParser = Variable::string_int_(URL_PRESET.Read(130));
			UI_Visual_ESP_DrawAlpha = Variable::string_int_(URL_PRESET.Read(131));
			UI_Legit_Armory_BodyAim_SHOTGUN = Variable::string_int_(URL_PRESET.Read(132));
			UI_Legit_Armory_Range_SHOTGUN = Variable::string_int_(URL_PRESET.Read(133));
			UI_Legit_Armory_Smooth_SHOTGUN = Variable::string_float_(URL_PRESET.Read(134));
			UI_Legit_Armory_TriggerDistance_SHOTGUN = Variable::string_int_(URL_PRESET.Read(135));
			UI_Legit_MagnetAim_Range = Variable::string_int_(URL_PRESET.Read(136));
			UI_Legit_Backtracking_MinimumTime = Variable::string_int_(URL_PRESET.Read(137));
			UI_Legit_RemoveRecoil_Sensitive = Variable::string_int_(URL_PRESET.Read(138));
			UI_Visual_HitMark_CustomColor = Variable::string_int_(URL_PRESET.Read(139));
			UI_Legit_Aimbot_AutoShootHitChance = Variable::string_int_(URL_PRESET.Read(140));
			UI_Legit_MagnetAim_OnlyHeadLine = Variable::string_int_(URL_PRESET.Read(141));
			UI_Misc_WalkingBot = Variable::string_int_(URL_PRESET.Read(142));
			UI_Misc_WalkingBot_Map = Variable::string_int_(URL_PRESET.Read(143));
			UI_Misc_MouseLowSensitivity = Variable::string_int_(URL_PRESET.Read(144));
			UI_Spoof_StepOnHead = Variable::string_int_(URL_PRESET.Read(145));
			URL_PRESET.Release();
		}
	}
	//----------------------------------------------------------------------------------------------
	namespace Debug_Control_Var//测试调试用的控件变量 (按钮 滑条 选择框 按键选择框 控制台控件)
	{
		int SelectPlayer; string SystemCommand; BOOL SendSystemCommand, ClearCommand;
		BOOL Checkbox_1, Checkbox_2;
		int KeySelector_1, KeySelector_2, Slider_1;
		float Slider_2;
		BOOL Button_1, Button_2;
		int Checkbox_Quantity = 1; vector<BOOL> Checkbox_Value(100);
	}
}
using namespace Control_Var;
void Thread_Menu() noexcept//菜单线程 (提供给使用者丰富的自定义选项)
{
	System::Log("Load Thread: Thread_Menu()");
	GUI_VAR.Window_Create(1010, 940, "FlakeTeam - Menu", true);//创建置顶GUI绘制窗口
	const auto LanguageID = System::Get_DefaultLanguage();//获取系统默认语言
	while (LanguageID == 0x804 || LanguageID == 0x404 || LanguageID == 0xC04)//中文版菜单 (字符串一定要加上UTT不然会乱码)
	{
		Window::Set_LimitWindowShow(GUI_VAR.Window_HWND(), UI_Misc_ByPassOBS);//绕过OBS
		UI_Setting_MenuFont = "微软雅黑"; UI_Setting_MenuFontSize = 18;//中文字体
		static int UI_Panel = 0;//大区块选择
		static Variable::Vector2 GUI_WindowSize = { 0,0 };//窗体大小(用于开关动画)
		if (!Menu_Open)GUI_WindowSize = { 0,0 };//关闭窗体时
		GUI_VAR.Window_SetSize(Variable::Animation_Vec2<class CLASS_MenuState_Animation_>(GUI_WindowSize, UI_Setting_MenuAnimation));//菜单窗口大小动画 (弹出, 关闭, 切换大区块)
		if (!GUI_VAR.Window_Move() && Menu_Open)//不在移动窗口时绘制GUI
		{
			if (System::Get_Key_Onest(0x7B))break;//F12开启英文菜单
			if (UI_Setting_CustomColor)//自定义颜色(单色)
			{
				GUI_VAR.Global_Set_EasyGUI_Color(UI_Setting_MainColor);//设置主题颜色
				GUI_VAR.GUI_BackGround(4);//自定义颜色背景主题
			}
			else GUI_VAR.GUI_BackGround(3);//默认(彩虹)
			GUI_VAR.GUI_Block(20, 20, 40, "", 110, false); GUI_VAR.In_DrawString(36, 35, "Flake", GUI_IO.GUIColor.Min_Bri(200), "Verdana", 25);//Rensen标志
			GUI_VAR.GUI_Block_Panel<class CLASS_Block_Panel>(20, 70, 110, GUI_VAR.Window_GetSize().y - 90, "", { "合法UTT","视觉UTT","杂项UTT","设置UTT" }, UI_Panel, 25);//大体区块选择
			if (UI_Panel == 0)//Legit
			{
				const auto Block_Aimbot = GUI_VAR.GUI_Block(150, 30, 370, "瞄准机器人UTT");
				GUI_VAR.GUI_Checkbox(Block_Aimbot, 1, "启用UTT", UI_Legit_Aimbot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Aimbot_1>(Block_Aimbot, 1, UI_Legit_Aimbot_Key);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 2, "判断墙体UTT", UI_Legit_Aimbot_JudgingWall);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 3, "自动压枪UTT", UI_Legit_Aimbot_RemoveRecoil);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 4, "瞄准时触发UTT", UI_Legit_Aimbot_TriggerOnAim);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 5, "自动开火UTT", UI_Legit_Aimbot_AutoShoot, { 255,150,150 });
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 40,Block_Aimbot.y }, 6, "自动急停UTT", UI_Legit_Aimbot_AutoStop, { 255,150,150 });
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 40,Block_Aimbot.y }, 7, "自动开镜UTT", UI_Legit_Aimbot_AutoScope, { 255,150,150 });
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Aimbot_2>({ Block_Aimbot.x + 20,Block_Aimbot.y }, 8, "自动开火延迟UTT", 0, 500, UI_Legit_Aimbot_AutoShootDelay, "ms", { 255,150,150 });
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Aimbot_3>({ Block_Aimbot.x + 20,Block_Aimbot.y }, 9, "自动开火命中几率UTT", 0, 100, UI_Legit_Aimbot_AutoShootHitChance, "%", { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Aimbot, 10, "自适应自瞄 (左键触发)UTT", UI_Legit_AdaptiveAimbot, { 200,200,150 });
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Aimbot_4>(Block_Aimbot, 11, "初始平滑度UTT", 0, 20, UI_Legit_AdaptiveAimbot_InitialSmooth, "", { 200,200,150 });
				const auto Block_Armory = GUI_VAR.GUI_Block(150, 420, 490, "瞄准机器人各武器设置UTT");
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 1, "显示范围圆圈UTT", UI_Legit_Armory_ShowAimbotRange);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 2, "打击点解析器UTT", UI_Legit_Armory_HitSiteParser);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 3, "[手枪] 只打胸部 (反之头部)UTT", UI_Legit_Armory_BodyAim_PISTOL);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_1>({ Block_Armory.x - 10,Block_Armory.y }, 4, "[手枪] 范围UTT", 0, 100, UI_Legit_Armory_Range_PISTOL, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_2>({ Block_Armory.x - 10,Block_Armory.y }, 5, "[手枪] 平滑度UTT", 0, 40, UI_Legit_Armory_Smooth_PISTOL);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 6, "[步枪] 只打胸部 (反之头部)UTT", UI_Legit_Armory_BodyAim_RIFLE);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_3>({ Block_Armory.x - 10,Block_Armory.y }, 7, "[步枪] 范围UTT", 0, 100, UI_Legit_Armory_Range_RIFLE, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_4>({ Block_Armory.x - 10,Block_Armory.y }, 8, "[步枪] 平滑度UTT", 0, 40, UI_Legit_Armory_Smooth_RIFLE);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 9, "[狙击枪] 只打胸部 (反之头部)UTT", UI_Legit_Armory_BodyAim_SNIPER);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_5>({ Block_Armory.x - 10,Block_Armory.y }, 10, "[狙击枪] 范围UTT", 0, 100, UI_Legit_Armory_Range_SNIPER, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_6>({ Block_Armory.x - 10,Block_Armory.y }, 11, "[狙击枪] 平滑度UTT", 0, 40, UI_Legit_Armory_Smooth_SNIPER);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 12, "[霰弹枪] 只打胸部 (反之头部)UTT", UI_Legit_Armory_BodyAim_SHOTGUN);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_7>({ Block_Armory.x - 10,Block_Armory.y }, 13, "[霰弹枪] 范围UTT", 0, 100, UI_Legit_Armory_Range_SHOTGUN, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_8>({ Block_Armory.x - 10,Block_Armory.y }, 14, "[霰弹枪] 平滑度UTT", 0, 40, UI_Legit_Armory_Smooth_SHOTGUN);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_9>({ Block_Armory.x - 10,Block_Armory.y }, 15, "[霰弹枪] 触发距离UTT", 100, 2000, UI_Legit_Armory_TriggerDistance_SHOTGUN);
				const auto Block_Triggerbot = GUI_VAR.GUI_Block(580, 30, 190, "自动扳机UTT");
				GUI_VAR.GUI_Checkbox(Block_Triggerbot, 1, "启用UTT", UI_Legit_Triggerbot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Triggerbot_1>(Block_Triggerbot, 1, UI_Legit_Triggerbot_Key);
				GUI_VAR.GUI_Checkbox({ Block_Triggerbot.x + 20,Block_Triggerbot.y }, 2, "任何目标 (包括掉落的武器和实体)UTT", UI_Legit_Triggerbot_AnyTarget);
				GUI_VAR.GUI_Checkbox({ Block_Triggerbot.x + 20,Block_Triggerbot.y }, 3, "精准时开火UTT", UI_Legit_Triggerbot_ShootWhenAccurate);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Triggerbot_2>(Block_Triggerbot, 4, "开火延迟UTT", 1, 500, UI_Legit_Triggerbot_ShootDelay, "ms");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Triggerbot_3>(Block_Triggerbot, 5, "开火时长UTT", 1, 1000, UI_Legit_Triggerbot_ShootDuration, "ms");
				const auto Block_PreciseAim = GUI_VAR.GUI_Block(580, 240, 130, "精确瞄准UTT");
				GUI_VAR.GUI_Checkbox(Block_PreciseAim, 1, "启用UTT", UI_Legit_PreciseAim);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_PreciseAim_1>(Block_PreciseAim, 2, "默认游戏灵敏度UTT", 0, 0.022, UI_Legit_PreciseAim_DefaultSensitivity);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_PreciseAim_2>(Block_PreciseAim, 3, "触发时游戏灵敏度UTT", 0, 0.015, UI_Legit_PreciseAim_EnableSensitivity);
				const auto Block_RemoveRecoil = GUI_VAR.GUI_Block(580, 390, 160, "自动压枪UTT");
				GUI_VAR.GUI_Checkbox(Block_RemoveRecoil, 1, "启用UTT", UI_Legit_RemoveRecoil);
				GUI_VAR.GUI_Checkbox({ Block_RemoveRecoil.x + 20,Block_RemoveRecoil.y }, 2, "只进行水平修复UTT", UI_Legit_RemoveRecoil_HorizontalRepair);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_RemoveRecoil_1>(Block_RemoveRecoil, 3, "开始子弹UTT", 1, 15, UI_Legit_RemoveRecoil_StartBullet);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_RemoveRecoil_2>(Block_RemoveRecoil, 4, "对应的游戏灵敏度UTT", 0, 100, UI_Legit_RemoveRecoil_Sensitive, "%");
				const auto Block_MagnetAim = GUI_VAR.GUI_Block(580, 570, 160, "磁吸瞄准UTT");
				GUI_VAR.GUI_Checkbox(Block_MagnetAim, 1, "启用UTT", UI_Legit_MagnetAim);
				GUI_VAR.GUI_Checkbox({ Block_MagnetAim.x + 20,Block_MagnetAim.y }, 2, "只磁吸头线UTT", UI_Legit_MagnetAim_OnlyHeadLine);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_MagnetAim_1>(Block_MagnetAim, 3, "范围UTT", 0, 100, UI_Legit_MagnetAim_Range, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_MagnetAim_2>(Block_MagnetAim, 4, "平滑度UTT", 0, 10, UI_Legit_MagnetAim_Smooth);
				const auto Block_Backtracking = GUI_VAR.GUI_Block(580, 750, 130, "回溯UTT");
				GUI_VAR.GUI_Checkbox(Block_Backtracking, 1, "开启UTT", UI_Legit_Backtracking);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Backtracking_1>(Block_Backtracking, 2, "最小延迟UTT", 0, 500, UI_Legit_Backtracking_MinimumTime, "ms");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Backtracking_2>(Block_Backtracking, 3, "最大延迟UTT", UI_Legit_Backtracking_MinimumTime, 1000, UI_Legit_Backtracking_MaximumTime, "ms");
				GUI_WindowSize = { 1010,940 };
			}
			else if (UI_Panel == 1)//Visual
			{
				const auto Block_ESP = GUI_VAR.GUI_Block(150, 30, 550, "透视UTT");
				GUI_VAR.GUI_Checkbox(Block_ESP, 1, "启用UTT", UI_Visual_ESP);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_ESP_1>(Block_ESP, 1, UI_Visual_ESP_Key);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 2, "方框UTT", UI_Visual_ESP_Box);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 3, "血条UTT", UI_Visual_ESP_Health);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 4, "武器UTT", UI_Visual_ESP_ActiveWeapon);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 5, "射线UTT", UI_Visual_ESP_Line);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 6, "骨骼UTT", UI_Visual_ESP_Skeleton);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_2>(Block_ESP, 7, "粗细UTT", 1, 10, UI_Visual_ESP_Skeleton_Thickness, "px");
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 8, "头点UTT", UI_Visual_ESP_HeadDot);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 9, "状态UTT", UI_Visual_ESP_State);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 10, "名称UTT", UI_Visual_ESP_Name);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 11, "掉落物UTT", UI_Visual_ESP_Drops);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 12, "视角外指针UTT", UI_Visual_ESP_OutFOV);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_3>(Block_ESP, 13, "大小UTT", 20, 100, UI_Visual_ESP_OutFOV_Size, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_4>(Block_ESP, 14, "范围UTT", 0, 100, UI_Visual_ESP_OutFOV_Radius, "%");
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 15, "自定义颜色UTT", UI_Visual_ESP_CustomColor);
				GUI_VAR.GUI_ColorSelector(Block_ESP, 15, UI_Visual_ESP_CustomColor_Color);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_5>(Block_ESP, 16, "透明度UTT", -1, 255, UI_Visual_ESP_DrawAlpha);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_6>(Block_ESP, 17, "绘制延迟UTT", 0, 30, UI_Visual_ESP_DrawDelay, "ms");
				const auto Block_Hitmark = GUI_VAR.GUI_Block(580, 30, 310, "命中标记UTT");
				GUI_VAR.GUI_Checkbox(Block_Hitmark, 1, "启用UTT", UI_Visual_HitMark);
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 2, "自定义颜色UTT", UI_Visual_HitMark_CustomColor);
				GUI_VAR.GUI_ColorSelector(Block_Hitmark, 2, UI_Visual_HitMark_Color);
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 3, "显示伤害UTT", UI_Visual_HitMark_Damage);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_1>(Block_Hitmark, 4, "范围UTT", 3, 100, UI_Visual_HitMark_Range, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_2>(Block_Hitmark, 5, "长度UTT", 3, 100, UI_Visual_HitMark_Length, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_3>(Block_Hitmark, 6, "粗细UTT", 1, 10, UI_Visual_HitMark_Thickness, "px");
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 7, "3D闪电效果UTT", UI_Visual_HitMark_KillEffect);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_4>(Block_Hitmark, 8, "数量UTT", 10, 500, UI_Visual_HitMark_KillEffect_Quantity);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_5>(Block_Hitmark, 9, "范围UTT", 10, 500, UI_Visual_HitMark_KillEffect_Range);
				const auto Block_Radar = GUI_VAR.GUI_Block(580, 360, 190, "雷达UTT");
				GUI_VAR.GUI_Checkbox(Block_Radar, 1, "启用UTT", UI_Visual_Radar);
				GUI_VAR.GUI_Checkbox({ Block_Radar.x + 20,Block_Radar.y }, 2, "固定朝向角度UTT", UI_Visual_Radar_FollowAngle);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Radar_1>(Block_Radar, 3, "范围UTT", 0.2, 40, UI_Visual_Radar_Range);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Radar_2>(Block_Radar, 4, "大小UTT", 150, 800, UI_Visual_Radar_Size, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Radar_3>(Block_Radar, 5, "透明度UTT", 0, 255, UI_Visual_Radar_Alpha);
				GUI_WindowSize = { 1010,610 };
			}
			else if (UI_Panel == 2)//Misc
			{
				const auto Block_Misc = GUI_VAR.GUI_Block(150, 30, 810, "杂项UTT");
				GUI_VAR.GUI_Checkbox(Block_Misc, 1, "连跳UTT", UI_Misc_BunnyHop);
				GUI_VAR.GUI_Checkbox(Block_Misc, 2, "命中音效UTT", UI_Misc_HitSound);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_1>(Block_Misc, 3, "音调UTT", 10, 5000, UI_Misc_HitSound_Tone);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_2>(Block_Misc, 4, "音长UTT", 10, 100, UI_Misc_HitSound_Length);
				GUI_VAR.GUI_Checkbox(Block_Misc, 5, "声呐UTT", UI_Misc_Sonar);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_3>(Block_Misc, 5, UI_Misc_Sonar_Key);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_4>(Block_Misc, 6, "远UTT", 500, 1000, UI_Misc_Sonar_Range_Far);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_5>(Block_Misc, 7, "近UTT", 0, 500, UI_Misc_Sonar_Range_Near);
				GUI_VAR.GUI_Checkbox(Block_Misc, 8, "自动刀UTT", UI_Misc_AutoKnife);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_6>(Block_Misc, 8, UI_Misc_AutoKnife_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 9, "自动电击枪UTT", UI_Misc_AutoTaser);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_7>(Block_Misc, 9, UI_Misc_AutoTaser_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 10, "水印UTT", UI_Misc_Watermark);
				GUI_VAR.GUI_Checkbox(Block_Misc, 11, "狙击枪准星UTT", UI_Misc_SniperCrosshair);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_8>(Block_Misc, 12, "大小UTT", 10, 80, UI_Misc_SniperCrosshair_Size, "px");
				GUI_VAR.GUI_Checkbox(Block_Misc, 13, "防止挂机踢出UTT", UI_Misc_AntiAFKKick);
				GUI_VAR.GUI_Checkbox(Block_Misc, 14, "锁定游戏窗口最前端UTT", UI_Misc_LockGameWindow);
				GUI_VAR.GUI_Checkbox(Block_Misc, 15, "绕过OBS捕捉UTT", UI_Misc_ByPassOBS);
				GUI_VAR.GUI_Checkbox(Block_Misc, 16, "性能节省UTT", UI_Misc_SavePerformance, { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Misc, 17, "夜晚模式UTT", UI_Misc_NightMode);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_9>(Block_Misc, 18, "透明度UTT", 30, 200, UI_Misc_NightMode_Alpha);
				GUI_VAR.GUI_Checkbox(Block_Misc, 19, "自动PEEKUTT", UI_Misc_AutoPeek);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_10>(Block_Misc, 19, UI_Misc_AutoPeek_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 20, "自动急停UTT", UI_Misc_QuickStop);
				GUI_VAR.GUI_Checkbox(Block_Misc, 21, "击杀自动停火UTT", UI_Misc_AutoKillCeasefire);
				GUI_VAR.GUI_Checkbox(Block_Misc, 22, "光标透视UTT", UI_Misc_CursorESP);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_11>(Block_Misc, 22, UI_Misc_CursorESP_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 23, "自动行走机器人UTT", UI_Misc_WalkingBot);
				string MapName = "";
				if (UI_Misc_WalkingBot_Map == 0)MapName = "Dust2"; else if (UI_Misc_WalkingBot_Map == 1)MapName = "Mirage";
				else if (UI_Misc_WalkingBot_Map == 2)MapName = "Inferno"; else if (UI_Misc_WalkingBot_Map == 3)MapName = "Ancient";
				else if (UI_Misc_WalkingBot_Map == 4)MapName = "Anubis"; else if (UI_Misc_WalkingBot_Map == 5)MapName = "Overpass";
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_12>(Block_Misc, 24, "地图: UTT" + MapName, 0, 5, UI_Misc_WalkingBot_Map);
				GUI_VAR.GUI_Checkbox(Block_Misc, 25, "鼠标低灵敏 (游戏灵敏度过高时使用)UTT", UI_Misc_MouseLowSensitivity, { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Misc, 26, "判断队友UTT", UI_Misc_TeamCheck, { 200,200,150 });
				const auto Block_Resolution = GUI_VAR.GUI_Block(580, 30, 190, "屏幕像素UTT");
				static BOOL Reslution_3840, Reslution_2560, Reslution_1920, Reslution_1280, Reslution_960;
				GUI_VAR.GUI_Button(Block_Resolution, 1, "3840 * 2160", Reslution_3840, 78); if (Reslution_2560)Window::Set_Resolution(3840, 2160);
				GUI_VAR.GUI_Button(Block_Resolution, 2, "2560 * 1440", Reslution_2560, 78); if (Reslution_2560)Window::Set_Resolution(2560, 1440);
				GUI_VAR.GUI_Button(Block_Resolution, 3, "1920 * 1080", Reslution_1920, 78); if (Reslution_1920)Window::Set_Resolution(1920, 1080);
				GUI_VAR.GUI_Button(Block_Resolution, 4, "1280 * 1024", Reslution_1280, 78); if (Reslution_1280)Window::Set_Resolution(1280, 1024);
				GUI_VAR.GUI_Button(Block_Resolution, 5, "1280 * 960", Reslution_960, 83); if (Reslution_960)Window::Set_Resolution(1280, 960);
				const auto Block_CloudPreset = GUI_VAR.GUI_Block(580, 240, 180, "云端预设UTT");
				static BOOL Load_CloudPreset; static int SelectedCloudPreset = 0; GUI_VAR.GUI_Button(Block_CloudPreset, 1, "加载选定预设UTT", Load_CloudPreset, 70);
				GUI_VAR.GUI_List<class CLASS_Block_CloudPreset_1>(Block_CloudPreset, 2, { "合法UTT","暴力UTT","合法 - 无视觉UTT","跑图机器人UTT" }, SelectedCloudPreset);
				if (Load_CloudPreset)//加载Github上的云预设
				{
					const auto Preset_ID = SelectedCloudPreset;//防止套用的预设套写变量
					if (SelectedCloudPreset == 0)LoadCloudPreset("Legit");
					else if (SelectedCloudPreset == 1)LoadCloudPreset("Rage");
					else if (SelectedCloudPreset == 2)LoadCloudPreset("Legit No Visual");
					else if (SelectedCloudPreset == 3)LoadCloudPreset("Robot");
					SelectedCloudPreset = 0;//归位选择
				}
				auto Block_Spoof = GUI_VAR.GUI_Block(580, 440, 400, "恶搞UTT");
				GUI_VAR.GUI_Checkbox(Block_Spoof, 1, "启用UTT", UI_Spoof_Spoof, { 200,200,150 });
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 2, "瞄准队友UTT", UI_Spoof_AimbotTeam);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_1>(Block_Spoof, 2, UI_Spoof_AimbotTeam_Key);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Spoof_2>({ Block_Spoof.x + 20,Block_Spoof.y }, 3, "平滑度UTT", 0, 20, UI_Spoof_AimbotTeam_Smooth);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 4, "增大后坐力UTT", UI_Spoof_IncreaseRecoil);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Spoof_3>({ Block_Spoof.x + 20,Block_Spoof.y }, 5, "后座量UTT", 50, 1000, UI_Spoof_IncreaseRecoil_Value, "px");
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 6, "自动丢弃C4UTT", UI_Spoof_DropC4);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 7, "假反瞄准UTT", UI_Spoof_FakeAntiAim);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_4>(Block_Spoof, 7, UI_Spoof_FakeAntiAim_Key);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 8, "击杀丢弃狙击枪UTT", UI_Spoof_KillDropSniper);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 9, "学习最近的玩家UTT", UI_Spoof_LearnPlayer);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_5>(Block_Spoof, 9, UI_Spoof_LearnPlayer_Key);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 10, "假愤怒机器人UTT", UI_Spoof_FakeRageBot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_6>(Block_Spoof, 10, UI_Spoof_FakeRageBot_Key);
				auto FakeRageBot_SliderString = "目标: UTT" + Advanced::Player_Name(UI_Spoof_FakeRageBot_Target);
				if (!UI_Spoof_FakeRageBot_Target)FakeRageBot_SliderString = "目标: 任何目标UTT";
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Spoof_7>({ Block_Spoof.x + 20,Block_Spoof.y }, 11, FakeRageBot_SliderString, 0, 64, UI_Spoof_FakeRageBot_Target);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 12, "踩头时自动跟随UTT", UI_Spoof_StepOnHead);
				GUI_WindowSize = { 1010,870 };
			}
			else if (UI_Panel == 3)//Setting
			{
				const auto Block_About = GUI_VAR.GUI_Block(150, 30, 220, "关于UTT");
				GUI_VAR.GUI_Text(Block_About, 1, "Flake", GUI_IO.GUIColor);
				GUI_VAR.GUI_Text({ Block_About.x + 47,Block_About.y }, 1, "for Counter-Strike 2UTT", { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 2, "版本: UTT" + Variable::Float_Precision(Flake_Version), { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 3, "发布日期: UTT" + Flake_ReleaseDate, { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 4, "作者: https://github.com/CosllyUTT", { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 5, "交流QQ群: 486214313UTT", { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 6, "中国内地用户检查更新时需要使用VPN (确保可以连接Github)UTT", { 100,100,100 });
				static BOOL OpenGithubURL, OpenQQGroupChat;
				GUI_VAR.GUI_Button_Small({ Block_About.x + 10,Block_About.y }, 4, OpenGithubURL);
				GUI_VAR.GUI_Button_Small({ Block_About.x + 10,Block_About.y }, 5, OpenQQGroupChat);
				if (OpenGithubURL)System::Open_Website("https://discord.gg/mxwwV6m9gW");//打开作者Github主题页面
				if (OpenQQGroupChat)System::Open_Website("https://discord.gg/mxwwV6m9gW");//打开QQ加入群聊链接
				const auto Block_Menu = GUI_VAR.GUI_Block(150, 270, 250, "菜单UTT");
				GUI_VAR.GUI_Text(Block_Menu, 1, "菜单按键UTT");
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Menu_1>(Block_Menu, 1, UI_Setting_MenuKey);
				GUI_VAR.GUI_Checkbox(Block_Menu, 2, "自定义菜单主题色UTT", UI_Setting_CustomColor);
				GUI_VAR.GUI_ColorSelector_a(Block_Menu, 2, UI_Setting_MainColor);
				if (UI_Setting_MainColor.a < 100)UI_Setting_MainColor.a = 100;
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Menu_2>(Block_Menu, 3, "菜单动画平滑度UTT", 1, 10, UI_Setting_MenuAnimation);
				static BOOL StartCS, QuitCS;
				if (CS2_HWND)GUI_VAR.GUI_Button(Block_Menu, 4, "关闭 CSUTT", QuitCS, 90);
				else GUI_VAR.GUI_Button(Block_Menu, 4, "打开 CSUTT", StartCS, 90);
				if (StartCS && CS2_MEM.Get_ProcessHWND() == 0)if (CS2_MEM.Get_ProcessHWND() == 0)System::Open_Website("steam://rungameid/730");//启动CS
				if (QuitCS && CS2_MEM.Get_ProcessHWND() != 0)Window::Kill_Window(CS2_MEM.Get_ProcessHWND());//关闭CS
				static BOOL GithubRepositories; GUI_VAR.GUI_Button(Block_Menu, 5, "Github 项目链接UTT", GithubRepositories, 70);
				if (GithubRepositories)System::Open_Website("https://github.com/venomqex/bad");//打开Github项目地址
				static BOOL RestartMenu; GUI_VAR.GUI_Button(Block_Menu, 6, "重启菜单UTT", RestartMenu, 90);
				if (RestartMenu) { GUI_VAR.Window_SetTitle("Flake - Restarting"); System::Self_Restart(); }//重启菜单
				static BOOL UnloadMenu; GUI_VAR.GUI_Button(Block_Menu, 7, "关闭菜单UTT", UnloadMenu, 90);
				if (UnloadMenu)exit(0);//关闭菜单
				const auto Block_Presets = GUI_VAR.GUI_Block(580, 30, 490, "本地预设UTT", 320);
				static int SelectedPresetID = 0; static vector<string> FileList = System::Traversal_FindFile(Preset_Folder + "\\*", ".cfg", true, "UTT"); static string CreatePresetName; static BOOL Create, Load, Save, Delete;
				GUI_VAR.GUI_List<class CLASS_Block_Presets_1>(Block_Presets, 1, FileList, SelectedPresetID, 11);
				GUI_VAR.GUI_Button(Block_Presets, 11, "加载UTT", Load, 95); if (Load && SelectedPresetID != -1)LoadPreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				GUI_VAR.GUI_Button(Block_Presets, 12, "保存UTT", Save, 95); if (Save && SelectedPresetID != -1)SavePreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				GUI_VAR.GUI_InputText<class CLASS_Block_Presets_2>(Block_Presets, 13, CreatePresetName, "创建预设名称UTT");
				GUI_VAR.GUI_Button(Block_Presets, 14, "创建UTT", Create, 95); if (Create) { CreatePreset(CreatePresetName); CreatePresetName = ""; }
				GUI_VAR.GUI_Button(Block_Presets, 15, "删除UTT", Delete, 95); if (Delete && SelectedPresetID != -1)DeletePreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				if (Create || Load || Save || Delete)FileList = System::Traversal_FindFile(Preset_Folder + "\\*", ".cfg", true, "UTT");//刷新文件列表
				GUI_WindowSize = { 930,550 };
			}
			GUI_VAR.Draw_GUI(Debug_Control_Var::Checkbox_2);//最终绘制GUI画板
			if (UI_Misc_SavePerformance)Sleep(5);//节省电脑占用性能
		}
	}
	while (true)//默认英文版菜单
	{
		Window::Set_LimitWindowShow(GUI_VAR.Window_HWND(), UI_Misc_ByPassOBS);//绕过OBS
		static int UI_Panel = 0;//大区块选择
		static Variable::Vector2 GUI_WindowSize = { 0,0 };//窗体大小(用于开关动画)
		if (!Menu_Open)GUI_WindowSize = { 0,0 };//关闭窗体时
		GUI_VAR.Window_SetSize(Variable::Animation_Vec2<class CLASS_MenuState_Animation_>(GUI_WindowSize, UI_Setting_MenuAnimation));//菜单窗口大小动画 (弹出, 关闭, 切换大区块)
		if (!GUI_VAR.Window_Move() && Menu_Open)//不在移动窗口时绘制GUI
		{
			if (UI_Setting_CustomColor)//自定义颜色(单色)
			{
				GUI_VAR.Global_Set_EasyGUI_Color(UI_Setting_MainColor);//设置主题颜色
				GUI_VAR.GUI_BackGround(4);//自定义颜色背景主题
			}
			else GUI_VAR.GUI_BackGround(3);//默认(彩虹)
			GUI_VAR.GUI_Block(20, 20, 40, "", 110, false); GUI_VAR.In_DrawString(36, 35, "Flake", GUI_IO.GUIColor.Min_Bri(200), "Verdana", 25);//Rensen标志
			GUI_VAR.GUI_Block_Panel<class CLASS_Block_Panel>(20, 70, 110, GUI_VAR.Window_GetSize().y - 90, "", { "Legit","Visual","Misc","Infolist","Setting","Attach" }, UI_Panel, 25);//大体区块选择
			if (UI_Panel == 0)//Legit
			{
				const auto Block_Aimbot = GUI_VAR.GUI_Block(150, 30, 370, "Aim bot");
				GUI_VAR.GUI_Checkbox(Block_Aimbot, 1, "Enabled", UI_Legit_Aimbot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Aimbot_1>(Block_Aimbot, 1, UI_Legit_Aimbot_Key);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 2, "Judging wall", UI_Legit_Aimbot_JudgingWall);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 3, "Remove recoil", UI_Legit_Aimbot_RemoveRecoil);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 4, "Trigger on aiming", UI_Legit_Aimbot_TriggerOnAim);
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 20,Block_Aimbot.y }, 5, "Auto shoot", UI_Legit_Aimbot_AutoShoot, { 255,150,150 });
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 40,Block_Aimbot.y }, 6, "Auto stop", UI_Legit_Aimbot_AutoStop, { 255,150,150 });
				GUI_VAR.GUI_Checkbox({ Block_Aimbot.x + 40,Block_Aimbot.y }, 7, "Auto scope", UI_Legit_Aimbot_AutoScope, { 255,150,150 });
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Aimbot_2>({ Block_Aimbot.x + 20,Block_Aimbot.y }, 8, "Auto shoot delay", 0, 500, UI_Legit_Aimbot_AutoShootDelay, "ms", { 255,150,150 });
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Aimbot_3>({ Block_Aimbot.x + 20,Block_Aimbot.y }, 9, "Auto shoot hit chance", 0, 100, UI_Legit_Aimbot_AutoShootHitChance, "%", { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Aimbot, 10, "Adaptive aimbot", UI_Legit_AdaptiveAimbot, { 200,200,150 });
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Aimbot_4>(Block_Aimbot, 11, "Initial smooth", 0, 20, UI_Legit_AdaptiveAimbot_InitialSmooth, "", { 200,200,150 });
				const auto Block_Armory = GUI_VAR.GUI_Block(150, 420, 490, "Armory");
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 1, "Show range", UI_Legit_Armory_ShowAimbotRange);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 2, "Hit site parser", UI_Legit_Armory_HitSiteParser);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 3, "[PISTOL] Body aim (else head)", UI_Legit_Armory_BodyAim_PISTOL);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_1>({ Block_Armory.x - 10,Block_Armory.y }, 4, "[PISTOL] Range", 0, 100, UI_Legit_Armory_Range_PISTOL, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_2>({ Block_Armory.x - 10,Block_Armory.y }, 5, "[PISTOL] Smooth", 0, 40, UI_Legit_Armory_Smooth_PISTOL);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 6, "[RIFLE] Body aim (else head)", UI_Legit_Armory_BodyAim_RIFLE);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_3>({ Block_Armory.x - 10,Block_Armory.y }, 7, "[RIFLE] Range", 0, 100, UI_Legit_Armory_Range_RIFLE, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_4>({ Block_Armory.x - 10,Block_Armory.y }, 8, "[RIFLE] Smooth", 0, 40, UI_Legit_Armory_Smooth_RIFLE);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 9, "[SNIPER] Body aim (else head)", UI_Legit_Armory_BodyAim_SNIPER);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_5>({ Block_Armory.x - 10,Block_Armory.y }, 10, "[SNIPER] Range", 0, 100, UI_Legit_Armory_Range_SNIPER, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_6>({ Block_Armory.x - 10,Block_Armory.y }, 11, "[SNIPER] Smooth", 0, 40, UI_Legit_Armory_Smooth_SNIPER);
				GUI_VAR.GUI_Checkbox({ Block_Armory.x - 10,Block_Armory.y }, 12, "[SHOTGUN] Body aim (else head)", UI_Legit_Armory_BodyAim_SHOTGUN);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_7>({ Block_Armory.x - 10,Block_Armory.y }, 13, "[SHOTGUN] Range", 0, 100, UI_Legit_Armory_Range_SHOTGUN, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Armory_8>({ Block_Armory.x - 10,Block_Armory.y }, 14, "[SHOTGUN] Smooth", 0, 40, UI_Legit_Armory_Smooth_SHOTGUN);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Armory_9>({ Block_Armory.x - 10,Block_Armory.y }, 15, "[SHOTGUN] trigger distance", 100, 2000, UI_Legit_Armory_TriggerDistance_SHOTGUN);
				const auto Block_Triggerbot = GUI_VAR.GUI_Block(580, 30, 190, "Trigger bot");
				GUI_VAR.GUI_Checkbox(Block_Triggerbot, 1, "Enabled", UI_Legit_Triggerbot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Triggerbot_1>(Block_Triggerbot, 1, UI_Legit_Triggerbot_Key);
				GUI_VAR.GUI_Checkbox({ Block_Triggerbot.x + 20,Block_Triggerbot.y }, 2, "Any target", UI_Legit_Triggerbot_AnyTarget);
				GUI_VAR.GUI_Checkbox({ Block_Triggerbot.x + 20,Block_Triggerbot.y }, 3, "Shoot when accurate", UI_Legit_Triggerbot_ShootWhenAccurate);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Triggerbot_2>(Block_Triggerbot, 4, "Shoot delay", 1, 500, UI_Legit_Triggerbot_ShootDelay, "ms");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Triggerbot_3>(Block_Triggerbot, 5, "Shoot duration", 1, 1000, UI_Legit_Triggerbot_ShootDuration, "ms");
				const auto Block_PreciseAim = GUI_VAR.GUI_Block(580, 240, 130, "Precise aim");
				GUI_VAR.GUI_Checkbox(Block_PreciseAim, 1, "Enabled", UI_Legit_PreciseAim);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_PreciseAim_1>(Block_PreciseAim, 2, "Default sensitivity", 0, 0.022, UI_Legit_PreciseAim_DefaultSensitivity);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_PreciseAim_2>(Block_PreciseAim, 3, "Enable sensitivity", 0, 0.015, UI_Legit_PreciseAim_EnableSensitivity);
				const auto Block_RemoveRecoil = GUI_VAR.GUI_Block(580, 390, 160, "Remove recoil");
				GUI_VAR.GUI_Checkbox(Block_RemoveRecoil, 1, "Enabled", UI_Legit_RemoveRecoil);
				GUI_VAR.GUI_Checkbox({ Block_RemoveRecoil.x + 20,Block_RemoveRecoil.y }, 2, "Only horizontal repair", UI_Legit_RemoveRecoil_HorizontalRepair);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_RemoveRecoil_1>(Block_RemoveRecoil, 3, "Start bullet", 1, 15, UI_Legit_RemoveRecoil_StartBullet);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_RemoveRecoil_2>(Block_RemoveRecoil, 4, "Sensitive", 0, 100, UI_Legit_RemoveRecoil_Sensitive, "%");
				const auto Block_MagnetAim = GUI_VAR.GUI_Block(580, 570, 160, "Magnet aim");
				GUI_VAR.GUI_Checkbox(Block_MagnetAim, 1, "Enabled", UI_Legit_MagnetAim);
				GUI_VAR.GUI_Checkbox({ Block_MagnetAim.x + 20,Block_MagnetAim.y }, 2, "Only aim headline", UI_Legit_MagnetAim_OnlyHeadLine);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_MagnetAim_1>(Block_MagnetAim, 3, "Range", 0, 100, UI_Legit_MagnetAim_Range, "%");
				GUI_VAR.GUI_Slider<float, class CLASS_Block_MagnetAim_2>(Block_MagnetAim, 4, "Smooth", 0, 10, UI_Legit_MagnetAim_Smooth);
				const auto Block_Backtracking = GUI_VAR.GUI_Block(580, 750, 130, "Back tracking");
				GUI_VAR.GUI_Checkbox(Block_Backtracking, 1, "Enabled", UI_Legit_Backtracking);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Backtracking_1>(Block_Backtracking, 2, "Minimum time", 0, 500, UI_Legit_Backtracking_MinimumTime, "ms");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Backtracking_2>(Block_Backtracking, 3, "Maximum time", UI_Legit_Backtracking_MinimumTime, 1000, UI_Legit_Backtracking_MaximumTime, "ms");
				GUI_VAR.GUI_Tips(Block_Aimbot, 1, "Help you quickly aim at the target.");
				GUI_VAR.GUI_Tips({ Block_Aimbot.x + 10,Block_Aimbot.y }, 5, "Prefer Ragebot.", 0, { 255,150,150 });
				GUI_VAR.GUI_Tips({ Block_Aimbot.x + 20,Block_Aimbot.y }, 9, "Chance of hitting the target. (Affects shooting speed)", 0, { 255,150,150 });
				GUI_VAR.GUI_Tips(Block_Aimbot, 10, "More biological than normal aimbot.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips(Block_Triggerbot, 1, "Shoot when aiming at the enemy.");
				GUI_VAR.GUI_Tips(Block_PreciseAim, 1, "Reduce the sensitivity of the reticle when aiming at the enemy.");
				GUI_VAR.GUI_Tips({ Block_RemoveRecoil.x + 10,Block_RemoveRecoil.y }, 2, "Operations that only return landscape.");
				GUI_VAR.GUI_Tips({ Block_RemoveRecoil.x + 10,Block_RemoveRecoil.y }, 4, "Corresponding game sensitivity value.");
				GUI_VAR.GUI_Tips(Block_MagnetAim, 1, "Slow aiming without triggering key conditions.");
				GUI_VAR.GUI_Tips(Block_Backtracking, 1, "Take advantage of network latency to have a bigger hitbox.");
				GUI_WindowSize = { 1010,940 };
			}
			else if (UI_Panel == 1)//Visual
			{
				const auto Block_ESP = GUI_VAR.GUI_Block(150, 30, 550, "Extra sensory perception");
				GUI_VAR.GUI_Checkbox(Block_ESP, 1, "Enabled", UI_Visual_ESP);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_ESP_1>(Block_ESP, 1, UI_Visual_ESP_Key);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 2, "Box", UI_Visual_ESP_Box);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 3, "Health bar", UI_Visual_ESP_Health);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 4, "Weapon text", UI_Visual_ESP_ActiveWeapon);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 5, "Line", UI_Visual_ESP_Line);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 6, "Skeleton", UI_Visual_ESP_Skeleton);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_2>(Block_ESP, 7, "Thickness", 1, 10, UI_Visual_ESP_Skeleton_Thickness, "px");
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 8, "Head dot", UI_Visual_ESP_HeadDot);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 9, "State", UI_Visual_ESP_State);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 10, "Name", UI_Visual_ESP_Name);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 11, "Drops", UI_Visual_ESP_Drops);
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 12, "Out of FOV arrow", UI_Visual_ESP_OutFOV);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_3>(Block_ESP, 13, "Size", 20, 100, UI_Visual_ESP_OutFOV_Size, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_4>(Block_ESP, 14, "Radius", 0, 100, UI_Visual_ESP_OutFOV_Radius, "%");
				GUI_VAR.GUI_Checkbox({ Block_ESP.x + 20,Block_ESP.y }, 15, "Custom color", UI_Visual_ESP_CustomColor);
				GUI_VAR.GUI_ColorSelector(Block_ESP, 15, UI_Visual_ESP_CustomColor_Color);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_5>(Block_ESP, 16, "Draw alpha", -1, 255, UI_Visual_ESP_DrawAlpha);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_ESP_6>(Block_ESP, 17, "Draw delay", 0, 30, UI_Visual_ESP_DrawDelay, "ms");
				const auto Block_Hitmark = GUI_VAR.GUI_Block(580, 30, 310, "Hit mark");
				GUI_VAR.GUI_Checkbox(Block_Hitmark, 1, "Enabled", UI_Visual_HitMark);
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 2, "Custom color", UI_Visual_HitMark_CustomColor);
				GUI_VAR.GUI_ColorSelector(Block_Hitmark, 2, UI_Visual_HitMark_Color);
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 3, "Show damage", UI_Visual_HitMark_Damage);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_1>(Block_Hitmark, 4, "Range", 3, 100, UI_Visual_HitMark_Range, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_2>(Block_Hitmark, 5, "Length", 3, 100, UI_Visual_HitMark_Length, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_3>(Block_Hitmark, 6, "Thickness", 1, 10, UI_Visual_HitMark_Thickness, "px");
				GUI_VAR.GUI_Checkbox({ Block_Hitmark.x + 20,Block_Hitmark.y }, 7, "Lightning effect", UI_Visual_HitMark_KillEffect);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_4>(Block_Hitmark, 8, "Quantity", 10, 500, UI_Visual_HitMark_KillEffect_Quantity);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Hitmark_5>(Block_Hitmark, 9, "Range", 10, 500, UI_Visual_HitMark_KillEffect_Range);
				const auto Block_Radar = GUI_VAR.GUI_Block(580, 360, 190, "Radar");
				GUI_VAR.GUI_Checkbox(Block_Radar, 1, "Enabled", UI_Visual_Radar);
				GUI_VAR.GUI_Checkbox({ Block_Radar.x + 20,Block_Radar.y }, 2, "Follow angle", UI_Visual_Radar_FollowAngle);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Radar_1>(Block_Radar, 3, "Range", 0.2, 40, UI_Visual_Radar_Range);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Radar_2>(Block_Radar, 4, "Size", 150, 800, UI_Visual_Radar_Size, "px");
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Radar_3>(Block_Radar, 5, "Alpha", 0, 255, UI_Visual_Radar_Alpha);
				GUI_VAR.GUI_Tips(Block_ESP, 1, "Learn enemy coordinates through walls. (Full screen cannot be used)");
				GUI_VAR.GUI_Tips({ Block_ESP.x + 10,Block_ESP.y }, 16, "-1: Draw ESP when gunfire occurs.");
				GUI_VAR.GUI_Tips(Block_Hitmark, 1, "Effect that triggers when hitting the player. (Full screen cannot be used)");
				GUI_VAR.GUI_Tips(Block_Radar, 1, "Exterior window radar. (Full screen cannot be used)");
				GUI_WindowSize = { 1010,610 };
			}
			else if (UI_Panel == 2)//Misc
			{
				const auto Block_Misc = GUI_VAR.GUI_Block(150, 30, 810, "Miscellaneous");
				GUI_VAR.GUI_Checkbox(Block_Misc, 1, "Bunny hop", UI_Misc_BunnyHop);
				GUI_VAR.GUI_Checkbox(Block_Misc, 2, "Hit sound", UI_Misc_HitSound);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_1>(Block_Misc, 3, "Tone", 10, 5000, UI_Misc_HitSound_Tone);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_2>(Block_Misc, 4, "Length", 10, 100, UI_Misc_HitSound_Length);
				GUI_VAR.GUI_Checkbox(Block_Misc, 5, "Sonar", UI_Misc_Sonar);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_3>(Block_Misc, 5, UI_Misc_Sonar_Key);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_4>(Block_Misc, 6, "Range far", 500, 1000, UI_Misc_Sonar_Range_Far);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_5>(Block_Misc, 7, "Range near", 0, 500, UI_Misc_Sonar_Range_Near);
				GUI_VAR.GUI_Checkbox(Block_Misc, 8, "Knife bot", UI_Misc_AutoKnife);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_6>(Block_Misc, 8, UI_Misc_AutoKnife_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 9, "Taser bot", UI_Misc_AutoTaser);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_7>(Block_Misc, 9, UI_Misc_AutoTaser_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 10, "Water mark", UI_Misc_Watermark);
				GUI_VAR.GUI_Checkbox(Block_Misc, 11, "Sniper crosshair", UI_Misc_SniperCrosshair);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_8>(Block_Misc, 12, "Size", 10, 80, UI_Misc_SniperCrosshair_Size, "px");
				GUI_VAR.GUI_Checkbox(Block_Misc, 13, "Anti AFK kick", UI_Misc_AntiAFKKick);
				GUI_VAR.GUI_Checkbox(Block_Misc, 14, "Lock game window", UI_Misc_LockGameWindow);
				GUI_VAR.GUI_Checkbox(Block_Misc, 15, "Hide from OBS", UI_Misc_ByPassOBS);
				GUI_VAR.GUI_Checkbox(Block_Misc, 16, "Save performance", UI_Misc_SavePerformance, { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Misc, 17, "Night mode", UI_Misc_NightMode);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_9>(Block_Misc, 18, "Alpha", 30, 200, UI_Misc_NightMode_Alpha);
				GUI_VAR.GUI_Checkbox(Block_Misc, 19, "Auto peek", UI_Misc_AutoPeek);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_10>(Block_Misc, 19, UI_Misc_AutoPeek_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 20, "Quick stop", UI_Misc_QuickStop);
				GUI_VAR.GUI_Checkbox(Block_Misc, 21, "Auto kill ceasefire", UI_Misc_AutoKillCeasefire);
				GUI_VAR.GUI_Checkbox(Block_Misc, 22, "Cursor ESP", UI_Misc_CursorESP);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Misc_11>(Block_Misc, 22, UI_Misc_CursorESP_Key);
				GUI_VAR.GUI_Checkbox(Block_Misc, 23, "Walking bot", UI_Misc_WalkingBot);
				static string MapName = "";
				if (UI_Misc_WalkingBot_Map == 0)MapName = "Dust2"; else if (UI_Misc_WalkingBot_Map == 1)MapName = "Mirage";
				else if (UI_Misc_WalkingBot_Map == 2)MapName = "Inferno"; else if (UI_Misc_WalkingBot_Map == 3)MapName = "Ancient";
				else if (UI_Misc_WalkingBot_Map == 4)MapName = "Anubis"; else if (UI_Misc_WalkingBot_Map == 5)MapName = "Overpass";
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Misc_12>(Block_Misc, 24, "Map: " + MapName, 0, 5, UI_Misc_WalkingBot_Map);
				GUI_VAR.GUI_Checkbox(Block_Misc, 25, "Mouse low sensitivity", UI_Misc_MouseLowSensitivity, { 255,150,150 });
				GUI_VAR.GUI_Checkbox(Block_Misc, 26, "Global team check", UI_Misc_TeamCheck, { 200,200,150 });
				const auto Block_Resolution = GUI_VAR.GUI_Block(580, 30, 190, "Screen resolution");
				static BOOL Reslution_3840, Reslution_2560, Reslution_1920, Reslution_1280, Reslution_960;
				GUI_VAR.GUI_Button(Block_Resolution, 1, "3840 * 2160", Reslution_3840, 78); if (Reslution_2560)Window::Set_Resolution(3840, 2160);
				GUI_VAR.GUI_Button(Block_Resolution, 2, "2560 * 1440", Reslution_2560, 78); if (Reslution_2560)Window::Set_Resolution(2560, 1440);
				GUI_VAR.GUI_Button(Block_Resolution, 3, "1920 * 1080", Reslution_1920, 78); if (Reslution_1920)Window::Set_Resolution(1920, 1080);
				GUI_VAR.GUI_Button(Block_Resolution, 4, "1280 * 1024", Reslution_1280, 78); if (Reslution_1280)Window::Set_Resolution(1280, 1024);
				GUI_VAR.GUI_Button(Block_Resolution, 5, "1280 * 960", Reslution_960, 83); if (Reslution_960)Window::Set_Resolution(1280, 960);
				const auto Block_CloudPreset = GUI_VAR.GUI_Block(580, 240, 180, "Cloud preset");
				static BOOL Load_CloudPreset; static int SelectedCloudPreset = 0; GUI_VAR.GUI_Button(Block_CloudPreset, 1, "Load preset", Load_CloudPreset, 80);
				GUI_VAR.GUI_List<class CLASS_Block_CloudPreset_1>(Block_CloudPreset, 2, { "Legit","Rage","Legit - no visual","Robot" }, SelectedCloudPreset);
				if (Load_CloudPreset)//加载Github上的云预设
				{
					const auto Preset_ID = SelectedCloudPreset;//防止套用的预设套写变量
					if (SelectedCloudPreset == 0)LoadCloudPreset("Legit");
					else if (SelectedCloudPreset == 1)LoadCloudPreset("Rage");
					else if (SelectedCloudPreset == 2)LoadCloudPreset("Legit No Visual");
					else if (SelectedCloudPreset == 3)LoadCloudPreset("Robot");
					SelectedCloudPreset = 0;//归位选择
				}
				const auto Block_Spoof = GUI_VAR.GUI_Block(580, 440, 400, "Spoof");
				GUI_VAR.GUI_Checkbox(Block_Spoof, 1, "Enabled", UI_Spoof_Spoof, { 200,200,150 });
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 2, "Aim at teammate", UI_Spoof_AimbotTeam);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_1>(Block_Spoof, 2, UI_Spoof_AimbotTeam_Key);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Spoof_2>({ Block_Spoof.x + 20,Block_Spoof.y }, 3, "Smooth", 0, 20, UI_Spoof_AimbotTeam_Smooth);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 4, "Increase recoil", UI_Spoof_IncreaseRecoil);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Spoof_3>({ Block_Spoof.x + 20,Block_Spoof.y }, 5, "Strength", 50, 1000, UI_Spoof_IncreaseRecoil_Value, "px");
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 6, "Unable to pick up C4", UI_Spoof_DropC4);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 7, "Fake anti aim", UI_Spoof_FakeAntiAim);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_4>(Block_Spoof, 7, UI_Spoof_FakeAntiAim_Key);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 8, "Kill drop sniper", UI_Spoof_KillDropSniper);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 9, "Learn player", UI_Spoof_LearnPlayer);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_5>(Block_Spoof, 9, UI_Spoof_LearnPlayer_Key);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 10, "Fake ragebot", UI_Spoof_FakeRageBot);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Spoof_6>(Block_Spoof, 10, UI_Spoof_FakeRageBot_Key);
				auto FakeRageBot_SliderString = "Target: " + Advanced::Player_Name(UI_Spoof_FakeRageBot_Target);
				if (!UI_Spoof_FakeRageBot_Target)FakeRageBot_SliderString = "Target: Any target";
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Spoof_7>({ Block_Spoof.x + 20,Block_Spoof.y }, 11, FakeRageBot_SliderString, 0, 64, UI_Spoof_FakeRageBot_Target);
				GUI_VAR.GUI_Checkbox({ Block_Spoof.x + 20,Block_Spoof.y }, 12, "Step on head", UI_Spoof_StepOnHead);
				GUI_VAR.GUI_Tips(Block_Misc, 2, "Play sound when hitting player.");
				GUI_VAR.GUI_Tips(Block_Misc, 5, "Makes a subtle sound when approaching an enemy.");
				GUI_VAR.GUI_Tips(Block_Misc, 8, "Auto attack when conditions such as distance and blood volume are met.");
				GUI_VAR.GUI_Tips(Block_Misc, 14, "Lock the game window to the front.");
				GUI_VAR.GUI_Tips(Block_Misc, 16, "Reduce the load on the CPU.", 0, { 255,150,150 });
				GUI_VAR.GUI_Tips(Block_Misc, 17, "Reduce screen brightness.");
				GUI_VAR.GUI_Tips(Block_Misc, 19, "Return to coordinates when shooting.");
				GUI_VAR.GUI_Tips(Block_Misc, 22, "Implement ESP by modifying cursor coordinates.");
				GUI_VAR.GUI_Tips(Block_Misc, 23, "Automatically walk along the map.");
				GUI_VAR.GUI_Tips(Block_Misc, 25, "Use when the game sensitivity is too high.", 0, { 255,150,150 });
				GUI_VAR.GUI_Tips({ Block_Resolution.x + 10,Block_Resolution.y }, 1, "Flexible switching of window resolution.");
				GUI_VAR.GUI_Tips({ Block_CloudPreset.x + 10,Block_CloudPreset.y }, 1, "Load parameter files stored in Github.");
				GUI_VAR.GUI_Tips(Block_Spoof, 1, "Prank local player. (global switch)", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 2, "Aimbot for teammate.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 4, "Enhanced upward deflection of firearms.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 6, "Drop it when picking up C4.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 7, "Rotate view......", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 8, "Drop the weapon when killing an enemy with a sniper rifle.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 9, "Learn recent player actions.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 10, "Mimic Ragebot silent aim.", 0, { 200,200,150 });
				GUI_VAR.GUI_Tips({ Block_Spoof.x + 10,Block_Spoof.y }, 12, "Automatically follow other players when above their heads.", 0, { 200,200,150 });
				GUI_WindowSize = { 1010,870 };
			}
			else if (UI_Panel == 3)//List
			{
				const auto Block_PlayerList = GUI_VAR.GUI_Block(150, 30, GUI_VAR.Window_GetSize().y - 60, "Player list", 330);
				static BOOL ReloadList = false; static vector<string> PlayerNameList = {}; static string PlayerName = "";
				GUI_VAR.GUI_Slider<int, class CLASS_Block_PlayerList_1>(Block_PlayerList, 1, "Player ID", 0, 64, Debug_Control_Var::SelectPlayer);
				GUI_VAR.GUI_Button_Small({ Block_PlayerList.x + 10,Block_PlayerList.y }, 1, ReloadList);
				if (ReloadList || System::Sleep_Tick<class CLASS_DEBUG_AUTO_RELOAD_PLAYERLIST_>(5000)) { ReLoad(true); PlayerNameList = {}; for (short i = 0; i <= 64; ++i)PlayerNameList.push_back(Advanced::Player_Name(i)); }//刷新玩家列表页面
				GUI_VAR.GUI_InputText<class CLASS_Block_PlayerList_2>(Block_PlayerList, 2, PlayerName, "Search player name");
				if (PlayerName != "" && PlayerName != "None") { for (short i = 0; i <= 64; ++i)if (PlayerName == Advanced::Player_Name(i))Debug_Control_Var::SelectPlayer = i; }//人物名称搜索
				GUI_VAR.GUI_List<class CLASS_Block_PlayerList_3>(Block_PlayerList, 3, PlayerNameList, Debug_Control_Var::SelectPlayer, 27);
				GUI_VAR.GUI_Tips({ Block_PlayerList.x + 12,Block_PlayerList.y }, 1, "Reload player list.");
				GUI_VAR.GUI_Tips({ Block_PlayerList.x + 12,Block_PlayerList.y }, 2, "Search player name.");
				const auto Block_Info = GUI_VAR.GUI_Block(510, 30, 490, "Info", 330);
				const auto Player_Pawn = Advanced::Traverse_Player(Debug_Control_Var::SelectPlayer);
				Variable::Vector4 Debug_PawnColor = { 0,0,0 };//人物数据地址绘制颜色
				if (Player_Pawn.Pawn() == Global_LocalPlayer.Pawn())Debug_PawnColor = { 100,100,255 };//自身
				else if (Player_Pawn.TeamNumber() == Global_LocalPlayer.TeamNumber())Debug_PawnColor = { 0,255,0 };//同队
				else if (Player_Pawn.TeamNumber() != Global_LocalPlayer.TeamNumber())Debug_PawnColor = { 255,0,0 };//不同队
				if (Player_Pawn.Health() == 0)Debug_PawnColor = { 150,150,150 };//无效或是死亡
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 1, "client.dll -> " + Variable::Hex_String(Module_client));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 2, "Pawn -> " + Variable::Hex_String(Player_Pawn.Pawn()), Debug_PawnColor);
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 3, "Name: " + Advanced::Player_Name(Debug_Control_Var::SelectPlayer));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 4, "Health: " + to_string(Player_Pawn.Health()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 5, "Armor: " + to_string(Player_Pawn.Armor()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 6, "TeamNum: " + to_string(Player_Pawn.TeamNumber()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 7, "IDEntIndex: " + to_string(Player_Pawn.IDEntIndex()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 8, "Flags: " + to_string(Player_Pawn.Flags()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 9, "ShotsFired: " + to_string(Player_Pawn.ShotsFired()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 10, "MoveSpeed: " + to_string(Player_Pawn.MoveSpeed()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 11, "Spotted: " + to_string(Player_Pawn.Spotted()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 12, "Scoped: " + to_string(Player_Pawn.Scoped()));
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 13, "ActiveWeapon: " + Player_Pawn.ActiveWeaponName() + " (" + to_string(Player_Pawn.ActiveWeapon()) + ")");
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 14, "Origin: ");
				auto PlayerOrigin = Player_Pawn.Origin(); GUI_VAR.GUI_PosSelector({ Block_Info.x - 100,Block_Info.y }, 14, PlayerOrigin);
				GUI_VAR.GUI_Text({ Block_Info.x - 20,Block_Info.y }, 15, "Angle: ");
				auto PlayerViewAngle = Player_Pawn.ViewAngles(); GUI_VAR.GUI_PosSelector({ Block_Info.x - 100,Block_Info.y }, 15, PlayerViewAngle);
				GUI_VAR.GUI_Tips({ Block_Info.x + 3,Block_Info.y }, 1, "Cloud offsets date: " + CS2_Offsets::Offsets_Date);
				const auto Block_Offsets = GUI_VAR.GUI_Block(870, 30, GUI_VAR.Window_GetSize().y - 60, "Offsets", 330);
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 1, "Update date: " + CS2_Offsets::Offsets_Date);
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 2, "dwLocalPlayerController = " + Variable::Hex_String(CS2_Offsets::dwLocalPlayerController));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 3, "dwLocalPlayerPawn = " + Variable::Hex_String(CS2_Offsets::dwLocalPlayerPawn));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 4, "dwEntityList = " + Variable::Hex_String(CS2_Offsets::dwEntityList));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 5, "dwViewAngles = " + Variable::Hex_String(CS2_Offsets::dwViewAngles));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 6, "dwViewMatrix = " + Variable::Hex_String(CS2_Offsets::dwViewMatrix));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 7, "m_hPlayerPawn = " + Variable::Hex_String(CS2_Offsets::m_hPlayerPawn));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 8, "m_iTeamNum = " + Variable::Hex_String(CS2_Offsets::m_iTeamNum));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 9, "m_ArmorValue = " + Variable::Hex_String(CS2_Offsets::m_ArmorValue));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 10, "m_iHealth = " + Variable::Hex_String(CS2_Offsets::m_iHealth));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 11, "m_iIDEntIndex = " + Variable::Hex_String(CS2_Offsets::m_iIDEntIndex));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 12, "m_fFlags = " + Variable::Hex_String(CS2_Offsets::m_fFlags));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 13, "m_iShotsFired = " + Variable::Hex_String(CS2_Offsets::m_iShotsFired));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 14, "m_vecVelocity = " + Variable::Hex_String(CS2_Offsets::m_vecVelocity));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 15, "m_bSpotted = " + Variable::Hex_String(CS2_Offsets::m_bSpotted));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 16, "m_bIsScoped = " + Variable::Hex_String(CS2_Offsets::m_bIsScoped));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 17, "m_pClippingWeapon = " + Variable::Hex_String(CS2_Offsets::m_pClippingWeapon));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 18, "m_pGameSceneNode = " + Variable::Hex_String(CS2_Offsets::m_pGameSceneNode));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 19, "m_vecOrigin = " + Variable::Hex_String(CS2_Offsets::m_vecOrigin));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 20, "m_aimPunchCache = " + Variable::Hex_String(CS2_Offsets::m_aimPunchCache));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 21, "m_vecViewOffset = " + Variable::Hex_String(CS2_Offsets::m_vecViewOffset));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 22, "m_dwBoneMatrix = " + Variable::Hex_String(CS2_Offsets::m_dwBoneMatrix));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 23, "m_iszPlayerName = " + Variable::Hex_String(CS2_Offsets::m_iszPlayerName));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 24, "m_pActionTrackingServices = " + Variable::Hex_String(CS2_Offsets::m_pActionTrackingServices));
				GUI_VAR.GUI_Text({ Block_Offsets.x - 20,Block_Offsets.y }, 25, "m_iNumRoundKills = " + Variable::Hex_String(CS2_Offsets::m_iNumRoundKills));
				//-----------------------------------------------------------------------------------------------------------------------------测试控件-------
				const auto Block_DebugControl = GUI_VAR.GUI_Block(510, 540, 280, "Debug control", 330);
				GUI_VAR.GUI_Checkbox(Block_DebugControl, 1, "Show console window", UI_Debug_ShowDebugWindow);
				GUI_VAR.GUI_Button_Small({ Block_DebugControl.x - 2,Block_DebugControl.y }, 1, Debug_Control_Var::ClearCommand);
				GUI_VAR.GUI_InputText<class CLASS_Block_DebugControl_1>({ Block_DebugControl.x - 15,Block_DebugControl.y }, 2, Debug_Control_Var::SystemCommand, "command ex./add checkbox");
				GUI_VAR.GUI_Button_Small({ Block_DebugControl.x - 2,Block_DebugControl.y }, 2, Debug_Control_Var::SendSystemCommand);
				GUI_VAR.GUI_Checkbox(Block_DebugControl, 3, "Checkbox 1", Debug_Control_Var::Checkbox_1);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_DebugControl_2>({ Block_DebugControl.x - 70,Block_DebugControl.y }, 3, Debug_Control_Var::KeySelector_1);
				GUI_VAR.GUI_Checkbox(Block_DebugControl, 4, "Checkbox 2", Debug_Control_Var::Checkbox_2);
				GUI_VAR.GUI_KeySelector<class CLASS_Block_DebugControl_3>({ Block_DebugControl.x - 70,Block_DebugControl.y }, 4, Debug_Control_Var::KeySelector_2);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_DebugControl_4>({ Block_DebugControl.x - 15,Block_DebugControl.y }, 5, "Slider int", -100, 100, Debug_Control_Var::Slider_1);
				GUI_VAR.GUI_Slider<float, class CLASS_Block_DebugControl_5>({ Block_DebugControl.x - 15,Block_DebugControl.y }, 6, "Slider float", -50, 50, Debug_Control_Var::Slider_2);
				GUI_VAR.GUI_Button({ Block_DebugControl.x - 15,Block_DebugControl.y }, 7, "Button 1", Debug_Control_Var::Button_1);
				GUI_VAR.GUI_Button({ Block_DebugControl.x - 15,Block_DebugControl.y }, 8, "Button 2", Debug_Control_Var::Button_2);
				GUI_VAR.GUI_Tips(Block_DebugControl, 1, "Clear console.");
				GUI_VAR.GUI_Tips(Block_DebugControl, 2, "Send command to system.");
				GUI_VAR.GUI_Tips(Block_DebugControl, 3, "GUI Draw FPS: " + to_string(GUI_VAR.Window_FPS() + System::Rand_Number(0, 1)) + "." + to_string(System::Rand_Number(100, 999)) + "  (" + to_string(GUI_VAR.Window_FPS()) + ")");//绘制GUI绘制帧数
				if (Debug_Control_Var::ClearCommand)system("cls");//清除控制台
				if (Debug_Control_Var::SendSystemCommand && Debug_Control_Var::SystemCommand != "")//向系统发送指令
				{
					cout << Debug_Control_Var::SystemCommand << endl;//打印控制台
					if (Variable::String_Find(Debug_Control_Var::SystemCommand, "/"))//检测是否是命令
					{
						auto Last_Send_STR = Debug_Control_Var::SystemCommand; Last_Send_STR.erase(0, 1);//擦除/
						const auto Return_String = Variable::String_Lower(Last_Send_STR);//转换小写 (自定义命令只支持小写判断)
						if (Return_String == "add checkbox")++Debug_Control_Var::Checkbox_Quantity;
						else system(Last_Send_STR.c_str());
					}
					else System::Log("Error: Invalid command Please add / in front of", true);//报错提示
					Debug_Control_Var::SystemCommand = "";//重置输入
				}
				GUI_WindowSize = { 1230,850 };
			}
			else if (UI_Panel == 4)//Setting
			{
				const auto Block_About = GUI_VAR.GUI_Block(150, 30, 160, "About");
				GUI_VAR.GUI_Text(Block_About, 1, "Flake", GUI_IO.GUIColor);
				GUI_VAR.GUI_Text({ Block_About.x + 47,Block_About.y }, 1, "for Counter-Strike 2", { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 2, "Version: " + Variable::Float_Precision(Flake_Version), { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 3, "Release date: " + Flake_ReleaseDate, { 100,100,100 });
				GUI_VAR.GUI_Text(Block_About, 4, "Author: nety.com", { 100,100,100 });
				static BOOL OpenGithubURL; GUI_VAR.GUI_Button_Small({ Block_About.x + 10,Block_About.y }, 4, OpenGithubURL);
				if (OpenGithubURL)System::Open_Website("nety.com");//打开作者Github主题页面
				GUI_VAR.GUI_Tips({ Block_About.x + 10,Block_About.y }, 1, "No ban record so far in 2020!!!", 0, GUI_IO.GUIColor);
				const auto Block_Menu = GUI_VAR.GUI_Block(150, 210, 310, "Menu");
				GUI_VAR.GUI_Text(Block_Menu, 1, "Menu key");
				GUI_VAR.GUI_KeySelector<class CLASS_Block_Menu_1>(Block_Menu, 1, UI_Setting_MenuKey);
				GUI_VAR.GUI_Checkbox(Block_Menu, 2, "Menu color", UI_Setting_CustomColor);
				GUI_VAR.GUI_ColorSelector_a(Block_Menu, 2, UI_Setting_MainColor);
				if (UI_Setting_MainColor.a < 100)UI_Setting_MainColor.a = 100;
				GUI_VAR.GUI_Slider<float, class CLASS_Block_Menu_2>(Block_Menu, 3, "Menu animation smooth", 1, 10, UI_Setting_MenuAnimation);
				GUI_VAR.GUI_Slider<int, class CLASS_Block_Menu_3>(Block_Menu, 4, "Menu font size", 0, 40, UI_Setting_MenuFontSize, "px");
				GUI_VAR.GUI_InputText<class CLASS_Block_Menu_4>(Block_Menu, 5, UI_Setting_MenuFont, "Custom menu font");
				static BOOL StartCS, QuitCS;
				if (CS2_HWND)GUI_VAR.GUI_Button(Block_Menu, 6, "Quit CS", QuitCS, 90);
				else GUI_VAR.GUI_Button(Block_Menu, 6, "Start CS", StartCS, 85);
				if (StartCS && CS2_MEM.Get_ProcessHWND() == 0)if (CS2_MEM.Get_ProcessHWND() == 0)System::Open_Website("steam://rungameid/730");//启动CS
				if (QuitCS && CS2_MEM.Get_ProcessHWND() != 0)Window::Kill_Window(CS2_MEM.Get_ProcessHWND());//关闭CS
				static BOOL GithubRepositories; GUI_VAR.GUI_Button(Block_Menu, 7, "Github repositories", GithubRepositories, 60);
				if (GithubRepositories)System::Open_Website("nety.com");//打开Github项目地址
				static BOOL RestartMenu; GUI_VAR.GUI_Button(Block_Menu, 8, "Restart menu", RestartMenu, 75);
				if (RestartMenu) { GUI_VAR.Window_SetTitle("Flake - Restarting"); System::Self_Restart(); }//重启菜单
				static BOOL UnloadMenu; GUI_VAR.GUI_Button(Block_Menu, 9, "Unload", UnloadMenu, 95);
				if (UnloadMenu)exit(0);//关闭菜单
				const auto Block_Presets = GUI_VAR.GUI_Block(580, 30, 490, "Local presets", 320);
				static int SelectedPresetID = 0; static vector<string> FileList = System::Traversal_FindFile(Preset_Folder + "\\*", ".cfg", true, "UTT"); static string CreatePresetName; static BOOL Create, Load, Save, Delete;
				GUI_VAR.GUI_List<class CLASS_Block_Presets_1>(Block_Presets, 1, FileList, SelectedPresetID, 11);
				GUI_VAR.GUI_Button(Block_Presets, 11, "Load", Load, 95); if (Load && SelectedPresetID != -1)LoadPreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				GUI_VAR.GUI_Button(Block_Presets, 12, "Save", Save, 95); if (Save && SelectedPresetID != -1)SavePreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				GUI_VAR.GUI_InputText<class CLASS_Block_Presets_2>(Block_Presets, 13, CreatePresetName, "Create preset name");
				GUI_VAR.GUI_Button(Block_Presets, 14, "Create", Create, 90); if (Create) { CreatePreset(CreatePresetName); CreatePresetName = ""; }
				GUI_VAR.GUI_Button(Block_Presets, 15, "Delete", Delete, 92); if (Delete && SelectedPresetID != -1)DeletePreset(Variable::String_Delete(FileList[SelectedPresetID], "UTT"));
				if (Create || Load || Save || Delete)FileList = System::Traversal_FindFile(Preset_Folder + "\\*", ".cfg", true, "UTT");//刷新文件列表
				GUI_VAR.GUI_Tips({ Block_Presets.x + 10,Block_Presets.y }, 1, "Customize and save your presets.");
				GUI_WindowSize = { 930,550 };
			}
			else if (UI_Panel == 5)//Attach
			{
				const auto Block_Size = GUI_VAR.Window_GetSize().y - 60;
				const auto Block_A = GUI_VAR.GUI_Block(150, 30, Block_Size, "Block_A");
				//A区块控件代码区域
				for (int i = 1; i <= Debug_Control_Var::Checkbox_Quantity; ++i)GUI_VAR.GUI_Checkbox(Block_A, i, "Checkbox " + to_string(i), Debug_Control_Var::Checkbox_Value[i]);
				const auto Block_B = GUI_VAR.GUI_Block(580, 30, Block_Size, "Block_B");
				//B区块控件代码区域
				GUI_WindowSize = { 1010,900 };
			}
			GUI_VAR.Draw_GUI(Debug_Control_Var::Checkbox_2);//最终绘制GUI画板
			if (UI_Misc_SavePerformance)Sleep(5);//节省电脑占用性能
		}
	}
}
void Thread_Misc() noexcept//杂项线程 (一些菜单事件处理和杂项功能)
{
	System::Log("Load Thread: Thread_Misc()");
	Window::Windows Window_Watermark; Window_Watermark.Create_RenderBlock_Alpha(Window::Get_Resolution().x, 50, "FlakeTeam - Watermark");//创建水印透明窗口
	Window::Render Window_Watermark_Render; Window_Watermark_Render.CreatePaint(Window_Watermark.Get_HWND(), 0, 0, Window::Get_Resolution().x, 50);//创建水印绘制画板
	Window::Windows Window_NightMode; Window_NightMode.Create_RenderBlock(Window::Get_Resolution().x, Window::Get_Resolution().y, "FlakeFlakeTeam - NightMode");//夜晚模式窗口
	Window_Watermark.Show_Window();//将水印修改为最前端绘制覆盖窗口
	ReLoad(true);//刷新CS2_SDK内存数据 (快速初始化)
	while (true)
	{
		ReLoad();//刷新CS2_SDK内存数据
		Global_TeamCheck = UI_Misc_TeamCheck;//队伍判断(文件跨越修改变量)
		if (UI_Misc_LockGameWindow && !Menu_Open)SetForegroundWindow(CS2_HWND);//锁定CS窗口到最前端
		if (UI_Debug_ShowDebugWindow)//显示调试控制台窗口
		{
			Window::Show_ConsoleWindow();//显示控制台
			Window::Set_Topmost_Status(GetConsoleWindow(), true);//将控制台窗口改为最前端
		}
		else Window::Hide_ConsoleWindow();//隐藏控制台
		//----------------------------------------------------------------------------------------------------------------------------------------
		if (UI_Misc_Watermark) // 水印
		{
			Window::Set_LimitWindowShow(Window_Watermark.Get_HWND(), UI_Misc_ByPassOBS); // 绕过OBS
			Window_Watermark.Set_WindowPos(0, 0); // 水印窗口默认坐标
			if (System::Sleep_Tick<class CLASS_WaterMark_WindowReload_Delay_>(200)) // 降低CPU占用
			{
				Window_Watermark.Set_WindowTitle(System::Rand_String(10)); // 随机水印窗口标题
				static string WaterMark_String = "";
				short WaterMark_String_Size = strlen(WaterMark_String.c_str()) * 6.5; // 字符大小稍微增大
				if (!CS2_HWND)
					WaterMark_String = "FlakeTeam | CS not found | " + System::Get_UserName() + " | " + System::Time_String();
				else
				{
					WaterMark_String = "FlakeTeam | " + Advanced::LocalPlayer_Name() + " | " + System::Time_String();
					WaterMark_String_Size = strlen(WaterMark_String.c_str()) * 7.0; // 字符大小进一步调整
				}

				const Variable::Vector2 Watermark_Pos = { Window::Get_Resolution().x - WaterMark_String_Size - 20, 20 };
				Window_Watermark_Render.Render_SolidRect(0, 0, 9999, 9999, { 0, 0, 0 });
				Window_Watermark_Render.RenderA_SolidRect(Watermark_Pos.x, Watermark_Pos.y, WaterMark_String_Size + 10, 25, { 1, 1, 1, 180 }); // 调整透明度和大小

				if (UI_Setting_CustomColor)
				{
					Window_Watermark_Render.RenderA_GradientRect(Watermark_Pos.x, Watermark_Pos.y, WaterMark_String_Size / 2, 2, GUI_IO.GUIColor.D_Alpha(255) / 1.5, GUI_IO.GUIColor.D_Alpha(255));
					Window_Watermark_Render.RenderA_GradientRect(Watermark_Pos.x + WaterMark_String_Size / 2, Watermark_Pos.y, WaterMark_String_Size / 2, 2, GUI_IO.GUIColor.D_Alpha(255), GUI_IO.GUIColor.D_Alpha(255) / 1.5);
				}
				else
				{
					Window_Watermark_Render.RenderA_GradientRect(Watermark_Pos.x, Watermark_Pos.y, WaterMark_String_Size / 2, 2, { GUI_IO.GUIColor_Rainbow[0], GUI_IO.GUIColor_Rainbow[1], GUI_IO.GUIColor_Rainbow[2], 255 }, { GUI_IO.GUIColor_Rainbow[3], GUI_IO.GUIColor_Rainbow[4], GUI_IO.GUIColor_Rainbow[5], 255 });
					Window_Watermark_Render.RenderA_GradientRect(Watermark_Pos.x + WaterMark_String_Size / 2, Watermark_Pos.y, WaterMark_String_Size / 2, 2, { GUI_IO.GUIColor_Rainbow[3], GUI_IO.GUIColor_Rainbow[4], GUI_IO.GUIColor_Rainbow[5], 255 }, { GUI_IO.GUIColor_Rainbow[6], GUI_IO.GUIColor_Rainbow[7], GUI_IO.GUIColor_Rainbow[8], 255 });
				}

				Window_Watermark_Render.Render_String_UTT(Watermark_Pos.x + 8, Watermark_Pos.y + 4, WaterMark_String, "Arial Bold", 14, { 255, 255, 255 }, true); // 字体更改和大小调整

				if (Menu_Open) // 菜单开启时绘制调试信息
				{
					Window_Watermark_Render.RenderA_SmpStr(2, 2, "Release " + Flake_ReleaseDate, GUI_IO.GUIColor.D_Alpha(200).Min_Bri(200), { 1, 0, 0, 180 }); // 编译日期绘制
					Window_Watermark_Render.RenderA_SmpStr(2, 20, "Offsets " + CS2_Offsets::Offsets_Date, GUI_IO.GUIColor.D_Alpha(200).Min_Bri(200), { 1, 0, 0, 180 }); // 云偏移更新日期绘制
				}
				Window_Watermark_Render.DrawPaint(true); // 最终绘制
			}
		}
		else
		{
			Window_Watermark.Set_WindowPos(99999, 99999); // 将窗口移至边界外来代替隐藏窗口
		}

		//----------------------------------------------------------------------------------------------------------------------------------------
		static auto NightMode_Alpha = 0; const auto NightMode_Alpha_Ani = Variable::Animation<class CLASS_NightMode_Window_AlphaAnimation_>(NightMode_Alpha, 5);//夜晚模式透明度动画
		if (UI_Misc_NightMode && (Global_IsShowWindow || Menu_Open))
		{
			Window::Set_LimitWindowShow(Window_NightMode.Get_HWND(), UI_Misc_ByPassOBS);//绕过OBS
			Variable::Vector4 BackGround_Color = { 0,0,10 }; if (Menu_Open)BackGround_Color = GUI_IO.GUIColor / 10;//菜单外部背景色
			Window_NightMode.BackGround_Color(Variable::Animation_Vec4<class CLASS_NIGHTMODE_BACKGROUNDCOLOR_ANI_>(BackGround_Color));//绘制颜色背景板
			if (System::Sleep_Tick<class CLASS_NightMode_Window_Sleep_>(500))//降低CPU占用 (窗口标题,消息循环)
			{
				Window_NightMode.Set_WindowTitle(System::Rand_String(10));//随机夜晚模式窗口标题
				Window_NightMode.Fix_inWhile();//夜晚模式消息循环
			}
			NightMode_Alpha = UI_Misc_NightMode_Alpha;
		}
		else NightMode_Alpha = 0;
		if (NightMode_Alpha_Ani <= 0)MoveWindow(Window_NightMode.Get_HWND(), 0, 0, 0, 0, true);//透明度等于0的时候隐藏窗口
		else MoveWindow(Window_NightMode.Get_HWND(), 0, 0, Window::Get_Resolution().x, Window::Get_Resolution().y, true);//放大窗口
		Window_NightMode.Set_WindowAlpha(NightMode_Alpha_Ani);//夜晚模式修改透明度
		//----------------------------------------------------------------------------------------------------------------------------------------
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health())//一些杂项功能
		{
			const auto Local_Pos = Global_LocalPlayer.Origin();//本地人物坐标
			const auto Local_ActiveWeaponID = Global_LocalPlayer.ActiveWeapon();//本地人物手持武器ID
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_HitSound)//击打音效
			{
				static auto OldDamage = 0; static auto OldKill = 0;
				const auto Damage = Advanced::Local_RoundDamage();//伤害
				const auto Kill = Advanced::Local_RoundDamage(true);//击杀
				if (Damage != OldDamage)//当伤害或是击杀值变化则返回
				{
					if (Kill > OldKill)Beep(UI_Misc_HitSound_Tone * 2, UI_Misc_HitSound_Length);//Kill
					else if (Damage > OldDamage)Beep(UI_Misc_HitSound_Tone, UI_Misc_HitSound_Length);//Hit
					OldDamage = Damage; OldKill = Kill;
				}
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_AutoKnife && (!UI_Misc_AutoKnife_Key || System::Get_Key(UI_Misc_AutoKnife_Key)) && (Local_ActiveWeaponID == 42 || Local_ActiveWeaponID == 59 || Local_ActiveWeaponID >= 500))//自动刀
			{
				for (short i = 0; i < Global_ValidClassID.size(); ++i)
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);
					if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
					const auto Player_Pos = PlayerPawn.Origin();//敌人坐标
					const auto Angle = Variable::CalculateAngle(Local_Pos + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(3), Base::ViewAngles());
					if (Variable::Coor_Dis_3D(Local_Pos, Player_Pos) <= 70 && hypot(Angle.x, Angle.y) <= 40)//判断距离(世界坐标, 本地人物视角)
					{
						if ((PlayerPawn.Health() <= 55 && PlayerPawn.Health() > 30) || Variable::Dif_Value_Ran<float>(Base::ViewAngles().y, PlayerPawn.ViewAngles().y, 50))//血量判断重刀还是轻刀
						{
							ExecuteCommand("+attack2"); Sleep(1); ExecuteCommand("-attack2");
						}
						else { ExecuteCommand("+attack"); Sleep(1); ExecuteCommand("-attack"); }
						Sleep(1); ExecuteCommand("+lookatweapon"); Sleep(1); ExecuteCommand("-lookatweapon");
					}
				}
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_AutoTaser && (!UI_Misc_AutoTaser_Key || System::Get_Key(UI_Misc_AutoTaser_Key)) && Local_ActiveWeaponID == 31)//自动电击枪
			{
				for (short i = 0; i < Global_ValidClassID.size(); ++i)
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);
					if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
					const auto Player_Pos = PlayerPawn.Origin();//敌人坐标
					if (Variable::Coor_Dis_3D(Local_Pos, Player_Pos) <= 130 && PlayerPawn.Pawn() == Global_LocalPlayer.IDEntIndex_Pawn().Pawn())//判断距离 && 瞄准
					{
						ExecuteCommand("+attack"); Sleep(1); ExecuteCommand("-attack");
					}
				}
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_AntiAFKKick && System::Sleep_Tick<class CLASS_MISC_ANTIAFKKICK_>(5000)) { System::Mouse_Move(1, 0); Sleep(1); System::Mouse_Move(-1, 0); }//防止挂机踢出游戏脚本
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_QuickStop && (!UI_Misc_AutoPeek || !System::Get_Key(UI_Misc_AutoPeek_Key)) && !UI_Misc_WalkingBot)//自动快速急停
			{
				const auto Trigger_Value = 20;//急停终止速度
				if (!(System::Get_Key(0x57) || System::Get_Key(0x41) || System::Get_Key(0x44) || System::Get_Key(0x53) || System::Get_Key(VK_SPACE)) && Global_LocalPlayer.MoveSpeed() > Trigger_Value && Global_LocalPlayer.Flags() & (1 << 0))
				{
					for (int i = 0; i <= 3; ++i)//遍历 (为了精准急停)
					{
						if (Global_LocalPlayer.MoveSpeed() <= Trigger_Value)continue;//每次遍历都检查速度
						const auto LocalVel = Global_LocalPlayer.Velocity();
						const auto LocalYaw = Base::ViewAngles().y;
						const auto X = (LocalVel.x * cos(LocalYaw / 180 * 3.1415926) + LocalVel.y * sin(LocalYaw / 180 * 3.1415926));
						const auto Y = (LocalVel.y * cos(LocalYaw / 180 * 3.1415926) - LocalVel.x * sin(LocalYaw / 180 * 3.1415926));
						if (X > Trigger_Value) { ExecuteCommand("+back"); Sleep(1); ExecuteCommand("-back"); }
						else if (X < -Trigger_Value) { ExecuteCommand("+forward"); Sleep(1); ExecuteCommand("-forward"); }
						if (Y > Trigger_Value) { ExecuteCommand("+right"); Sleep(1); ExecuteCommand("-right"); }
						else if (Y < -Trigger_Value) { ExecuteCommand("+left"); Sleep(1); ExecuteCommand("-left"); }
					}
				}
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_AutoKillCeasefire)//击杀时自动停止开火
			{
				static auto OldKill = 0; const auto Kill = Advanced::Local_RoundDamage(true);//击杀
				if (OldKill != Kill) { if (Kill > OldKill)ExecuteCommand("-attack"); OldKill = Kill; }//当击杀值变化则返回停止开火
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_CursorESP && System::Get_Key(UI_Misc_CursorESP_Key))//鼠标光标透视 (为了支持全屏模式透视)
			{
				const auto Local_ViewMatrix = Base::ViewMatrix();//本地人物视角矩阵
				const auto CS_Scr_Res = Window::Get_WindowResolution(CS2_HWND);//游戏窗口大小
				for (short i = 0; i < Global_ValidClassID.size(); ++i)//人物ID遍历
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
					if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
					const auto PlayerPos_Scr = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(4), Local_ViewMatrix);//躯干屏幕坐标
					if (PlayerPos_Scr.x < 0 || PlayerPos_Scr.x > CS_Scr_Res.r)continue;//检测指定坐标是否在屏幕内
					System::Set_MousePos({ (int)PlayerPos_Scr.x + CS_Scr_Res.b,(int)PlayerPos_Scr.y + CS_Scr_Res.a });//最终修改光标坐标鼠标坐标
					Sleep(5);//光标停留更久
				}
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Spoof_Spoof)//恶搞功能
			{
				//--------------------------------------
				if (UI_Spoof_AimbotTeam && System::Get_Key(UI_Spoof_AimbotTeam_Key))//瞄准队友
				{
					struct AimPlayerFOV { Base::PlayerPawn Pawn = 0; float MinFov = 1337; Variable::Vector3 AimAngle = {}; }; AimPlayerFOV Target = {};//记录变量和变量结构体 (寻找与准星距离最近的人物)
					for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历所有实体 找到符合条件的人物Pawn 并且找到2D准星距离最近的实体
					{
						const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
						if (PlayerPawn.Pawn() == Global_LocalPlayer.Pawn() || !PlayerPawn.Health() || PlayerPawn.TeamNumber() != Global_LocalPlayer.TeamNumber())continue;//检查是否队友

						const auto NeedAngle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(6), Base::ViewAngles() + Global_LocalPlayer.AimPunchAngle() * 2);
						const auto Fov = hypot(NeedAngle.x, NeedAngle.y);//圆圈范围计算
						if (Fov < Target.MinFov)//范围判断
						{
							Target.Pawn = PlayerPawn;//刷新PlayerPawn
							Target.MinFov = Fov;//刷新最短Fov
							Target.AimAngle = NeedAngle;//刷新最终瞄准的Angle
						}
					}
					if (Target.MinFov <= 10)System::Mouse_Move(-Target.AimAngle.y * (30 - UI_Spoof_AimbotTeam_Smooth), Target.AimAngle.x * (30 - UI_Spoof_AimbotTeam_Smooth));//触发瞄准目标
				}
				//--------------------------------------
				if (UI_Spoof_IncreaseRecoil && System::Get_ValueBigger<int, class CLASS_MISC_Spoof_IncreaseRecoil_>(Global_LocalPlayer.ShotsFired()))System::Mouse_Move(0, -1 * UI_Spoof_IncreaseRecoil_Value);//加强后坐力
				//--------------------------------------
				if (UI_Spoof_DropC4 && Global_LocalPlayer.ActiveWeapon() == 49)ExecuteCommand("drop");//无法拾取C4
				//--------------------------------------
				if (UI_Spoof_FakeAntiAim && System::Get_Key(UI_Spoof_FakeAntiAim_Key))Advanced::Move_to_Angle(9999, 9999);//陀螺
				//--------------------------------------
				if (UI_Spoof_KillDropSniper)//丢枪狙
				{
					static auto OldKill = 0; const auto Kill = Advanced::Local_RoundDamage(true);//击杀
					if (Kill > OldKill && Global_LocalPlayer.ActiveWeapon(true) == 3 && Global_LocalPlayer.ShotsFired() == 1)ExecuteCommand("drop");//丢弃武器
					if (Kill != OldKill)OldKill = Kill;
				}
				//--------------------------------------
				static BOOL IS_LearnPlayer = false;//释放按键判断变量
				if (UI_Spoof_LearnPlayer && System::Get_Key(UI_Spoof_LearnPlayer_Key))//模仿最近玩家
				{
					IS_LearnPlayer = true; struct RecPla { Base::PlayerPawn Pawn = 0; int Dis = 99999; }; RecPla RecentPlayer;//最近的玩家结构体变量
					for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历计算最近玩家
					{
						const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
						if (PlayerPawn.Pawn() == Global_LocalPlayer.Pawn())continue;//过滤本地人物
						const auto For_Dis = Variable::Coor_Dis_3D(Global_LocalPlayer.Origin(), PlayerPawn.Origin());
						if (RecentPlayer.Dis > For_Dis) { RecentPlayer.Dis = For_Dis; RecentPlayer.Pawn = PlayerPawn; }
					}
					if (RecentPlayer.Dis <= 1000)//超出范围则不执行 (因为跟不上)
					{
						if (RecentPlayer.Pawn.ShotsFired() != 0) { ExecuteCommand("+attack"); Sleep(1); ExecuteCommand("-attack"); }//开枪
						if (!(RecentPlayer.Pawn.Flags() & (1 << 0))) { ExecuteCommand("+jump"); Sleep(1); ExecuteCommand("-jump"); }//跳跃
						Advanced::Move_to_Angle(RecentPlayer.Pawn.ViewAngles(), 5, 1);//学习玩家朝向角度
						Advanced::Move_to_Pos(RecentPlayer.Pawn.Origin());//移动到玩家
					}
				}
				else if (IS_LearnPlayer == true)//释放按键
				{
					ExecuteCommand("-forward");
					ExecuteCommand("-right");
					ExecuteCommand("-back");
					ExecuteCommand("-left");//释放所有按键
					IS_LearnPlayer = false;
				}
				//--------------------------------------
				static auto Old_Angle = Base::ViewAngles();//原始视角坐标 (要返回的坐标)
				if (UI_Spoof_FakeRageBot && System::Get_Key(UI_Spoof_FakeRageBot_Key))//对某玩家实施暴力瞄准
				{
					for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历人物ID
					{
						if (!System::Get_Key(UI_Spoof_FakeRageBot_Key))continue;//修复延时开枪
						if (UI_Spoof_FakeRageBot_Target && i != UI_Spoof_FakeRageBot_Target)continue;//任何目标判定
						const auto Target = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
						if (Target.Health() && Target.Pawn() != Global_LocalPlayer.Pawn())//目标活着 && 不是本地人物
						{
							const auto Aim_Angle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), Target.BonePos(6), Global_LocalPlayer.AimPunchAngle() * 2);//计算要瞄准的目标视角坐标
							Advanced::Move_to_Angle(Aim_Angle, 30, 0.15, 200);//将视角移动到目标位置
							if (Global_LocalPlayer.IDEntIndex_Pawn().Pawn() == Target.Pawn()) { ExecuteCommand("+attack"); Sleep(1); ExecuteCommand("-attack"); }//检查是否瞄准到
							Advanced::Move_to_Angle(Old_Angle, 40, 1, 50);//将视角移动到出发点位置 (实现Fake静默)
						}
					}
				}
				else Old_Angle = Base::ViewAngles();//刷新原坐标
				//--------------------------------------
				if (UI_Spoof_StepOnHead && Global_LocalPlayer.Flags() & (1 << 0))//在目标头上时自动跟随踩头
				{
					for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历计算最近玩家
					{
						const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
						if (PlayerPawn.Pawn() == Global_LocalPlayer.Pawn())continue;//过滤本地人物
						const auto PlayerPos = PlayerPawn.Origin(), LocalPlayerPos = Global_LocalPlayer.Origin();//目标和本地人物坐标
						if (Variable::Coor_Dis_2D(LocalPlayerPos, PlayerPos) <= 40 && LocalPlayerPos.z - PlayerPos.z >= 20)Advanced::Move_to_Pos(PlayerPos, 10);//移动到玩家
					}
				}
				//--------------------------------------
			}
			//----------------------------------------------------------------------------------------------------------------------------------------
			if (UI_Misc_SavePerformance)Sleep(3);//降低CPU占用
			else Sleep(1);
		}
		else Sleep(50);//降低CPU占用
	}
}
void Thread_Funtion_BunnyHop() noexcept//功能线程: 连跳
{
	System::Log("Load Thread: Thread_Funtion_BunnyHop()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Misc_BunnyHop && System::Get_Key(VK_SPACE))
		{
			if (Global_LocalPlayer.Flags() & (1 << 0)) { ExecuteCommand("+jump"); Sleep(1); ExecuteCommand("-jump"); }//当本地人物触及到地面跳跃
			Sleep(System::Rand_Number(1, 5, System::Tick()));
		}
		else Sleep(50);
	}
}
void Thread_Funtion_Aimbot() noexcept//功能线程: 瞄准机器人
{
	System::Log("Load Thread: Thread_Funtion_Aimbot()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Legit_Aimbot && (!UI_Legit_Aimbot_Key || System::Get_Key(UI_Legit_Aimbot_Key)))
		{
			System::Sleep_ns(1000);//比Sleep更快的函数为了更加自然平滑
			static short Aim_Range, Aim_Parts; static float Aim_Smooth;//瞄准范围,瞄准部位,瞄准平滑度
			const auto LocalPlayer_ActiveWeapon_ID = Global_LocalPlayer.ActiveWeapon();//本地人物手持武器ID
			const auto LocalPlayer_ActiveWeapon_Type = Global_LocalPlayer.ActiveWeapon(true);//本地人物手持武器类型
			if (LocalPlayer_ActiveWeapon_Type == 1)//手枪
			{
				if (UI_Legit_Armory_BodyAim_PISTOL)Aim_Parts = 3; else Aim_Parts = 6;
				Aim_Range = UI_Legit_Armory_Range_PISTOL / 3;
				Aim_Smooth = 40 - UI_Legit_Armory_Smooth_PISTOL;
			}
			else if (LocalPlayer_ActiveWeapon_Type == 2)//步枪
			{
				if (UI_Legit_Armory_BodyAim_RIFLE)Aim_Parts = 3; else Aim_Parts = 6;
				Aim_Range = UI_Legit_Armory_Range_RIFLE / 3;
				Aim_Smooth = 40 - UI_Legit_Armory_Smooth_RIFLE;
			}
			else if (LocalPlayer_ActiveWeapon_Type == 3)//狙击枪
			{
				if (UI_Legit_Armory_BodyAim_SNIPER)Aim_Parts = 3; else Aim_Parts = 6;
				Aim_Range = UI_Legit_Armory_Range_SNIPER / 3;
				Aim_Smooth = 40 - UI_Legit_Armory_Smooth_SNIPER;
			}
			else if (LocalPlayer_ActiveWeapon_Type == 4)//霰弹枪
			{
				if (UI_Legit_Armory_BodyAim_SHOTGUN)Aim_Parts = 3; else Aim_Parts = 6;
				Aim_Range = UI_Legit_Armory_Range_SHOTGUN / 3;
				Aim_Smooth = 40 - UI_Legit_Armory_Smooth_SHOTGUN;
			}
			else continue;//如果是无效的武器则重新来过 (刀,道具,电击枪等)
			if (!Aim_Range)continue;//范围为0时则重新来过
			if (!Aim_Smooth)Aim_Smooth = 1;//最小平滑度
			const auto Local_AimPunchAngle = Global_LocalPlayer.AimPunchAngle();
			Aim_Range = Aim_Range + -Local_AimPunchAngle.x;
			static Variable::Vector3 Recoil_Angle;//后坐力角度
			if (UI_Legit_Aimbot_RemoveRecoil)Recoil_Angle = Base::ViewAngles() + Local_AimPunchAngle * 2;//移除后坐力
			else Recoil_Angle = Base::ViewAngles();
			const auto CrosshairId = Advanced::Check_Enemy(Global_LocalPlayer.IDEntIndex_Pawn());//瞄准的实体Pawn
			struct AimPlayerFOV { Base::PlayerPawn Pawn = 0; float MinFov = 1337; Variable::Vector3 AimAngle = {}; }; AimPlayerFOV EligiblePlayers = {};//记录变量和变量结构体 (寻找与准星距离最近的人物)
			for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历所有实体 找到符合条件的人物Pawn 并且找到2D准星距离最近的实体
			{
				const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
				if (!Advanced::Check_Enemy(PlayerPawn) || (UI_Legit_Aimbot_TriggerOnAim && !CrosshairId) || (UI_Legit_Aimbot_JudgingWall && !PlayerPawn.Spotted()))continue;
				if (LocalPlayer_ActiveWeapon_Type == 4 && Variable::Coor_Dis_3D(PlayerPawn.Origin(), Global_LocalPlayer.Origin()) > UI_Legit_Armory_TriggerDistance_SHOTGUN)continue;//霰弹枪最大触发范围
				if (UI_Legit_Armory_HitSiteParser && PlayerPawn.Health() <= Global_LocalPlayer.ActiveWeaponDamage())Aim_Parts = 4;//部位解析器
				const auto NeedAngle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(Aim_Parts), Recoil_Angle);//最终瞄准角度
				const auto Fov = hypot(NeedAngle.x, NeedAngle.y);//准星与角度的距离
				if (Fov < EligiblePlayers.MinFov)//范围判断
				{
					EligiblePlayers.Pawn = PlayerPawn;//刷新PlayerPawn
					EligiblePlayers.MinFov = Fov;//刷新最短Fov
					EligiblePlayers.AimAngle = NeedAngle;//刷新最终瞄准的Angle
				}
			}
			if (EligiblePlayers.MinFov <= Aim_Range)//如果玩家在范围内则触发
			{
				if (Global_LocalPlayer.Scoped() && LocalPlayer_ActiveWeapon_Type == 3)System::Mouse_Move(-EligiblePlayers.AimAngle.y * Aim_Smooth * 3.5, EligiblePlayers.AimAngle.x * Aim_Smooth * 3.5, UI_Misc_MouseLowSensitivity);//加快开镜时灵敏度
				else System::Mouse_Move(-EligiblePlayers.AimAngle.y * Aim_Smooth, EligiblePlayers.AimAngle.x * Aim_Smooth, UI_Misc_MouseLowSensitivity);
				if (UI_Legit_Aimbot_AutoShoot && CrosshairId && (!UI_Legit_Aimbot_AutoStop || LocalPlayer_ActiveWeapon_Type == 4 || Advanced::Stop_Move()))//AutoShoot & CrosshairId & AutoStop
				{
					if (UI_Legit_Aimbot_AutoScope && LocalPlayer_ActiveWeapon_Type == 3 && !Global_LocalPlayer.Scoped()) { ExecuteCommand("+attack2"); Sleep(1); ExecuteCommand("-attack2"); Sleep(100); }//手持狙击枪时自动开镜
					if (EligiblePlayers.MinFov <= (101 - UI_Legit_Aimbot_AutoShootHitChance) * 0.01 || UI_Legit_Aimbot_AutoShootHitChance == 0)//最大边缘点 (为了更加精准的瞄准到目标部位)
					{
						ExecuteCommand("+attack");//开枪!!!
						if (LocalPlayer_ActiveWeapon_ID == 64)Sleep(250);//R8左轮无法开枪修复 (无法跟紧目标点)
						else Sleep(1);
						ExecuteCommand("-attack");
						if (LocalPlayer_ActiveWeapon_Type == 3 && LocalPlayer_ActiveWeapon_ID != 11 && LocalPlayer_ActiveWeapon_ID != 38)System::Key_Con(UI_Legit_Aimbot_Key);//单发狙击枪射击后释放触发按键
						if (Global_LocalPlayer.ShotsFired() != 0)Sleep(UI_Legit_Aimbot_AutoShootDelay);//自动开枪延迟 (缓解后座力)
					}
				}
			}
		}
		else Sleep(10);
	}
}
void Thread_Funtion_AdaptiveAimbot() noexcept//功能线程: 生物瞄准机器人(更加自然的效果)
{
	System::Log("Load Thread: Thread_Funtion_AdaptiveAimbot()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Legit_AdaptiveAimbot && System::Get_Key(VK_LBUTTON) && Global_LocalPlayer.ActiveWeapon(true) == 2)//当CS窗口在最前端 && 本地人物活着 && 按键按下 && 步枪
		{
			System::Sleep_ns(1500);//比Sleep更快的函数为了更加自然平滑
			float Aim_Range = 5; int Aim_Bone = 6; const auto PunchAngle = Global_LocalPlayer.AimPunchAngle();
			if (abs(PunchAngle.x) * 2 >= Aim_Range)Aim_Range = abs(PunchAngle.x) * 1.5;//计算开枪之后附加后坐力的范围
			struct AimPlayerFOV { Base::PlayerPawn Pawn = 0; float MinFov = 1337; Variable::Vector3 AimAngle = {}; }; AimPlayerFOV Target = {};//记录变量和变量结构体 (寻找与准星距离最近的人物)
			for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历所有实体 找到符合条件的人物Pawn 并且找到2D准星距离最近的实体
			{
				const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
				if (!Advanced::Check_Enemy(PlayerPawn) || !PlayerPawn.Spotted())continue;//当没有被发现则重新来过
				if (PlayerPawn.Health() <= 50)Aim_Bone = 4;//低血时瞄准躯干 (降低爆头率)
				const auto NeedAngle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(Aim_Bone), Base::ViewAngles() + PunchAngle * 2);//最终瞄准角度 (6: 头部)
				const auto Fov = hypot(NeedAngle.x, NeedAngle.y);//圆圈范围计算
				if (Fov < Target.MinFov)//范围判断
				{
					Target.Pawn = PlayerPawn;//刷新PlayerPawn
					Target.MinFov = Fov;//刷新最短Fov
					Target.AimAngle = NeedAngle;//刷新最终瞄准的Angle
				}
			}
			if (Target.MinFov <= Aim_Range)//如果玩家在范围内则触发
			{
				if (Global_LocalPlayer.ShotsFired() > 2 && Target.MinFov <= Aim_Range / 2 && Target.Pawn.MoveSpeed() <= 130)System::Mouse_Move(-Target.AimAngle.y * 30, Target.AimAngle.x * 30, UI_Misc_MouseLowSensitivity);
				else System::Mouse_Move(-Target.AimAngle.y * (20 - UI_Legit_AdaptiveAimbot_InitialSmooth), Target.AimAngle.x * (20 - UI_Legit_AdaptiveAimbot_InitialSmooth), UI_Misc_MouseLowSensitivity);
			}
			if (System::Get_ValueChangeState<int, class AdaptiveAimbot_KilledDelay_>(Advanced::Local_RoundDamage(true)))Sleep(300);//击杀目标后睡眠线程 防止以极快的速度击杀围在一起的目标们
		}
		else Sleep(10);
	}
}
void Thread_Funtion_Triggerbot() noexcept//功能线程: 自动扳机
{
	System::Log("Load Thread: Thread_Funtion_Triggerbot()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Legit_Triggerbot && System::Get_Key(UI_Legit_Triggerbot_Key))//当CS窗口在最前端 && 本地人物活着 && 按键按下
		{
			System::Sleep_ns(500);//纳秒级延时
			const auto Local_ActiveWeaponID = Global_LocalPlayer.ActiveWeapon();//本地人物手持武器序号
			const auto Local_ActiveWeaponType = Global_LocalPlayer.ActiveWeapon(true);//本地人物手持武器类型
			if (Local_ActiveWeaponID == 42 || Local_ActiveWeaponID == 59 || Local_ActiveWeaponID >= 500 || Local_ActiveWeaponID == 31)continue;//过滤特殊武器 (刀子, 电击枪)
			else if (((UI_Legit_Triggerbot_AnyTarget && Global_LocalPlayer.IDEntIndex() != -1) || Advanced::Check_Enemy(Global_LocalPlayer.IDEntIndex_Pawn())) && (!UI_Legit_Triggerbot_ShootWhenAccurate || Local_ActiveWeaponType == 1 || Local_ActiveWeaponType == 4 || Advanced::Stop_Move(50, false)))
			{
				ExecuteCommand("+attack");//Shoot!! 开枪!!
				if (Local_ActiveWeaponType == 1 || Local_ActiveWeaponType == 3 || Local_ActiveWeaponType == 4)Sleep(1);//单发强不进行长按处理
				else Sleep(UI_Legit_Triggerbot_ShootDuration);
				ExecuteCommand("-attack");
				Sleep(UI_Legit_Triggerbot_ShootDelay);
			}
		}
		else Sleep(50);
	}
}
void Thread_Funtion_AssisteAim() noexcept//功能线程: 精确瞄准
{
	System::Log("Load Thread: Thread_Funtion_AssisteAim()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health())//当CS窗口在最前端 && 本地人物活着
		{
			Sleep(1);//降低CPU利用率
			if (UI_Legit_PreciseAim)//精确瞄准
			{
				const auto Local_ActiveWeaponID = Global_LocalPlayer.ActiveWeapon();//本地人物手持武器ID
				if (Local_ActiveWeaponID == 42 || Local_ActiveWeaponID == 59 || Local_ActiveWeaponID >= 500) { ExecuteCommand("m_yaw " + to_string(UI_Legit_PreciseAim_DefaultSensitivity)); Sleep(10); continue; }//过滤特殊武器 (刀类)
				if (Advanced::Check_Enemy(Global_LocalPlayer.IDEntIndex_Pawn()))ExecuteCommand("m_yaw " + to_string(UI_Legit_PreciseAim_EnableSensitivity));
				else ExecuteCommand("m_yaw " + to_string(UI_Legit_PreciseAim_DefaultSensitivity));
			}
			if (UI_Legit_MagnetAim && !System::Get_Key(VK_LBUTTON) && Global_LocalPlayer.ActiveWeapon() != 0 && Global_LocalPlayer.ActiveWeapon(true) != 3 && Global_LocalPlayer.MoveSpeed() <= 150)//磁吸瞄准
			{
				const float Aim_Range = UI_Legit_MagnetAim_Range / 5;//瞄准范围
				struct AimPlayerFOV { Base::PlayerPawn Pawn = 0; float MinFov = 1337; Variable::Vector3 AimAngle = {}; }; AimPlayerFOV EligiblePlayers = {};//记录变量和变量结构体 (寻找与准星距离最近的人物)
				for (short i = 0; i < Global_ValidClassID.size(); ++i)//人物ID遍历
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//遍历的人物Pawn
					if (!Advanced::Check_Enemy(PlayerPawn) || !PlayerPawn.Spotted())continue;//简单的实体判断
					const auto NeedAngle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(6), Base::ViewAngles());
					const auto Fov = hypot(NeedAngle.x, NeedAngle.y);
					if (Fov < EligiblePlayers.MinFov)//范围判断
					{
						EligiblePlayers.Pawn = PlayerPawn;//刷新PlayerPawn
						EligiblePlayers.MinFov = Fov;//刷新最短Fov
						EligiblePlayers.AimAngle = NeedAngle;//刷新最终瞄准的Angle
					}
				}
				if (UI_Legit_MagnetAim_OnlyHeadLine)EligiblePlayers.AimAngle.y = 0;//只处理Y坐标 (只磁吸爆头线)
				if (EligiblePlayers.MinFov <= Aim_Range && EligiblePlayers.MinFov >= 0.5)System::Mouse_Move(-EligiblePlayers.AimAngle.y * (10 - UI_Legit_MagnetAim_Smooth), EligiblePlayers.AimAngle.x * (10 - UI_Legit_MagnetAim_Smooth) * 0.7, UI_Misc_MouseLowSensitivity);
			}
		}
		else Sleep(50);
	}
}
void Thread_Funtion_RemoveRecoil() noexcept//功能线程: 移除后坐力
{
	System::Log("Load Thread: Thread_Funtion_RemoveRecoil()");
	while (true)
	{
		static auto OldPunch = Variable::Vector3{};
		if (CS2_HWND && Global_IsShowWindow && UI_Legit_RemoveRecoil && Global_LocalPlayer.Health() && System::Get_Key(VK_LBUTTON))//移除后坐力
		{
			if (Global_LocalPlayer.ShotsFired() >= UI_Legit_RemoveRecoil_StartBullet)//判断开出的子弹数
			{
				const auto AimPunch = Global_LocalPlayer.AimPunchAngle();//原始后坐力角度
				auto NewPunch = Variable::Vector3{ OldPunch.x - AimPunch.x * 2,OldPunch.y - AimPunch.y * 2,0 };//计算后坐力之后的角度
				if (UI_Legit_RemoveRecoil_HorizontalRepair)NewPunch.x = 0;//只处理X坐标
				System::Mouse_Move(-NewPunch.y * UI_Legit_RemoveRecoil_Sensitive, NewPunch.x * (UI_Legit_RemoveRecoil_Sensitive / 2 + 5));//修改计算后坐力之后的角度
				OldPunch = AimPunch * 2;
			}
			else OldPunch = { 0,0,0 };
			Sleep(1);
		}
		else { OldPunch = { 0,0,0 }; Sleep(50); }
	}
}
void Thread_Funtion_PlayerESP() noexcept//功能线程: 透视和一些视觉杂项
{
	System::Log("Load Thread: Thread_Funtion_PlayerESP()");
	Window::Windows RenderWindow; RenderWindow.Create_RenderBlock_Alpha(Window::Get_Resolution().x, Window::Get_Resolution().y, "FlakeTeam - PlayerESP");//创建绘制覆盖窗口
	Window::Render ESP_Paint; ESP_Paint.CreatePaint(RenderWindow.Get_HWND(), 0, 0, Window::Get_Resolution().x, Window::Get_Resolution().y);//创建内存画板
	while (true)
	{
		Sleep(UI_Visual_ESP_DrawDelay);//降低CPU占用
		RenderWindow.Set_WindowTitle(System::Rand_String(10));//随机实体透视窗口标题
		const auto CS_Scr_Res = Window::Get_WindowResolution(CS2_HWND);
		MoveWindow(RenderWindow.Get_HWND(), CS_Scr_Res.b, CS_Scr_Res.a, CS_Scr_Res.r, CS_Scr_Res.g, true);//修改 Pos & Size
		if (UI_Visual_ESP_DrawAlpha == -1)//敌人开枪时显示透视
		{
			static short ESP_DrawAlpha = 0;//初始化透明度变量
			if (ESP_DrawAlpha <= 0)Sleep(20);//透明度为0时睡眠 (降低CPU占用)
			ESP_DrawAlpha -= 5;//淡化透明度
			for (short i = 0; i < Global_ValidClassID.size(); ++i)//遍历所有有效人物
			{
				const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);//ID转换为Pawn
				if (PlayerPawn.ShotsFired() != 0)ESP_DrawAlpha = 230;//刷新显示
			}
			if (!Global_LocalPlayer.Health())ESP_DrawAlpha = 230;//本地人物死亡时一直显示
			Window::Set_WindowLayeredColor(RenderWindow.Get_HWND(), { 0,0,0 }, ESP_DrawAlpha, LWA_ALPHA);//窗口透明度设置
		}
		else Window::Set_WindowLayeredColor(RenderWindow.Get_HWND(), { 0,0,0 }, Variable::Animation<class CLASS_PlayerESP_Alpha_Animation_>(UI_Visual_ESP_DrawAlpha, 2), LWA_ALPHA);//窗口透明度设置
		Window::Set_LimitWindowShow(RenderWindow.Get_HWND(), UI_Misc_ByPassOBS);//绕过OBS
		ESP_Paint.Render_SolidRect(0, 0, 9999, 9999, { 0,0,0 });//清除画板
		if (CS2_HWND && (Menu_Open || Global_IsShowWindow))//当CS窗口在最前端 && 菜单在最前端
		{
			Window::Set_Topmost_Status(RenderWindow.Get_HWND(), Global_IsShowWindow);//修改窗口为最前端窗口 (覆盖一切的!!!)
			if (UI_Visual_ESP && (!UI_Visual_ESP_Key || System::Key_Toggle<class CLASS_PlayerESP_KeyToggle_>(UI_Visual_ESP_Key)))//ESP 透视
			{
				auto Draw_Color = GUI_IO.GUIColor;
				if (UI_Visual_ESP_CustomColor)Draw_Color = UI_Visual_ESP_CustomColor_Color;//自定义透视ESP颜色
				const auto Local_Matrix = Base::ViewMatrix(); const auto Local_Angles = Base::ViewAngles(); const auto Local_Position = Global_LocalPlayer.Origin();
				for (short i = 0; i < Global_ValidClassID.size(); ++i)
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);
					static uintptr_t C4_CachePlayerPawn = 0; if (PlayerPawn.ActiveWeaponName() == "C4")C4_CachePlayerPawn = PlayerPawn.Pawn();//更新C4缓存人物ID (可能会有刷新偏差Bug)
					if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
					const auto Top_Pos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(6) + Variable::Vector3{ 0, 0, 8 }, Local_Matrix);
					const auto Entity_Position = PlayerPawn.Origin();
					const auto Player_Distance = Variable::Coor_Dis_3D(Local_Position, Entity_Position);//计算目标人物与本地人物的距离
					if (Player_Distance >= 8000 && Global_LocalPlayer.Health())continue;//距离太远则不绘制ESP
					if (Top_Pos.x < -100 || Top_Pos.x > CS_Scr_Res.r + 100)//检测是否在屏幕内
					{
						if (UI_Visual_ESP_OutFOV && Global_LocalPlayer.Health())//方向指示器
						{
							auto Screen_Pos = Variable::Ang_Pos(CS_Scr_Res.g / ((120 - (float)UI_Visual_ESP_OutFOV_Radius) / 10), Local_Angles.y - 90 + atan2((Local_Position.x - Entity_Position.x), (Local_Position.y - Entity_Position.y)) * (180 / acos(-1)));
							Screen_Pos = { CS_Scr_Res.r / 2 - Screen_Pos[0] * ((float)CS_Scr_Res.r / (float)CS_Scr_Res.g),CS_Scr_Res.g / 2 + Screen_Pos[1] };
							ESP_Paint.RenderA_GradientCircle(Screen_Pos[0], Screen_Pos[1], UI_Visual_ESP_OutFOV_Size, { 0,0,0,100 }, { 0,0,0,0 });
							ESP_Paint.RenderA_GradientCircle(Screen_Pos[0], Screen_Pos[1], UI_Visual_ESP_OutFOV_Size, Draw_Color.D_Alpha(System::RainbowColor(3).r), { 0,0,0,0 });
							if (UI_Visual_ESP_ActiveWeapon)ESP_Paint.Render_String(Screen_Pos[0] - 12, Screen_Pos[1] - 4, PlayerPawn.ActiveWeaponName(), "Small Fonts", 10, { 200,200,200 });//绘制手持武器
						}
						continue;//不绘制ESP 重来
					}
					const auto Bottom_Pos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.Origin() - Variable::Vector3{ 0, 0, 6 }, Local_Matrix);
					const double Hight = Bottom_Pos.y - Top_Pos.y, Width = Hight * 0.25, Left = Top_Pos.x - Width, Right = Top_Pos.x + Width;
					if (Player_Distance <= 4000)//距离检测 降低CPU占用
					{
						if (UI_Visual_ESP_Line) {
							// Line çizimini sadece mesafeye bağlı olarak yapın
							ESP_Paint.RenderA_GradientLine(CS_Scr_Res.r / 2, CS_Scr_Res.g, Left + (Right - Left) / 2, Bottom_Pos.y, { 0, 0, 0, 0 }, Draw_Color.D_Alpha(200), UI_Visual_ESP_Skeleton_Thickness);
						}
						if (UI_Visual_ESP_Skeleton)//骨骼
						{
							static const vector<short> Bone_Flags = { 6,5,4,13,14,15,14,13,4,8,9,10,9,8,4,3,2,1,25,26,27,26,25,1,22,23,24,24 };
							for (short i = 0; i <= Bone_Flags.size() - 2; ++i)
							{
								const auto Bone_ScreenPos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(Bone_Flags[i]), Local_Matrix);
								const auto Bone_ScreenPos_ = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(Bone_Flags[i + 1]), Local_Matrix);
								ESP_Paint.Render_Line(Bone_ScreenPos.x, Bone_ScreenPos.y, Bone_ScreenPos_.x, Bone_ScreenPos_.y, Draw_Color / 1.5, UI_Visual_ESP_Skeleton_Thickness);
							}
						}
						if (UI_Visual_ESP_HeadDot)//头点
						{
							const auto Head_ScrPos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(6), Local_Matrix);
							const auto Body_ScrPos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, PlayerPawn.BonePos(3), Local_Matrix);
							ESP_Paint.RenderA_GradientCircle(Head_ScrPos.x, Head_ScrPos.y, (Body_ScrPos.y - Head_ScrPos.y) / 2, Draw_Color.D_Alpha(220), { 0,0,0,0 }, 0.15);
						}
					}
					if (UI_Visual_ESP_Box)//方框
					{
						ESP_Paint.RenderA_HollowRect(Left, Top_Pos.y, Right - Left, Bottom_Pos.y - Top_Pos.y, { 0,0,0,150 }, 3);
						ESP_Paint.RenderA_HollowRect(Left, Top_Pos.y, Right - Left, Bottom_Pos.y - Top_Pos.y, Draw_Color.D_Alpha(200));
					}
					if (UI_Visual_ESP_Health)//血条
					{
						const auto PlayerHealth = PlayerPawn.Health();//人物血量
						float Health_Ma = PlayerHealth * 0.01;
						if (PlayerHealth >= 100)Health_Ma = 1;
						else if (PlayerHealth <= 0)Health_Ma = 0;
						const auto PlayerArmor = PlayerPawn.Armor();//人物护甲
						float Armor_Ma = PlayerArmor * 0.01;
						if (PlayerArmor >= 100)Armor_Ma = 1;
						else if (PlayerArmor <= 0)Armor_Ma = 0;
						ESP_Paint.RenderA_SolidRect(Left - 6, Top_Pos.y - 1, 4, Bottom_Pos.y - Top_Pos.y + 3, { 0,0,0,150 });//背景
						ESP_Paint.RenderA_SolidRect(Left - 5, Bottom_Pos.y - Hight * Armor_Ma, 2, Bottom_Pos.y - (Bottom_Pos.y - Hight * Armor_Ma) + 1, { 70,70,70,200 });//护甲条绘制
						if (UI_Visual_ESP_CustomColor)ESP_Paint.RenderA_GradientRect(Left - 5, Bottom_Pos.y - Hight * Health_Ma, 2, Bottom_Pos.y - (Bottom_Pos.y - Hight * Health_Ma) + 1, Draw_Color.D_Alpha(200), (Draw_Color / 3).D_Alpha(200), true);//血量条绘制
						else ESP_Paint.RenderA_GradientRect(Left - 5, Bottom_Pos.y - Hight * Health_Ma, 2, Bottom_Pos.y - (Bottom_Pos.y - Hight * Health_Ma) + 1, { (int)(1 - Health_Ma * 255),(int)(255 * Health_Ma),0,200 }, { 255,0,0,200 }, true);
						if (PlayerHealth < 100 && PlayerHealth > 0)ESP_Paint.Render_SmpStr(Left - 8, Bottom_Pos.y - Hight * Health_Ma - 6, to_string(PlayerHealth), { 200,200,200 }, { 0 }, false);//血量值绘制
					}
					if (UI_Visual_ESP_State)//人物状态
					{
						auto i = 0;//Line pos
						if (PlayerPawn.Armor()) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "HK", { 200,200,200 }, { 0 }, false); ++i; }
						if (C4_CachePlayerPawn == PlayerPawn.Pawn()) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "C4", { 255,100,0 }, { 0 }, false); ++i; }
						if (PlayerPawn.Scoped() && PlayerPawn.ActiveWeapon(true) == 3) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "ZOOM", { 0,150,255 }, { 0 }, false); ++i; }
						if (PlayerPawn.Spotted()) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "HIT", { 200,200,200 }, { 0 }, false); ++i; }
						if (PlayerPawn.ShotsFired() > 0) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "SHOT", { 200,200,200 }, { 0 }, false); ++i; }
						if (!(PlayerPawn.Flags() & (1 << 0))) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "AIR", { 200,200,200 }, { 0 }, false); ++i; }
						if (Global_LocalPlayer.IDEntIndex_Pawn().Pawn() == PlayerPawn.Pawn()) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "X", { 200,200,200 }, { 0 }, false); ++i; }
						if (Player_Distance >= 2500) { ESP_Paint.Render_SmpStr(Right + 2, Top_Pos.y - 2 + i * 8, "INV", { 150,0,255 }, { 0 }, false); ++i; }
					}
					if (UI_Visual_ESP_ActiveWeapon)ESP_Paint.Render_SmpStr(Left, Bottom_Pos.y, PlayerPawn.ActiveWeaponName(), { 200,200,200 }, { 0 }, false);//手持武器名称
					if (UI_Visual_ESP_Name)ESP_Paint.RenderA_String(Left - 2, Top_Pos.y - 15, Advanced::Player_Name(Global_ValidClassID[i]), "Segoe UI", 11, Draw_Color.Min_Bri(200).D_Alpha(255));//人物名称
				}
			}
			if (Global_LocalPlayer.Health())//当本地人物活着时执行的功能
			{
				if (UI_Visual_HitMark)//命中标记
				{
					static short Mark_DMG = 0;//造成的伤害
					static Variable::Vector4 Mark_Color, EffectColor;//绘制颜色
					Mark_Color = Mark_Color - Variable::Vector4{ 10, 10, 10 }; Mark_Color = Mark_Color.Re_Col();//准星透明化动画
					EffectColor = EffectColor - Variable::Vector4{ 6, 6, 6 }; EffectColor = EffectColor.Re_Col();//特效透明化动画
					static short OldDamage, OldKill;
					const auto Damage = Advanced::Local_RoundDamage();//伤害
					const auto Kill = Advanced::Local_RoundDamage(true);//击杀
					const auto IDEnt_Pos = Global_LocalPlayer.IDEntIndex_Pawn().BonePos(5); static auto Target_Pos = IDEnt_Pos;//特效目标坐标
					if (Damage > OldDamage || Damage < OldDamage)//当伤害变化
					{
						auto Draw_Color = GUI_IO.GUIColor; if (UI_Visual_HitMark_CustomColor)Draw_Color = UI_Visual_HitMark_Color;//自定义颜色
						if (Kill > OldKill && Global_LocalPlayer.ShotsFired()) { EffectColor = Draw_Color; }//Kill
						if (Damage > OldDamage) { Mark_Color = Draw_Color; Mark_DMG = Damage - OldDamage; }//Hit
						OldDamage = Damage; OldKill = Kill;//刷新
					}
					if (UI_Visual_HitMark_KillEffect)//闪电击杀效果
					{
						if (EffectColor.r != 0 || EffectColor.g != 0 || EffectColor.b != 0)//3D特效
						{
							const auto Range = UI_Visual_HitMark_KillEffect_Range;//爆炸半径 范围
							const auto Player_Matrix = Base::ViewMatrix();//本地人物视角矩阵
							for (short i = 0; i <= UI_Visual_HitMark_KillEffect_Quantity; ++i)//绘制粒子线条
							{
								srand(i * Kill);//随机种子
								const auto Effect_Pos = Variable::WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Target_Pos, Player_Matrix);//起点坐标
								const auto Effect_Pos_To = Variable::WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, { Target_Pos.x + rand() % Range - Range / 2,Target_Pos.y + rand() % Range - Range / 2,Target_Pos.z + rand() % Range - Range / 2 }, Player_Matrix);
								ESP_Paint.Render_Line(Effect_Pos.x, Effect_Pos.y, Effect_Pos_To.x, Effect_Pos_To.y, EffectColor);
							}
						}
						else if (IDEnt_Pos.x != 0)Target_Pos = IDEnt_Pos;
					}
					if (Mark_Color.r != 0 || Mark_Color.g != 0 || Mark_Color.b != 0)//2D准星
					{
						const short Range = UI_Visual_HitMark_Range, Length = UI_Visual_HitMark_Length, Width = UI_Visual_HitMark_Thickness;//绘制设置(距离,长度,粗细)
						ESP_Paint.Render_Line(CS_Scr_Res.r / 2 - Range, CS_Scr_Res.g / 2 - Range, CS_Scr_Res.r / 2 - Range - Length, CS_Scr_Res.g / 2 - Range - Length, Mark_Color, Width);
						ESP_Paint.Render_Line(CS_Scr_Res.r / 2 + Range, CS_Scr_Res.g / 2 + Range, CS_Scr_Res.r / 2 + Range + Length, CS_Scr_Res.g / 2 + Range + Length, Mark_Color, Width);
						ESP_Paint.Render_Line(CS_Scr_Res.r / 2 + Range, CS_Scr_Res.g / 2 - Range, CS_Scr_Res.r / 2 + Range + Length, CS_Scr_Res.g / 2 - Range - Length, Mark_Color, Width);
						ESP_Paint.Render_Line(CS_Scr_Res.r / 2 - Range, CS_Scr_Res.g / 2 + Range, CS_Scr_Res.r / 2 - Range - Length, CS_Scr_Res.g / 2 + Range + Length, Mark_Color, Width);
						if (UI_Visual_HitMark_Damage)ESP_Paint.Render_String(CS_Scr_Res.r / 2 - 5, CS_Scr_Res.g / 2 + Range + 10, to_string(Mark_DMG), "Small Fonts", 11, Mark_Color, false);
					}
				}
				if (UI_Misc_AutoPeek)//自动Peek
				{
					auto Range = 30;//范围变量
					const auto LocalPlayer_Pos = Global_LocalPlayer.Origin(); static BOOL IS_SAVED_POS = false; static auto Peek_Pos = LocalPlayer_Pos;//缓存要移动的坐标
					static BOOL DO_MOVE = false;//判断是否要移动到目标坐标
					if (System::Get_Key(UI_Misc_AutoPeek_Key))
					{
						if (!IS_SAVED_POS) { Peek_Pos = LocalPlayer_Pos; IS_SAVED_POS = true; }//刷新缓存坐标
						if (Variable::Coor_Dis_3D(LocalPlayer_Pos, Peek_Pos) >= 250)Peek_Pos = LocalPlayer_Pos;//如果距离太远那么再次刷新
						if (Global_LocalPlayer.ShotsFired() != 0)DO_MOVE = true;//开枪后移动
						if (DO_MOVE && Advanced::Move_to_Pos(Peek_Pos, Range))DO_MOVE = false;//判断结束移动
						const auto Player_Matrix = Base::ViewMatrix();//本地人物视角矩阵
						const auto Target_Origin = Peek_Pos;//目标绘制点3D世界坐标
						const auto Draw_SCR_Pos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Target_Origin, Player_Matrix);//中心点屏幕坐标
						if (Draw_SCR_Pos.x > 0 && Draw_SCR_Pos.x < CS_Scr_Res.r && Draw_SCR_Pos.y > 0 && Draw_SCR_Pos.y < CS_Scr_Res.g)
						{
							const auto Origin_Offset = Variable::Pos_Angle(LocalPlayer_Pos, Target_Origin);//双点坐标连接偏差角度
							const auto Size_X = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Variable::Ang_Pos_Vec(Target_Origin, Range, Origin_Offset * -1), Player_Matrix);
							const auto Size_Y = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Variable::Ang_Pos_Vec(Target_Origin, Range, Origin_Offset * -1 + 90), Player_Matrix);
							if (Draw_SCR_Pos.x != 9999 && Size_X.x != 9999 && Size_Y.x != 9999 && Variable::Coor_Dis_2D(Size_X, Draw_SCR_Pos) <= 500)ESP_Paint.RenderA_GradientEllipse(Draw_SCR_Pos.x, Draw_SCR_Pos.y, Variable::Coor_Dis_2D(Size_X, Draw_SCR_Pos) * 2, Variable::Coor_Dis_2D(Size_Y, Draw_SCR_Pos) * 2, GUI_IO.GUIColor.D_Alpha(255), { 0,0,0,0 }, 0.1);
						}
					}
					else {
						IS_SAVED_POS = false;
						if (DO_MOVE)//防止串按键
						{
							ExecuteCommand("-forward");
							ExecuteCommand("-right");
							ExecuteCommand("-back");
							ExecuteCommand("-left");//释放所有按键
							DO_MOVE = false;
						}
					}
				}
				if (UI_Legit_Aimbot && UI_Legit_Armory_ShowAimbotRange)//Aimbot Range 自瞄范围绘制
				{
					auto Circle_Range = 0;
					const auto Local_ActiveWeaponType = Global_LocalPlayer.ActiveWeapon(true);//本地人物手持武器类型
					if (Local_ActiveWeaponType == 1)Circle_Range = UI_Legit_Armory_Range_PISTOL * 8;
					else if (Local_ActiveWeaponType == 2)Circle_Range = UI_Legit_Armory_Range_RIFLE * 8;
					else if (Local_ActiveWeaponType == 3) { if (Global_LocalPlayer.Scoped())Circle_Range = UI_Legit_Armory_Range_SNIPER * 20; else Circle_Range = UI_Legit_Armory_Range_SNIPER * 8; }
					else if (Local_ActiveWeaponType == 4)Circle_Range = UI_Legit_Armory_Range_SHOTGUN * 8;
					Circle_Range += abs(Global_LocalPlayer.AimPunchAngle().x * 25);//后坐力反馈
					if (Circle_Range > 300)ESP_Paint.Render_HollowCircle(CS_Scr_Res.r / 2, CS_Scr_Res.g / 2, Variable::Animation<class Render_Aimbot_Range_Animation>(Circle_Range, 1.5), GUI_IO.GUIColor / 3);
					else ESP_Paint.RenderA_GradientCircle(CS_Scr_Res.r / 2, CS_Scr_Res.g / 2, Variable::Animation<class Render_Aimbot_Range_Animation>(Circle_Range, 1.5), { 0,0,0,0 }, GUI_IO.GUIColor.D_Alpha(80), 0.95);
				}
				if (UI_Misc_SniperCrosshair && Global_LocalPlayer.ActiveWeapon(true) == 3 && !Global_LocalPlayer.Scoped())ESP_Paint.RenderA_GradientCircle(CS_Scr_Res.r / 2, CS_Scr_Res.g / 2, UI_Misc_SniperCrosshair_Size, GUI_IO.GUIColor.D_Alpha(180), { 0,0,0,0 }, 0.1);//狙击枪准星
			}
			else if (UI_Misc_SavePerformance) { ESP_Paint.RenderA_SmpStr(0, 0, "Render Performance Saving... 10ms", GUI_IO.GUIColor.D_Alpha(100)); Sleep(10); }//死亡时节省性能
		}
		else Sleep(20);
		if (CS2_HWND && Menu_Open)Sleep(10);//菜单打开时降低绘制速度以降低CPU使用率
		ESP_Paint.DrawPaint(true);//最终绘制画板
	}
}
void Thread_Funtion_EntityESP() noexcept//功能线程: 实体透视
{
	System::Log("Load Thread: Thread_Funtion_EntityESP()");
	Window::Windows RenderWindow; RenderWindow.Create_RenderBlock(Window::Get_Resolution().x, Window::Get_Resolution().y, "FlakeTeam - EntityESP");
	Window::Render WEP_Render; WEP_Render.CreatePaint(RenderWindow.Get_HWND(), 0, 0, Window::Get_Resolution().x, Window::Get_Resolution().y);
	while (true)
	{
		Sleep(UI_Visual_ESP_DrawDelay);//降低CPU占用
		RenderWindow.Set_WindowTitle(System::Rand_String(10));//随机实体透视窗口标题
		WEP_Render.Render_SolidRect(0, 0, 9999, 9999, { 0,0,0 });//刷新绘制画板
		if (CS2_HWND && UI_Visual_ESP && (!UI_Visual_ESP_Key || System::Get_Key(UI_Visual_ESP_Key)) && UI_Visual_ESP_Drops && (Menu_Open || Global_IsShowWindow))//当CS窗口在最前端 && 本地人物活着
		{
			if (Menu_Open)Sleep(50);//打开菜单时节省CPU性能
			auto Draw_Color = GUI_IO.GUIColor; if (UI_Visual_ESP_CustomColor)Draw_Color = UI_Visual_ESP_CustomColor_Color;
			const auto CS_Scr_Res = Window::Get_WindowResolution(CS2_HWND);
			MoveWindow(RenderWindow.Get_HWND(), CS_Scr_Res.b, CS_Scr_Res.a, CS_Scr_Res.r, CS_Scr_Res.g, true);//Pos & Size
			RenderWindow.Set_WindowAttributes({ 0,0,0 }, Variable::Animation<class CLASS_EntityESP_Alpha_Animation_>(UI_Visual_ESP_DrawAlpha, 2));//窗口透明度设置
			Window::Set_LimitWindowShow(RenderWindow.Get_HWND(), UI_Misc_ByPassOBS);//绕过OBS
			const auto Entitylist = Base::EntityList(); const auto Local_Origin = Global_LocalPlayer.Origin(); const auto Local_ViewMatrix = Base::ViewMatrix();
			static vector<short> Class_ID = {};//有效实体ID
			if (System::Sleep_Tick<class CLASS_Drops_ESP_Reload_ClassID_>(500))//特殊算法为了提高绘制效率
			{
				short Show_Quantity = 0;//计算绘制的实体数量
				Class_ID = {};//刷新有效实体ID
				for (short i = 65; i <= 2048; ++i)//class id 65-2048
				{
					if (Show_Quantity > 40)continue;//限制数量
					const Base::PlayerPawn Entity = Base::Convert(Entitylist, i);
					if (!Entity.Pawn())continue;
					const auto Entity_Pos = Entity.Origin();
					if (!Entity_Pos.x || !Entity_Pos.y || Variable::Coor_Dis_3D(Local_Origin, Entity_Pos) >= 2500)continue;//实体之间距离检测
					const auto Entity_ScrPos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Entity.Origin(), Local_ViewMatrix);
					if (Entity_ScrPos.x < -800 || Entity_ScrPos.x > CS_Scr_Res.r + 800)continue;//检测实体是否在屏幕内
					if (Entity.ActiveWeaponName(true, Entity.Pawn()) == "NONE" && !Variable::String_Find(Entity.EntityName(), "_projectile"))continue;//检测实体名称是否有效
					if (Entity.EntityName() == "hegrenade_projectile" && !System::Get_ValueChangeState<float, class CLASS_Drops_ESP_Delete_StopedEntity_>(Entity_Pos.x))continue;//排除手雷缓存 (受累爆炸后不在移动时就是留下的缓存)
					Class_ID.push_back(i); ++Show_Quantity;//计算有效实体数量
					System::Sleep_ns(10);//降低CPU占用
				}
			}
			if (Class_ID.size() > 0)//存在绘制目标时绘制
			{
				for (short i = 0; i < Class_ID.size(); ++i)//只遍历有效实体
				{
					const Base::PlayerPawn Entity = Base::Convert(Entitylist, Class_ID[i]);
					const auto Entity_Pos = Entity.Origin();
					if (!Entity_Pos.x || !Entity_Pos.y)continue;//过滤掉无效坐标
					auto Entity_ScrPos = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, Entity_Pos, Local_ViewMatrix);
					auto Entity_Name = Entity.EntityName();//实体名称
					if (Variable::String_Find(Entity_Name, "_projectile"))//飞行的道具绘制
					{
						Entity_Name.erase(Entity_Name.length() - 11, 11);//删除_projectile
						Entity_Name = Variable::String_Upper(Entity_Name);//转换大写
						if (Entity_Name == "SMOKEGRENADE")//烟雾弹范围绘制
						{
							const float SmokeRange = 200;//烟雾弹绘制范围 (坐标范围)
							const auto Pos_1 = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, { Entity_Pos.x - (float)floor(sin(System::Tick() / 1000.f) * SmokeRange),Entity_Pos.y - (float)floor(cos(System::Tick() / 1000.f) * SmokeRange), Entity_Pos.z }, Local_ViewMatrix);
							const auto Pos_2 = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, { Entity_Pos.x + (float)floor(sin(System::Tick() / 1000.f) * SmokeRange),Entity_Pos.y + (float)floor(cos(System::Tick() / 1000.f) * SmokeRange), Entity_Pos.z }, Local_ViewMatrix);
							const auto Pos_3 = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, { Entity_Pos.x + (float)floor(cos(System::Tick() / 1000.f) * SmokeRange),Entity_Pos.y - (float)floor(sin(System::Tick() / 1000.f) * SmokeRange), Entity_Pos.z }, Local_ViewMatrix);
							const auto Pos_4 = WorldToScreen(CS_Scr_Res.r, CS_Scr_Res.g, { Entity_Pos.x - (float)floor(cos(System::Tick() / 1000.f) * SmokeRange),Entity_Pos.y + (float)floor(sin(System::Tick() / 1000.f) * SmokeRange), Entity_Pos.z }, Local_ViewMatrix);
							WEP_Render.Render_Line(Pos_1.x, Pos_1.y, Pos_2.x, Pos_2.y, Draw_Color);
							WEP_Render.Render_Line(Pos_3.x, Pos_3.y, Pos_4.x, Pos_4.y, Draw_Color);
							Entity_Name = "SMOKE";
						}
						else if (Entity_Name == "FLASHBANG")Entity_Name = "FLASH";
						else if (Entity_Name == "HEGRENADE")Entity_Name = "GRENADE";
						if (Entity_ScrPos.x <= 100)Entity_ScrPos.x = 100;
						else if (Entity_ScrPos.x >= CS_Scr_Res.r - 100)Entity_ScrPos.x = CS_Scr_Res.r - 100;
						if (Entity_ScrPos.y <= 100)Entity_ScrPos.y = 100;
						else if (Entity_ScrPos.y >= CS_Scr_Res.g - 100)Entity_ScrPos.y = CS_Scr_Res.g - 100;//防止移除屏幕边缘
						WEP_Render.RenderA_GradientCircle(Entity_ScrPos.x, Entity_ScrPos.y, 20, { 1,1,1 }, Draw_Color.D_Alpha(255), floor(sin((float)System::Tick() / 150) * 40 + 40) / 100 - 0.2);
						WEP_Render.Render_SmpStr(Entity_ScrPos.x - 13, Entity_ScrPos.y, Entity_Name, { 200,200,200 }, { 1,1,1 });
					}
					else WEP_Render.Render_SmpStr(Entity_ScrPos.x - 15, Entity_ScrPos.y, Entity.ActiveWeaponName(true, Entity.Pawn()), { 200,200,200 }, { 1,1,1 });//武器绘制
				}
			}
			else Sleep(50);
		}
		else { MoveWindow(RenderWindow.Get_HWND(), 0, 0, 0, 0, true); Sleep(50); }
		WEP_Render.DrawPaint(true);
	}
}
void Thread_Funtion_Radar() noexcept//功能线程: 雷达
{
	System::Log("Load Thread: Thread_Funtion_Radar()");
	Window::Windows Radar_Window; Radar_Window.Create_Window(UI_Visual_Radar_Size, UI_Visual_Radar_Size + 15, "FlakeTeam - Radar", true);//创建雷达绘制窗口
	Window::Render Radar_Paint; Radar_Paint.CreatePaint(Radar_Window.Get_HWND(), 0, 0, 800, 800 + 15);//创建绘制画板
	Radar_Window.Set_WindowPos(UI_Visual_Radar_Pos.x, UI_Visual_Radar_Pos.y);//套用预设的雷达位置
	while (true)
	{
		Sleep(5);//降低CPU占用
		Radar_Window.Set_WindowTitle(System::Rand_String(10));//随机雷达窗口标题
		Window::Set_LimitWindowShow(Radar_Window.Get_HWND(), UI_Misc_ByPassOBS);//绕过OBS
		static short Radar_Size_; const short RadarSizeAnimation = Variable::Animation<class Class_Radar_Window_Size>(Radar_Size_, 2);
		if ((Global_IsShowWindow || Menu_Open || Window::Get_WindowEnable(Radar_Window.Get_HWND())) && UI_Visual_Radar)//当CS窗口在最前端
		{
			Radar_Size_ = UI_Visual_Radar_Size; UI_Visual_Radar_Pos = Radar_Window.Get_WindowPos();
			if (!Radar_Window.Window_Move(15))//移动雷达窗口
			{
				const float RadarRangeAnimation = Variable::Animation<class Class_Radar_Window_Range>(UI_Visual_Radar_Range, 2);//窗口动画
				const auto LocalPlayerPos = Global_LocalPlayer.Origin(); auto ViewAngle = Base::ViewAngles();
				Radar_Paint.Render_SolidRect(0, 0, 9999, 9999, { 0,0,0 });//背景
				if (UI_Visual_Radar_Alpha)//透明状态不绘制人物视角朝向
				{
					if (!CS2_HWND)ViewAngle.y = Variable::Animation<class Class_Radar_AngleAnimation_>(System::Rand_Number(-180, 180, System::Tick()), 30);
					if (UI_Visual_Radar_FollowAngle)Radar_Paint.Render_GradientTriangle({ RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15 ,(int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, 135, 0)[0], (int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, 135, 0)[1] ,(int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, 225, 0)[0], (int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, 225, 0)[1] }, GUI_IO.GUIColor / 4, { 0,0,0 }, { 0,0,0 });
					else Radar_Paint.Render_GradientTriangle({ RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15 ,(int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, ViewAngle.y, 45)[0], (int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, ViewAngle.y, 45)[1] ,(int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, ViewAngle.y, 135)[0], (int)Variable::Ang_Pos_(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 2, ViewAngle.y, 135)[1] }, GUI_IO.GUIColor / 4, { 0,0,0 }, { 0,0,0 });//本地人物视野
				}
				Radar_Paint.Render_HollowCircle(RadarSizeAnimation / 2, RadarSizeAnimation / 2 + 15, RadarSizeAnimation / 100 * 3.5, { 255,255,255 }, 2);//自身圆圈
				for (short i = 0; i < Global_ValidClassID.size(); ++i)
				{
					const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);
					if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
					const auto EntityPos = PlayerPawn.Origin(); static vector<float> EnemyScreenPos;
					if (UI_Visual_Radar_FollowAngle)EnemyScreenPos = { RadarSizeAnimation / 2 - Variable::Ang_Pos(Variable::Coor_Dis_2D(LocalPlayerPos, EntityPos), ViewAngle.y - 90 + atan2((LocalPlayerPos.x - EntityPos.x), (LocalPlayerPos.y - EntityPos.y)) * (180 / acos(-1)))[0] / RadarRangeAnimation,RadarSizeAnimation / 2 + 15 + Variable::Ang_Pos(Variable::Coor_Dis_2D(LocalPlayerPos, EntityPos), ViewAngle.y - 90 + atan2((LocalPlayerPos.x - EntityPos.x), (LocalPlayerPos.y - EntityPos.y)) * (180 / acos(-1)))[1] / RadarRangeAnimation };
					else EnemyScreenPos = { RadarSizeAnimation / 2 - (LocalPlayerPos.x - EntityPos.x) / RadarRangeAnimation,RadarSizeAnimation / 2 + 15 + (LocalPlayerPos.y - EntityPos.y) / RadarRangeAnimation };
					if (EnemyScreenPos[0] > RadarSizeAnimation)EnemyScreenPos[0] = RadarSizeAnimation;//边缘限制 (无法离开绘制区域)
					else if (EnemyScreenPos[0] < 0) EnemyScreenPos[0] = 0;
					if (EnemyScreenPos[1] > RadarSizeAnimation + 15)EnemyScreenPos[1] = RadarSizeAnimation + 15;
					else if (EnemyScreenPos[1] < 15)EnemyScreenPos[1] = 15;
					if (PlayerPawn.Spotted())Radar_Paint.Render_SolidCircle(EnemyScreenPos[0], EnemyScreenPos[1], RadarSizeAnimation / 100 * 3.5, GUI_IO.GUIColor, GUI_IO.GUIColor);//敌人圆圈
					else Radar_Paint.Render_HollowCircle(EnemyScreenPos[0], EnemyScreenPos[1], RadarSizeAnimation / 100 * 3.5, GUI_IO.GUIColor, 2);
				}
				Radar_Paint.Render_GradientRect(0, 0, Radar_Window.Get_WindowSize().x, 14, GUI_IO.GUIColor / 2, GUI_IO.GUIColor / 4, false);
				Radar_Paint.Render_GradientRect(0, 14, Radar_Window.Get_WindowSize().x, 1, GUI_IO.GUIColor / 4, GUI_IO.GUIColor / 2, false);//标题背景
				Radar_Paint.Render_String(3 + 1, 1 + 1, "FlakeTeam - Radar", "Small Fonts", 12, { 0,0,1 }, false);//标题阴影
				Radar_Paint.Render_String(3, 1, "FlakeTeam - Radar", "Small Fonts", 12, GUI_IO.GUIColor.Min_Bri(150), false);//标题
				Radar_Paint.DrawPaint();//最终绘制雷达画板
			}
		}
		else Radar_Size_ = 0;
		Radar_Window.Set_WindowSize(RadarSizeAnimation, RadarSizeAnimation + 15);//雷达大小
		if (!UI_Visual_Radar_Alpha)Radar_Window.Set_WindowAttributes({ 0,0,0 }, 0, LWA_COLORKEY);//将黑色像素改为全透明
		else Radar_Window.Set_WindowAlpha(Variable::Animation<class Class_Radar_Window_Alpha>(UI_Visual_Radar_Alpha, 3));//雷达透明度
		Radar_Window.Fix_inWhile();//窗口消息循环
	}
}
void Thread_Funtion_Sonar() noexcept//功能线程: 声呐(距离检测)
{
	System::Log("Load Thread: Thread_Funtion_Sonar()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Misc_Sonar && (!UI_Misc_Sonar_Key || System::Get_Key(UI_Misc_Sonar_Key)))//当CS窗口在最前端 && 本地人物活着
		{
			Sleep(5);
			const auto Local_Pos = Global_LocalPlayer.Origin();//本地人物坐标
			for (short i = 0; i <= 64; ++i)
			{
				System::Sleep_ns(150);
				if (UI_Misc_Sonar_Key != 0 && !System::Get_Key(UI_Misc_Sonar_Key))continue;//提高效率
				const auto PlayerPawn = Advanced::Traverse_Player(i);
				if (!Advanced::Check_Enemy(PlayerPawn))continue;//多点检测
				const auto Pos_Dis = Variable::Coor_Dis_2D(Local_Pos, PlayerPawn.Origin());//敌人坐标距离
				if (Pos_Dis <= UI_Misc_Sonar_Range_Near)Beep(300, 20);//Near range 近距离
				else if (Pos_Dis <= UI_Misc_Sonar_Range_Far)Beep(150, 20);//Far range 远距离
				if (Pos_Dis <= UI_Misc_Sonar_Range_Far)Sleep(20);//断开间隔
			}
		}
		else Sleep(50);
	}
}
void Thread_Funtion_WalkingBot() noexcept//功能线程: 自动行走机器人(用于刷经验)
{
	System::Log("Load Thread: Thread_Funtion_WalkingBot()");
	while (true)
	{
		if (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Misc_WalkingBot)//当CS窗口在最前端 && 本地人物活着 && 没有在射击时 && 自动行走机器人开关
		{
			Sleep(1);//降低CPU占用
			const auto MovingPath = Advanced::MovingPath_Map(UI_Misc_WalkingBot_Map);//地图行走路径
			short Distance = 133337; short TargetPosID = 0;//最近点位记录变量
			for (short Pos_ID = 0; Pos_ID <= MovingPath.size(); ++Pos_ID)//寻找最近距离的点位设定为起点
			{
				const auto Dis = Variable::Coor_Dis_3D(Global_LocalPlayer.Origin(), MovingPath[Pos_ID]);
				if (Distance > Dis) { Distance = Dis; TargetPosID = Pos_ID; }//记录起点
			}
			for (short Pos_ID = TargetPosID; Pos_ID < MovingPath.size(); ++Pos_ID)//执行移动到路径中...
			{
				while (CS2_HWND && Global_IsShowWindow && Global_LocalPlayer.Health() && UI_Misc_WalkingBot)//循环知道移动到目标点
				{
					BOOL IsHasPlayerInFov = false;//记录是否有目标被发现并且在视线范围内
					for (short i = 0; i < Global_ValidClassID.size(); ++i)//全局人物实体遍历
					{
						const auto PlayerPawn = Advanced::Traverse_Player(Global_ValidClassID[i]);
						if (!Advanced::Check_Enemy(PlayerPawn) || !PlayerPawn.Spotted())continue;//判断目标
						const auto Angle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), PlayerPawn.BonePos(3), Base::ViewAngles());
						if (hypot(Angle.x, Angle.y) <= 45)IsHasPlayerInFov = true;//记录
					}
					if ((Advanced::Check_Enemy(Global_LocalPlayer.IDEntIndex_Pawn()) || IsHasPlayerInFov) && UI_Legit_Aimbot)Advanced::Stop_Move();//发现到目标时停止移动坐标和移动视角
					else {
						if (Advanced::Move_to_Pos(MovingPath[Pos_ID], 25))break;//移动到坐标
						const auto Angle = Variable::CalculateAngle(Global_LocalPlayer.Origin() + Global_LocalPlayer.ViewOffset(), MovingPath[Pos_ID + 3] + Variable::Vector3{ 0, 0, 60 }, Base::ViewAngles());
						System::Mouse_Move(-Angle.y * 20, Angle.x * 5, UI_Misc_MouseLowSensitivity);
					}
					Sleep(1);//降低CPU占用
				}
			}
		}
		else Sleep(50);//降低CPU占用
	}
}
int main() noexcept//主线程 (加载多线程, 一些杂项功能)
{
	System::Anti_Debugger("Debugging is disabled after compilation is completed.", true);//防止逆向破解
	//----------------------------------------------------------------------------------------------------------------------------------
	if (FindWindow(0, L"Pastehook - Menu")) { Window::Message_Box("FlakeTeam Error", "Program zaten çalışıyor.", MB_ICONSTOP); exit(0); }//防止多开程序
	//----------------------------------------------------------------------------------------------------------------------------------
	System::URL_READ UserID_READ = { "Cache_UserID" }; BOOL Attest = false;//认证变量
	if (UserID_READ.StoreMem("https://github.com/venomqex/bad/blob/main/Cloud%20Files/UserID.uid?raw=true"))//Github读取有效用户ID
	{
		for (short i = 0; i <= 10000; ++i) { if (System::Get_UserName() == UserID_READ.Read(i) || Variable::String_Upper(UserID_READ.Read(i)) == "BYPASS") { Attest = true; break; } }//遍历检测并修改认证
		UserID_READ.Release();//释放缓存
	}
	Attest = true;//公开版直接通过验证
	//----------------------------------------------------------------------------------------------------------------------------------
	System::URL_READ AutoUpdate = { "Cache_Update" };//自动更新系统 (中国IP用户需要挂梯子)
	if (AutoUpdate.StoreMem("https://raw.githubusercontent.com/venomqex/bad/refs/heads/main/Cloud%20Files/main.cpp"))//版本号更新检查
	{
		auto Version = AutoUpdate.Read(3); Version.erase(0, 29); Version.erase(Version.size() - 15, 999);//擦除无用字符只获取版本号
		AutoUpdate.Release();//释放缓存
		if (Variable::string_float_(Version) > Flake_Version && Window::Message_Box("FlakeTeam Update", "Yeni Bir Surum Mevcut.\nSurum[" + Version + "] Surume Guncelleneceksiniz\n\nSimdi güncellemek istiyor musunuz?\nSadece Saniyeler Surecek.\n", MB_YESNO | MB_ICONASTERISK) == 6)
		{
			System::Open_Website("FlakeTeam"); exit(0);//打开下载链接并且关闭程序
		}
	}
	//----------------------------------------------------------------------------------------------------------------------------------
	Window::Hide_ConsoleWindow();//隐藏控制台
	System::Set_ProcessPriority();//将Rensen程序优先级设置为高 (防止崩溃)
	Window::Initialization_ConsoleWindow();//初始化控制台窗口 (初始化窗口大小, 清除字符)
	printf("FLakeTeam Discord: https://discord.gg/mxwwV6m9gW\n");//作者留言
	System::Log("Load Thread: main()");
	thread Thread_Menu_ = thread(Thread_Menu); Sleep(30);
	thread Thread_Misc_ = thread(Thread_Misc); Sleep(30);
	thread Thread_Funtion_BunnyHop_ = thread(Thread_Funtion_BunnyHop); Sleep(30);
	thread Thread_Funtion_Aimbot_ = thread(Thread_Funtion_Aimbot); Sleep(30);
	thread Thread_Funtion_AdaptiveAimbot_ = thread(Thread_Funtion_AdaptiveAimbot); Sleep(30);
	thread Thread_Funtion_Triggerbot_ = thread(Thread_Funtion_Triggerbot); Sleep(30);
	thread Thread_Funtion_AssisteAim_ = thread(Thread_Funtion_AssisteAim); Sleep(30);
	thread Thread_Funtion_RemoveRecoil_ = thread(Thread_Funtion_RemoveRecoil); Sleep(30);
	thread Thread_Funtion_PlayerESP_ = thread(Thread_Funtion_PlayerESP); Sleep(30);
	thread Thread_Funtion_EntityESP_ = thread(Thread_Funtion_EntityESP); Sleep(30);
	thread Thread_Funtion_Radar_ = thread(Thread_Funtion_Radar); Sleep(30);
	thread Thread_Funtion_Sonar_ = thread(Thread_Funtion_Sonar); Sleep(30);
	thread Thread_Funtion_WalkingBot_ = thread(Thread_Funtion_WalkingBot); Sleep(30);
	if (!System::Judge_File(Preset_Folder))System::Create_Folder(Preset_Folder);//没有参数文件夹时创建参数文件夹
	while (true)//菜单动画和关闭快捷键
	{
		if (!Attest)exit(0);//过滤未认证用户
		if (System::Get_Key(VK_INSERT) && System::Get_Key(VK_DELETE)) { Beep(50, 50); exit(0); }//快速关闭键 (防止卡线程)
		static short MenuWindowAlpha = 200;
		if (UI_Setting_MenuAnimation == 1)if (Menu_Open)MenuWindowAlpha += UI_Setting_MainColor.a / 15; else MenuWindowAlpha = 0;//窗体透明度动画 (无动画时依然加载透明度动画)
		else if (Menu_Open)MenuWindowAlpha += UI_Setting_MainColor.a / UI_Setting_MenuAnimation / 2.5; else MenuWindowAlpha -= UI_Setting_MainColor.a / UI_Setting_MenuAnimation / 1.25;//窗体透明度动画
		if (MenuWindowAlpha >= UI_Setting_MainColor.a)MenuWindowAlpha = UI_Setting_MainColor.a;//限制窗口透明度
		else if (MenuWindowAlpha <= 0)MenuWindowAlpha = 0;
		GUI_VAR.Window_SetAlpha(MenuWindowAlpha);//修改菜单透明度
		if (!System::Key_Toggle<class CLASS_Main_Rensen_MenuKey>(UI_Setting_MenuKey)) { GUI_VAR.Window_Show(); Menu_Open = true; }//保证菜单窗口在最前端
		else { if (MenuWindowAlpha == 0)GUI_VAR.Window_Hide(); Menu_Open = false; }
		GUI_IO = GUI_VAR.Get_IO();//刷新GUI状态数据
		if (!UI_Setting_CustomColor)GUI_IO.GUIColor = { GUI_IO.GUIColor_Rainbow[3],GUI_IO.GUIColor_Rainbow[4],GUI_IO.GUIColor_Rainbow[5] };//GUI主题颜色到功能函数
		if (UI_Setting_MenuFontSize == 0)GUI_VAR.Global_Set_EasyGUI_FontSize(13);//自定义GUI字体大小 (默认字体大小为13)
		else GUI_VAR.Global_Set_EasyGUI_FontSize(UI_Setting_MenuFontSize);
		if (UI_Setting_MenuFont == "")GUI_VAR.Global_Set_EasyGUI_Font("Verdana");//自定义GUI字体 (默认字体为Verdana)
		else GUI_VAR.Global_Set_EasyGUI_Font(UI_Setting_MenuFont);
		if (UI_Misc_SavePerformance)Sleep(3);//降低CPU占用
		else Sleep(1);
	}
}