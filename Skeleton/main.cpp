#include <DxLib.h>

int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	SetWindowText("2016198_“›ˆäˆÇ“ñ");
	ChangeWindowMode(true);
	if (DxLib_Init())
	{
		return -1;
	}
	SetGraphMode(640, 480, 32);

	//•Ï”‚Ìé“`

	//‰Šú‰»ˆ—

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//XVˆ—
		SetDrawScreen(DX_SCREEN_BACK);
		ClsDrawScreen();
		//•`‰æˆ—
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}