workspace "SFMLEngineTerrainEditor"
    architecture "x86_64"
    startproject "SFMLEngineTerrainEditor"

    configurations
    {
        "Debug",
        "Release"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["SFML"] = "%{wks.location}/SFMLEngineTerrainEditor/vendor/SFML/include"

LibraryDir = {}
LibraryDir["SFML"] = "%{wks.location}/SFMLEngineTerrainEditor/vendor/SFML/lib"

project "SFMLEngineTerrainEditor"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
		
		location("%{wks.location}/SFMLEngineTerrainEditor")

    targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"SFMLEngineTerrainEditor/src/**.h",
		"SFMLEngineTerrainEditor/src/**.cpp"
	}

	defines
	{
		"SFML_STATIC"
	}

	includedirs
	{
		"src",
		"%{IncludeDir.SFML}"
	}
	
	libdirs
	{
		"%{LibraryDir.SFML}"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"
		
		links
		{
			"winmm.lib",
			"opengl32.lib",
			"freetype.lib",
			"sfml-graphics-s-d.lib",
			"sfml-window-s-d.lib",
			"sfml-system-s-d.lib"

		}

	filter "configurations:Release"
		runtime "Release"
		optimize "on"
		
		links
		{
			"winmm.lib",
			"opengl32.lib",
			"freetype.lib",
			"sfml-graphics-s.lib",
			"sfml-window-s.lib",
			"sfml-system-s.lib"
		}
