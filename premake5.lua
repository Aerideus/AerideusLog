
workspace "AerideusLog"
    architecture "x64"
    configurations { "Debug", "Release", "Dist" }

    filter "system:windows"
        defines { "AE_WINDOWS" }

    filter "system:macosx"
        defines { "AE_MACOS" }

    filter "system:linux"
        defines { "AE_LINUX" }

    filter "configurations:Debug"
        defines { "AE_DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "AE_RELEASE" }
        optimize "On"

    filter "configurations:Dist"
        defines { "AE_DIST" }
        optimize "Speed"
        symbols "Off"

    filter "action:vs*"
        startproject "Sandbox"

project "AerideusLog"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"
    targetdir "bin/%{cfg.buildcfg}"
    objdir "obj/%{cfg.buildcfg}"

    files { "AerideusLog/src/*.c", "AerideusLog/include/*.h", "AerideusLog/internal/*.h" }

project "Sandbox"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    targetdir "bin/%{cfg.buildcfg}"
    objdir "obj/%{cfg.buildcfg}"
  
    files { "Sandbox/src/*.c", "Sandbox/src/*.h" }
    includedirs { "AerideusLog/include" }

    links { "AeridesLog" }
