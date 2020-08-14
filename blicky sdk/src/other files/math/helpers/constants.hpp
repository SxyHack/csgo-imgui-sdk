#pragma once

class constants {
public:
	static constexpr double		   PI						{ 3.141592 };
	static constexpr double		   RADIAN					{ 57.28578 };
	static constexpr float		   PI_FLOAT					{ static_cast< float >( PI ) };
	
	static constexpr float RAD2DEG( const float x ) {
		return x * 180.f / PI_FLOAT;
	}

	static constexpr float DEG2RAD( const float x ) {
		return x * PI_FLOAT / 180.f;
	}
};
