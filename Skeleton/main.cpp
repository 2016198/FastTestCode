#include <DxLib.h>


int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{

	SetGraphMode(640, 480, 32);
	ChangeWindowMode(true);
	SetWindowText(L"2016198_“›ˆäˆÇ“ñ");
	if (DxLib_Init() == -1)
	{
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClsDrawScreen();
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}