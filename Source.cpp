#pragma comment(linker,"\"/manifestdependency:type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#pragma comment(lib, "shlwapi")
#pragma comment(lib, "comctl32")

#include <windows.h>
#include <shlwapi.h>
#include <commctrl.h>
#include <vector>
#include "resource.h"

TCHAR szClassName[] = TEXT("Window");

struct DATA
{
	INT nID;
	LPCWSTR lpszModuleName;
};

DATA data[] = {
	{ MAR2008_X3DAUDIO_X86,L"Mar2008_X3DAudio_x86.cab" },
	{ MAR2008_XACT_X64,L"Mar2008_XACT_x64.cab" },
	{ MAR2008_XACT_X86,L"Mar2008_XACT_x86.cab" },
	{ MAR2008_XAUDIO_X64,L"Mar2008_XAudio_x64.cab" },
	{ MAR2008_XAUDIO_X86,L"Mar2008_XAudio_x86.cab" },
	{ MAR2009_D3DX9_41_X64,L"Mar2009_d3dx9_41_x64.cab" },
	{ MAR2009_D3DX9_41_X86,L"Mar2009_d3dx9_41_x86.cab" },
	{ MAR2009_D3DX10_41_X64,L"Mar2009_d3dx10_41_x64.cab" },
	{ MAR2009_D3DX10_41_X86,L"Mar2009_d3dx10_41_x86.cab" },
	{ MAR2009_X3DAUDIO_X64,L"Mar2009_X3DAudio_x64.cab" },
	{ MAR2009_X3DAUDIO_X86,L"Mar2009_X3DAudio_x86.cab" },
	{ MAR2009_XACT_X64,L"Mar2009_XACT_x64.cab" },
	{ MAR2009_XACT_X86,L"Mar2009_XACT_x86.cab" },
	{ MAR2009_XAUDIO_X64,L"Mar2009_XAudio_x64.cab" },
	{ MAR2009_XAUDIO_X86,L"Mar2009_XAudio_x86.cab" },
	{ NOV2007_D3DX9_36_X64,L"Nov2007_d3dx9_36_x64.cab" },
	{ NOV2007_D3DX9_36_X86,L"Nov2007_d3dx9_36_x86.cab" },
	{ NOV2007_D3DX10_36_X64,L"Nov2007_d3dx10_36_x64.cab" },
	{ NOV2007_D3DX10_36_X86,L"Nov2007_d3dx10_36_x86.cab" },
	{ NOV2007_X3DAUDIO_X64,L"NOV2007_X3DAudio_x64.cab" },
	{ NOV2007_X3DAUDIO_X86,L"NOV2007_X3DAudio_x86.cab" },
	{ NOV2007_XACT_X64,L"NOV2007_XACT_x64.cab" },
	{ NOV2007_XACT_X86,L"NOV2007_XACT_x86.cab" },
	{ NOV2008_D3DX9_40_X64,L"Nov2008_d3dx9_40_x64.cab" },
	{ NOV2008_D3DX9_40_X86,L"Nov2008_d3dx9_40_x86.cab" },
	{ NOV2008_D3DX10_40_X64,L"Nov2008_d3dx10_40_x64.cab" },
	{ NOV2008_D3DX10_40_X86,L"Nov2008_d3dx10_40_x86.cab" },
	{ NOV2008_X3DAUDIO_X64,L"Nov2008_X3DAudio_x64.cab" },
	{ NOV2008_X3DAUDIO_X86,L"Nov2008_X3DAudio_x86.cab" },
	{ NOV2008_XACT_X64,L"Nov2008_XACT_x64.cab" },
	{ NOV2008_XACT_X86,L"Nov2008_XACT_x86.cab" },
	{ NOV2008_XAUDIO_X64,L"Nov2008_XAudio_x64.cab" },
	{ NOV2008_XAUDIO_X86,L"Nov2008_XAudio_x86.cab" },
	{ OCT2005_XINPUT_X64,L"Oct2005_xinput_x64.cab" },
	{ OCT2005_XINPUT_X86,L"Oct2005_xinput_x86.cab" },
	{ OCT2006_D3DX9_31_X64,L"OCT2006_d3dx9_31_x64.cab" },
	{ OCT2006_D3DX9_31_X86,L"OCT2006_d3dx9_31_x86.cab" },
	{ OCT2006_XACT_X64,L"OCT2006_XACT_x64.cab" },
	{ OCT2006_XACT_X86,L"OCT2006_XACT_x86.cab" },
	{ APR2005_D3DX9_25_X64,L"Apr2005_d3dx9_25_x64.cab" },
	{ APR2005_D3DX9_25_X86,L"Apr2005_d3dx9_25_x86.cab" },
	{ APR2006_D3DX9_30_X64,L"Apr2006_d3dx9_30_x64.cab" },
	{ APR2006_D3DX9_30_X86,L"Apr2006_d3dx9_30_x86.cab" },
	{ APR2006_MDX1_X86,L"Apr2006_MDX1_x86.cab" },
	{ APR2006_MDX1_X86_ARCHIVE,L"Apr2006_MDX1_x86_Archive.cab" },
	{ APR2006_XACT_X64,L"Apr2006_XACT_x64.cab" },
	{ APR2006_XACT_X86,L"Apr2006_XACT_x86.cab" },
	{ APR2006_XINPUT_X64,L"Apr2006_xinput_x64.cab" },
	{ APR2006_XINPUT_X86,L"Apr2006_xinput_x86.cab" },
	{ APR2007_D3DX9_33_X64,L"APR2007_d3dx9_33_x64.cab" },
	{ APR2007_D3DX9_33_X86,L"APR2007_d3dx9_33_x86.cab" },
	{ APR2007_D3DX10_33_X64,L"APR2007_d3dx10_33_x64.cab" },
	{ APR2007_D3DX10_33_X86,L"APR2007_d3dx10_33_x86.cab" },
	{ APR2007_XACT_X64,L"APR2007_XACT_x64.cab" },
	{ APR2007_XACT_X86,L"APR2007_XACT_x86.cab" },
	{ APR2007_XINPUT_X64,L"APR2007_xinput_x64.cab" },
	{ APR2007_XINPUT_X86,L"APR2007_xinput_x86.cab" },
	{ AUG2005_D3DX9_27_X64,L"Aug2005_d3dx9_27_x64.cab" },
	{ AUG2005_D3DX9_27_X86,L"Aug2005_d3dx9_27_x86.cab" },
	{ AUG2006_XACT_X64,L"AUG2006_XACT_x64.cab" },
	{ AUG2006_XACT_X86,L"AUG2006_XACT_x86.cab" },
	{ AUG2006_XINPUT_X64,L"AUG2006_xinput_x64.cab" },
	{ AUG2006_XINPUT_X86,L"AUG2006_xinput_x86.cab" },
	{ AUG2007_D3DX9_35_X64,L"AUG2007_d3dx9_35_x64.cab" },
	{ AUG2007_D3DX9_35_X86,L"AUG2007_d3dx9_35_x86.cab" },
	{ AUG2007_D3DX10_35_X64,L"AUG2007_d3dx10_35_x64.cab" },
	{ AUG2007_D3DX10_35_X86,L"AUG2007_d3dx10_35_x86.cab" },
	{ AUG2007_XACT_X64,L"AUG2007_XACT_x64.cab" },
	{ AUG2007_XACT_X86,L"AUG2007_XACT_x86.cab" },
	{ AUG2008_D3DX9_39_X64,L"Aug2008_d3dx9_39_x64.cab" },
	{ AUG2008_D3DX9_39_X86,L"Aug2008_d3dx9_39_x86.cab" },
	{ AUG2008_D3DX10_39_X64,L"Aug2008_d3dx10_39_x64.cab" },
	{ AUG2008_D3DX10_39_X86,L"Aug2008_d3dx10_39_x86.cab" },
	{ AUG2008_XACT_X64,L"Aug2008_XACT_x64.cab" },
	{ AUG2008_XACT_X86,L"Aug2008_XACT_x86.cab" },
	{ AUG2008_XAUDIO_X64,L"Aug2008_XAudio_x64.cab" },
	{ AUG2008_XAUDIO_X86,L"Aug2008_XAudio_x86.cab" },
	{ AUG2009_D3DCOMPILER_42_X64,L"Aug2009_D3DCompiler_42_x64.cab" },
	{ AUG2009_D3DCOMPILER_42_X86,L"Aug2009_D3DCompiler_42_x86.cab" },
	{ AUG2009_D3DCSX_42_X64,L"Aug2009_d3dcsx_42_x64.cab" },
	{ AUG2009_D3DCSX_42_X86,L"Aug2009_d3dcsx_42_x86.cab" },
	{ AUG2009_D3DX9_42_X64,L"Aug2009_d3dx9_42_x64.cab" },
	{ AUG2009_D3DX9_42_X86,L"Aug2009_d3dx9_42_x86.cab" },
	{ AUG2009_D3DX10_42_X64,L"Aug2009_d3dx10_42_x64.cab" },
	{ AUG2009_D3DX10_42_X86,L"Aug2009_d3dx10_42_x86.cab" },
	{ AUG2009_D3DX11_42_X64,L"Aug2009_d3dx11_42_x64.cab" },
	{ AUG2009_D3DX11_42_X86,L"Aug2009_d3dx11_42_x86.cab" },
	{ AUG2009_XACT_X64,L"Aug2009_XACT_x64.cab" },
	{ AUG2009_XACT_X86,L"Aug2009_XACT_x86.cab" },
	{ AUG2009_XAUDIO_X64,L"Aug2009_XAudio_x64.cab" },
	{ AUG2009_XAUDIO_X86,L"Aug2009_XAudio_x86.cab" },
	{ DEC2005_D3DX9_28_X64,L"Dec2005_d3dx9_28_x64.cab" },
	{ DEC2005_D3DX9_28_X86,L"Dec2005_d3dx9_28_x86.cab" },
	{ DEC2006_D3DX9_32_X64,L"DEC2006_d3dx9_32_x64.cab" },
	{ DEC2006_D3DX9_32_X86,L"DEC2006_d3dx9_32_x86.cab" },
	{ DEC2006_D3DX10_00_X64,L"DEC2006_d3dx10_00_x64.cab" },
	{ DEC2006_D3DX10_00_X86,L"DEC2006_d3dx10_00_x86.cab" },
	{ DEC2006_XACT_X64,L"DEC2006_XACT_x64.cab" },
	{ DEC2006_XACT_X86,L"DEC2006_XACT_x86.cab" },
	{ FEB2005_D3DX9_24_X64,L"Feb2005_d3dx9_24_x64.cab" },
	{ FEB2005_D3DX9_24_X86,L"Feb2005_d3dx9_24_x86.cab" },
	{ FEB2006_D3DX9_29_X64,L"Feb2006_d3dx9_29_x64.cab" },
	{ FEB2006_D3DX9_29_X86,L"Feb2006_d3dx9_29_x86.cab" },
	{ FEB2006_XACT_X64,L"Feb2006_XACT_x64.cab" },
	{ FEB2006_XACT_X86,L"Feb2006_XACT_x86.cab" },
	{ FEB2007_XACT_X64,L"FEB2007_XACT_x64.cab" },
	{ FEB2007_XACT_X86,L"FEB2007_XACT_x86.cab" },
	{ FEB2010_X3DAUDIO_X64,L"Feb2010_X3DAudio_x64.cab" },
	{ FEB2010_X3DAUDIO_X86,L"Feb2010_X3DAudio_x86.cab" },
	{ FEB2010_XACT_X64,L"Feb2010_XACT_x64.cab" },
	{ FEB2010_XACT_X86,L"Feb2010_XACT_x86.cab" },
	{ FEB2010_XAUDIO_X64,L"Feb2010_XAudio_x64.cab" },
	{ FEB2010_XAUDIO_X86,L"Feb2010_XAudio_x86.cab" },
	{ JUN2005_D3DX9_26_X64,L"Jun2005_d3dx9_26_x64.cab" },
	{ JUN2005_D3DX9_26_X86,L"Jun2005_d3dx9_26_x86.cab" },
	{ JUN2006_XACT_X64,L"JUN2006_XACT_x64.cab" },
	{ JUN2006_XACT_X86,L"JUN2006_XACT_x86.cab" },
	{ JUN2007_D3DX9_34_X64,L"JUN2007_d3dx9_34_x64.cab" },
	{ JUN2007_D3DX9_34_X86,L"JUN2007_d3dx9_34_x86.cab" },
	{ JUN2007_D3DX10_34_X64,L"JUN2007_d3dx10_34_x64.cab" },
	{ JUN2007_D3DX10_34_X86,L"JUN2007_d3dx10_34_x86.cab" },
	{ JUN2007_XACT_X64,L"JUN2007_XACT_x64.cab" },
	{ JUN2007_XACT_X86,L"JUN2007_XACT_x86.cab" },
	{ JUN2008_D3DX9_38_X64,L"JUN2008_d3dx9_38_x64.cab" },
	{ JUN2008_D3DX9_38_X86,L"JUN2008_d3dx9_38_x86.cab" },
	{ JUN2008_D3DX10_38_X64,L"JUN2008_d3dx10_38_x64.cab" },
	{ JUN2008_D3DX10_38_X86,L"JUN2008_d3dx10_38_x86.cab" },
	{ JUN2008_X3DAUDIO_X64,L"JUN2008_X3DAudio_x64.cab" },
	{ JUN2008_X3DAUDIO_X86,L"JUN2008_X3DAudio_x86.cab" },
	{ JUN2008_XACT_X64,L"JUN2008_XACT_x64.cab" },
	{ JUN2008_XACT_X86,L"JUN2008_XACT_x86.cab" },
	{ JUN2008_XAUDIO_X64,L"JUN2008_XAudio_x64.cab" },
	{ JUN2008_XAUDIO_X86,L"JUN2008_XAudio_x86.cab" },
	{ JUN2010_D3DCOMPILER_43_X64,L"Jun2010_D3DCompiler_43_x64.cab" },
	{ JUN2010_D3DCOMPILER_43_X86,L"Jun2010_D3DCompiler_43_x86.cab" },
	{ JUN2010_D3DCSX_43_X64,L"Jun2010_d3dcsx_43_x64.cab" },
	{ JUN2010_D3DCSX_43_X86,L"Jun2010_d3dcsx_43_x86.cab" },
	{ JUN2010_D3DX9_43_X64,L"Jun2010_d3dx9_43_x64.cab" },
	{ JUN2010_D3DX9_43_X86,L"Jun2010_d3dx9_43_x86.cab" },
	{ JUN2010_D3DX10_43_X64,L"Jun2010_d3dx10_43_x64.cab" },
	{ JUN2010_D3DX10_43_X86,L"Jun2010_d3dx10_43_x86.cab" },
	{ JUN2010_D3DX11_43_X64,L"Jun2010_d3dx11_43_x64.cab" },
	{ JUN2010_D3DX11_43_X86,L"Jun2010_d3dx11_43_x86.cab" },
	{ JUN2010_XACT_X64,L"Jun2010_XACT_x64.cab" },
	{ JUN2010_XACT_X86,L"Jun2010_XACT_x86.cab" },
	{ JUN2010_XAUDIO_X64,L"Jun2010_XAudio_x64.cab" },
	{ JUN2010_XAUDIO_X86,L"Jun2010_XAudio_x86.cab" },
	{ MAR2008_D3DX9_37_X64,L"Mar2008_d3dx9_37_x64.cab" },
	{ MAR2008_D3DX9_37_X86,L"Mar2008_d3dx9_37_x86.cab" },
	{ MAR2008_D3DX10_37_X64,L"Mar2008_d3dx10_37_x64.cab" },
	{ MAR2008_D3DX10_37_X86,L"Mar2008_d3dx10_37_x86.cab" },
	{ MAR2008_X3DAUDIO_X64,L"Mar2008_X3DAudio_x64.cab" },
};

