//
// Game.h
//

#pragma once

#include "StepTimer.h"
#include <dinput.h>
#include <vector>
#include "Keyboard.h"
#include "Mouse.h"


class Sprite;
class Sprite2D;
class Tile;

// A basic game implementation that creates a D3D11 device and
// provides a game loop.
class Game
{
public:

    Game();

    // Initialization and management
    void Initialize(HWND window, int width, int height);

    // Basic game loop
    void Tick();

    // Messages
    void OnActivated();
    void OnDeactivated();
    void OnSuspending();
    void OnResuming();
    void OnWindowSizeChanged(int width, int height);

    // Properties
    void GetDefaultSize( int& width, int& height ) const;

private:

	Sprite2D* m_sprite;

    void Update(DX::StepTimer const& timer);
    void Render();

    void Clear();
    void Present();

    void CreateDevice();
    void CreateResources();

    void OnDeviceLost();

    // Device resources.
    HWND                                            m_window;
    int                                             m_outputWidth;
    int                                             m_outputHeight;

    D3D_FEATURE_LEVEL                               m_featureLevel;
    Microsoft::WRL::ComPtr<ID3D11Device1>           m_d3dDevice;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext1>    m_d3dContext;

    Microsoft::WRL::ComPtr<IDXGISwapChain1>         m_swapChain;
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView>  m_renderTargetView;
    Microsoft::WRL::ComPtr<ID3D11DepthStencilView>  m_depthStencilView;

	Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>  m_texture;

    // Rendering loop timer.
    DX::StepTimer                                   m_timer;


	std::unique_ptr<DirectX::SpriteBatch>			m_spriteBatch;
	DirectX::SimpleMath::Vector2					m_screenPos;
	DirectX::SimpleMath::Vector2					m_origin;

	std::unique_ptr<DirectX::CommonStates>			m_states;
	
	std::vector<Tile*>								tiles;
	std::vector<Tile*>								water;
	Tile* player;

	RECT											m_fullscreenRect;
	Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> m_background;

	//std::unique_ptr<IDirectInputDevice8>			m_keyboard;
	std::unique_ptr<DirectX::Keyboard>				m_keyboard;
	std::unique_ptr<DirectX::Mouse>					m_mouse;
};