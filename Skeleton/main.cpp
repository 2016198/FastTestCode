#include <DxLib.h>
#include <time.h>

constexpr int SCREEN_SIZE_X = 640;
constexpr int SCREEN_SIZE_Y = 480;

int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	SetOutApplicationLogValidFlag(false);
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);
	SetWindowText("2016198_����Ǔ�");
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//�����̏�����
	srand((unsigned int)time(NULL));

	//�ϐ��̐�`
	int x;
	int y;

	//����������

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//�X�V����
		GetMousePoint(&x, &y);

		SetDrawScreen(DX_SCREEN_BACK);
		ClsDrawScreen();
		//�`�揈��

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}