DATA necessary[] = {
	{ DSETUP,L"DSETUP.dll" },
	{ DSETUP32,L"dsetup32.dll" },
	{ DXDLLREG_X86,L"dxdllreg_x86.cab" },
	{ DXSETUP,L"DXSETUP.exe" },
	{ DXUPDATE,L"dxupdate.cab" },
};

BOOL CreateTempDirectory(HWND hWnd, LPTSTR pszDir)
{
	DWORD dwSize = GetTempPath(0, 0);
	if (dwSize == 0 || dwSize > MAX_PATH - 14) { MessageBox(hWnd, TEXT("GetTempPath Error"), NULL, MB_OK); goto END0; }
	LPTSTR pTmpPath;
	pTmpPath = (LPTSTR)GlobalAlloc(GPTR, sizeof(TCHAR)*(dwSize + 1));
	GetTempPath(dwSize + 1, pTmpPath);
	dwSize = GetTempFileName(pTmpPath, TEXT(""), 0, pszDir);
	GlobalFree(pTmpPath);
	if (dwSize == 0) { MessageBox(hWnd, TEXT("GetTempFileName Error"), NULL, MB_OK); goto END0; }
	DeleteFile(pszDir);
	if (CreateDirectory(pszDir, 0) == 0) { MessageBox(hWnd, TEXT("CreateDirectory Error"), NULL, MB_OK); goto END0; }
	return TRUE;
END0:
	return FALSE;
}

