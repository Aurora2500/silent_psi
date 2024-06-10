workspace "SilentPsi"
	configurations { "Debug", "Release" }

project "silent_psi"
	kind "WindowedApp"
	language "C++"
	cppdialect "C++20"
	targetdir "."

	files { "src/**.cpp", "src/**.hpp" }
	links { "SDL2" }
	includedirs { "src" }

	filter "configurations:Debug"
		defines { "DEBUG" }
		symbols "On"

	filter "configurations:Release"
		defines { "NDEBUG" }
		optimize "On"