VOID CreateFileFromResource(TCHAR *szResourceName, TCHAR *szResourceType, TCHAR *szResFileName)
{
	HRSRC hRs = FindResource(0, szResourceName, szResourceType);
	DWORD dwResSize = SizeofResource(0, hRs);
	HGLOBAL hMem = LoadResource(0, hRs);
	LPBYTE lpByte = (BYTE *)LockResource(hMem);
	DWORD dwWritten;
	HANDLE hFile = CreateFile(szResFileName, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	WriteFile(hFile, lpByte, dwResSize, &dwWritten, NULL);
	CloseHandle(hFile);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	static HFONT hFont;
	static HWND hRadio1;
	static HWND hRadio2;
	static HWND hTree;
	static HWND hButton;
	switch (msg)
	{
	case WM_CREATE:
		InitCommonControls();
		hFont = CreateFontW(-MulDiv(10, 96, 72), 0, 0, 0, FW_NORMAL, 0, 0, 0, SHIFTJIS_CHARSET, 0, 0, 0, 0, L"MS Shell Dlg");
		hRadio1 = CreateWindow(TEXT("BUTTON"), TEXT("すべてインストール(&A)"), WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON, 0, 0, 0, 0, hWnd, 0, ((LPCREATESTRUCT)lParam)->hInstance, 0);
		hRadio2 = CreateWindow(TEXT("BUTTON"), TEXT("インストールするモジュールを選択する(&S)"), WS_VISIBLE | WS_CHILD | BS_AUTORADIOBUTTON, 0, 0, 0, 0, hWnd, 0, ((LPCREATESTRUCT)lParam)->hInstance, 0);
		hTree = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			WC_TREEVIEW,
			0,
			WS_DISABLED | WS_CHILD | WS_VISIBLE | TVS_CHECKBOXES,
			0, 0, 0, 0,
			hWnd,
			(HMENU)2000,
			((LPCREATESTRUCT)lParam)->hInstance,
			0);
		{
			TV_INSERTSTRUCT tv = { 0 };
			tv.hParent = TVI_ROOT;
			tv.item.mask = TVIF_TEXT | TVIF_PARAM;
			for (auto item : data)
			{
				tv.item.pszText = (LPWSTR)item.lpszModuleName;
				tv.item.lParam = item.nID;
				TreeView_InsertItem(hTree, &tv);
			}
		}
		SetClassLongPtr(hTree, GCL_STYLE, GetClassLongPtr(hTree, GCL_STYLE) & ~CS_DBLCLKS);
		hButton = CreateWindow(TEXT("BUTTON"), TEXT("インストール(&I)"), WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 0, 0, 0, 0, hWnd, (HMENU)IDOK, ((LPCREATESTRUCT)lParam)->hInstance, 0);
		SendMessage(hRadio1, WM_SETFONT, (WPARAM)hFont, 0);
		SendMessage(hRadio2, WM_SETFONT, (WPARAM)hFont, 0);
		SendMessage(hTree, WM_SETFONT, (WPARAM)hFont, 0);
		SendMessage(hButton, WM_SETFONT, (WPARAM)hFont, 0);
		SendMessage(hRadio1, BM_SETCHECK, BST_CHECKED, 0);
		break;
	case WM_SIZE:
		MoveWindow(hRadio1, 10, 10, 256, 32, TRUE);
		MoveWindow(hRadio2, 10, 50, 256, 32, TRUE);
		MoveWindow(hTree, 10, 90, LOWORD(lParam) - 20, HIWORD(lParam) - 100, TRUE);
		MoveWindow(hButton, LOWORD(lParam) - 266, 10, 256, 32, TRUE);
		break;
	case WM_COMMAND:
		if ((HWND)lParam == hRadio1)
		{
			if (HIWORD(wParam) == BN_CLICKED)
			{
				EnableWindow(hTree, FALSE);
			}
		}
		else if ((HWND)lParam == hRadio2)
		{
			if (HIWORD(wParam) == BN_CLICKED)
			{
				EnableWindow(hTree, TRUE);
				SetFocus(hTree);
			}
		}
		else if (LOWORD(wParam) == IDOK)
		{
			int nReturn = -1;
			// テンポラリフォルダ作成
			TCHAR szTempPath[MAX_PATH];
			if (CreateTempDirectory(hWnd, szTempPath))
			{
				// 必要なファイルをテンポラリに展開
				for (auto item : necessary)
				{
					TCHAR szFilePath[MAX_PATH];
					lstrcpy(szFilePath, szTempPath);
					PathAppend(szFilePath, item.lpszModuleName);
					CreateFileFromResource(MAKEINTRESOURCE(item.nID), TEXT("BIN"), szFilePath);
				}
				// チェックされたモジュールをテンポラリに展開
				std::vector<DATA> list;
				if ((BOOL)SendMessage(hRadio1, BM_GETCHECK, 0, 0) == TRUE)
				{
					for (auto item : data)
					{
						list.push_back(item);
					}
				}
				else if ((BOOL)SendMessage(hRadio2, BM_GETCHECK, 0, 0) == TRUE)
				{
					HTREEITEM hItem = TreeView_GetChild(hTree, TVI_ROOT);
					int nIndex = 0;
					while (hItem)
					{
						if (TreeView_GetCheckState(hTree, hItem) == TRUE)
						{
							list.push_back(data[nIndex]);
						}
						hItem = TreeView_GetNextItem(hTree, hItem, TVGN_NEXT);
						++nIndex;
					}
				}
				for (auto item : list)
				{
					TCHAR szFilePath[MAX_PATH];
					lstrcpy(szFilePath, szTempPath);
					PathAppend(szFilePath, item.lpszModuleName);
					CreateFileFromResource(MAKEINTRESOURCE(item.nID), TEXT("BIN"), szFilePath);
				}
				// DLLをロード
				TCHAR szSetupModulePath[MAX_PATH];
				lstrcpy(szSetupModulePath, szTempPath);
				PathAppend(szSetupModulePath, L"DSETUP.DLL");
				HMODULE hModule = LoadLibrary(szSetupModulePath);
				if (hModule)
				{
					typedef int(__stdcall*DIRECTXSETUPW)(HWND, LPWSTR, DWORD);
					DIRECTXSETUPW DirectxSetupW = (DIRECTXSETUPW)GetProcAddress(hModule, "DirectXSetupW");
					if (DirectxSetupW)
					{
						nReturn = DirectxSetupW(hWnd, (LPWSTR)szTempPath, 0x00000008 | 0x00000010 | 0x00010000);
					}
					FreeLibrary(hModule);
				}
				// ファイルを削除
				for (auto item : necessary)
				{
					TCHAR szFilePath[MAX_PATH];
					lstrcpy(szFilePath, szTempPath);
					PathAppend(szFilePath, item.lpszModuleName);
					DeleteFile(szFilePath);
				}
				for (auto item : list)
				{
					TCHAR szFilePath[MAX_PATH];
					lstrcpy(szFilePath, szTempPath);
					PathAppend(szFilePath, item.lpszModuleName);
					DeleteFile(szFilePath);
				}
				RemoveDirectory(szTempPath);
			}
			if (nReturn == 0)
			{
				MessageBox(hWnd, TEXT("インストールが正常に終了しました。"), TEXT("確認"), 0);
			}
			else
			{
				MessageBox(hWnd, TEXT("何らかのエラーが発生しインストールが正常に行われませんでした。"), 0, 0);
			}
		}
		break;
	case WM_NOTIFY:
		if (wParam == 2000)
		{
			if (((LPNMHDR)lParam)->code == NM_CLICK)
			{
				TVHITTESTINFO ht;
				GetCursorPos(&ht.pt);
				ScreenToClient(((LPNMHDR)lParam)->hwndFrom, &ht.pt);
				TreeView_HitTest(((LPNMHDR)lParam)->hwndFrom, &ht);
				if (ht.flags & TVHT_ONITEMLABEL)
				{
					TreeView_SetCheckState(hTree, ht.hItem, !TreeView_GetCheckState(hTree, ht.hItem));
				}
				else if (ht.flags & TVHT_ONITEMSTATEICON)
				{
					TreeView_SelectItem(hTree, ht.hItem);
				}
			}
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hWnd);
		break;
	case WM_DESTROY:
		DeleteObject(hFont);
		PostQuitMessage(0);
		break;
	default:
		return DefDlgProc(hWnd, msg, wParam, lParam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInst, LPSTR pCmdLine, int nCmdShow)
{
	MSG msg;
	WNDCLASS wndclass = {
		CS_HREDRAW | CS_VREDRAW,
		WndProc,
		0,
		DLGWINDOWEXTRA,
		hInstance,
		0,
		LoadCursor(0,IDC_ARROW),
		(HBRUSH)(COLOR_WINDOW + 1),
		0,
		szClassName
	};
	RegisterClass(&wndclass);
	HWND hWnd = CreateWindow(
		szClassName,
		TEXT("DirextX モジュールのインストール"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		0,
		CW_USEDEFAULT,
		0,
		0,
		0,
		hInstance,
		0
	);
	ShowWindow(hWnd, SW_SHOWDEFAULT);
	UpdateWindow(hWnd);
	while (GetMessage(&msg, 0, 0, 0))
	{
		if (!IsDialogMessage(hWnd, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	return (int)msg.wParam;
}
