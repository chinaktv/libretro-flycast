#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#include "libretro_core_option_defines.h"

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

#define COLORS_STRING_CHS \
      { "BLACK 02",          "黑色" }, \
      { "BLUE 03",           "蓝色" }, \
      { "LIGHT_BLUE 04",     "浅蓝色" }, \
      { "GREEN 05",          "绿色" }, \
      { "CYAN 06",           "青色" }, \
      { "CYAN_BLUE 07",      "青蓝色" }, \
      { "LIGHT_GREEN 08",    "浅绿色" }, \
      { "CYAN_GREEN 09",     "青绿色" }, \
      { "LIGHT_CYAN 10",     "浅青色" }, \
      { "RED 11",            "红色" }, \
      { "PURPLE 12",         "紫色" }, \
      { "LIGHT_PURPLE 13",   "浅紫色" }, \
      { "YELLOW 14",         "黄色" }, \
      { "GRAY 15",           "灰色" }, \
      { "LIGHT_PURPLE_2 16", "浅紫色 (2)" }, \
      { "LIGHT_GREEN_2 17",  "浅绿色 (2)" }, \
      { "LIGHT_GREEN_3 18",  "浅绿色 (3)" }, \
      { "LIGHT_CYAN_2 19",   "浅青色 (2)" }, \
      { "LIGHT_RED_2 20",    "浅红色 (2)" }, \
      { "MAGENTA 21",        "品红色" }, \
      { "LIGHT_PURPLE_2 22", "浅紫色 (2)" }, \
      { "LIGHT_ORANGE 23",   "浅橙色" }, \
      { "ORANGE 24",         "橙色" }, \
      { "LIGHT_PURPLE_3 25", "浅紫色 (3)" }, \
      { "LIGHT_YELLOW 26",   "浅黄色" }, \
      { "LIGHT_YELLOW_2 27", "浅黄色 (2)" }, \
      { "WHITE 28",          "白色" }, \
      { NULL, NULL },

#define VMU_SCREEN_PARAMS_CHS(num) \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_display", \
   "VMU 屏幕" #num "显示", \
   "", \
   { \
      { "disabled", "禁用" }, \
      { "enabled",  "启用" }, \
      { NULL, NULL }, \
   }, \
   "disabled", \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_position", \
   "VMU 屏幕" #num "位置", \
   "", \
   { \
      { "Upper Left",  "左上角" }, \
      { "Upper Right", "右上角" }, \
      { "Lower Left",  "左下角" }, \
      { "Lower Right", "右下角" }, \
      { NULL, NULL }, \
   }, \
   "Upper Left", \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_size_mult", \
   "VMU 屏幕" #num "大小", \
   "", \
   { \
      { "1x", NULL }, \
      { "2x", NULL }, \
      { "3x", NULL }, \
      { "4x", NULL }, \
      { "5x", NULL }, \
      { NULL, NULL }, \
   }, \
   "1x", \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_pixel_on_color", \
   "VMU 屏幕" #num "像素点亮颜色", \
   "", \
   { \
      { "DEFAULT_ON 00",  "缺省亮色" }, \
      { "DEFAULT_OFF 01", "缺省暗色" }, \
      COLORS_STRING_CHS \
   }, \
   "DEFAULT_ON 00", \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_pixel_off_color", \
   "VMU 屏幕" #num "像素熄灭颜色", \
   "", \
   { \
      { "DEFAULT_OFF 01", "缺省暗色" }, \
      { "DEFAULT_ON 00",  "缺省亮色" }, \
      COLORS_STRING_CHS \
   }, \
   "DEFAULT_OFF 01", \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_opacity", \
   "VMU 屏幕" #num "不透明度", \
   "", \
   { \
      { "10%",  NULL }, \
      { "20%",  NULL }, \
      { "30%",  NULL }, \
      { "40%",  NULL }, \
      { "50%",  NULL }, \
      { "60%",  NULL }, \
      { "70%",  NULL }, \
      { "80%",  NULL }, \
      { "90%",  NULL }, \
      { "100%", NULL }, \
      { NULL,   NULL }, \
   }, \
   "100%", \
},

#define LIGHTGUN_PARAMS_CHS(num) \
{ \
   CORE_OPTION_NAME "_lightgun" #num "_crosshair", \
   "光枪准心" #num "显示", \
   "", \
   { \
      { "disabled", "禁用" }, \
      { "White",    "白色" }, \
      { "Red",      "红色" }, \
      { "Green",    "绿色" }, \
      { "Blue",     "蓝色" }, \
      { NULL,       NULL }, \
   }, \
   "disabled", \
},

struct retro_core_option_definition option_defs_chs[] = {
#if ((FEAT_SHREC == DYNAREC_JIT && HOST_CPU == CPU_X86) || (HOST_CPU == CPU_ARM) || (HOST_CPU == CPU_ARM64) || (HOST_CPU == CPU_X64)) && defined(TARGET_NO_JIT)
   {
      CORE_OPTION_NAME "_cpu_mode",
      "CPU模式（须重启）",
      "",
      {
#if (FEAT_SHREC == DYNAREC_JIT && HOST_CPU == CPU_X86) || (HOST_CPU == CPU_ARM) || (HOST_CPU == CPU_ARM64) || (HOST_CPU == CPU_X64)
         { "dynamic_recompiler", "动态重编译" },
#endif
#ifdef TARGET_NO_JIT
         { "generic_recompiler", "通用重编译" },
#endif
         { NULL, NULL },
      },
#if (FEAT_SHREC == DYNAREC_JIT && HOST_CPU == CPU_X86) || (HOST_CPU == CPU_ARM) || (HOST_CPU == CPU_ARM64) || (HOST_CPU == CPU_X64)
      "dynamic_recompiler",
#elif defined(TARGET_NO_JIT)
      "generic_recompiler",
#endif
   },
#endif
   {
      CORE_OPTION_NAME "_boot_to_bios",
      "启动到BIOS（须重启）",
      "直接启动到Dreamcast BIOS菜单。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_system",
      "系统类型（须重启）",
      "",
      {
         { "auto",       "自动" },
         { "dreamcast",  "Dreamcast" },
         { "naomi",      "NAOMI" },
         { "atomiswave", "Atomiswave" },
         { NULL, NULL },
      },
      "auto",
   },
   {
      CORE_OPTION_NAME "_hle_bios",
      "HLE BIOS",
      "强制使用高级模拟BIOS。",
      {
         { "disabled",  "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL},
      },
      "disabled",
   },
#if defined(HAVE_OIT) || defined(HAVE_VULKAN)
   {
      CORE_OPTION_NAME "_oit_abuffer_size",
      "累积像素缓冲区大小（须重启）",
      "",
      {
         { "512MB", NULL },
         { "1GB",   NULL },
         { "2GB",   NULL },
         { "4GB",   NULL },
         { NULL, NULL },
      },
      "512MB",
   },
#endif
   {
      CORE_OPTION_NAME "_internal_resolution",
      "内部分辨率（须重启）",
      "修改渲染分辨率，需要重新启动。",
      {
         { "320x240",    NULL },
         { "640x480",    NULL },
         { "800x600",    NULL },
         { "960x720",    NULL },
         { "1024x768",   NULL },
         { "1280x960",   NULL },
         { "1440x1080",  NULL },
         { "1600x1200",  NULL },
         { "1920x1440",  NULL },
         { "2560x1920",  NULL },
         { "2880x2160",  NULL },
         { "3200x2400",  NULL },
         { "3840x2880",  NULL },
         { "4480x3360",  NULL },
         { "5120x3840",  NULL },
         { "5760x4320",  NULL },
         { "6400x4800",  NULL },
         { "7040x5280",  NULL },
         { "7680x5760",  NULL },
         { "8320x6240",  NULL },
         { "8960x6720",  NULL },
         { "9600x7200",  NULL },
         { "10240x7680", NULL },
         { "10880x8160", NULL },
         { "11520x8640", NULL },
         { "12160x9120", NULL },
         { "12800x9600", NULL },
         { NULL, NULL },
      },
#ifdef LOW_RES
      "320x240",
#else
      "640x480",
#endif
   },
   {
      CORE_OPTION_NAME "_screen_rotation",
      "屏幕方向",
      "",
      {
         { "horizontal", "横屏" },
         { "vertical",   "竖屏" },
         { NULL, NULL },
      },
      "horizontal",
   },
   {
      CORE_OPTION_NAME "_alpha_sorting",
      "Alpha排序",
      "",
      {
         { "per-strip (fast, least accurate)", "每折线（快速，最低精度）" },
         { "per-triangle (normal)",            "每三角形（正常）" },
#if defined(HAVE_OIT) || defined(HAVE_VULKAN)
         { "per-pixel (accurate)",             "每像素（高精度，最慢）" },
#endif
         { NULL, NULL },
      },
#if defined(LOW_END)
      "per-strip (fast, least accurate)",
#else
      "per-triangle (normal)",
#endif
   },
   {
      CORE_OPTION_NAME "_gdrom_fast_loading",
      "GDROM快速载入（不精确）",
      "加速GD-ROM载入。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
#ifdef LOW_END
      "enabled",
#else
      "disabled",
#endif
   },
   {
      CORE_OPTION_NAME "_mipmapping",
      "mip映射",
      "",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      CORE_OPTION_NAME "_volume_modifier_enable",
      "体积修饰器",
      "这是Dreamcast GPU的一项功能，通常被游戏用来绘制物体阴影。\n正常情况下此项应该被启用 - 对性能的影响通常很小，基本可以忽略不计。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      CORE_OPTION_NAME "_widescreen_hack",
      "宽屏Hack（须重启）",
      "",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_widescreen_cheats",
      "宽屏Cheats（须重启）",
      "激活作弊码方式使特定游戏以宽屏模式显示。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_cable_type",
      "线缆类型",
      "",
      {
         { "TV (RGB)",       NULL },
         { "TV (Composite)", NULL },
         { "VGA (RGB)",      NULL },
         { NULL, NULL },
      },
#ifdef LOW_END
      "VGA (RGB)",
#else
      "TV (Composite)",
#endif
   },
   {
      CORE_OPTION_NAME "_broadcast",
      "制式",
      "",
      {
         { "Default", "缺省" },
         { "PAL_M",   "PAL-M (巴西)" },
         { "PAL_N",   "PAL-N (阿根廷, 巴拉圭, 乌拉圭)" },
         { "NTSC",    NULL },
         { "PAL",     "PAL (世界)" },
         { NULL, NULL },
      },
      "Default",
   },
   {
      CORE_OPTION_NAME "_framerate",
      "帧率",
      "影响模拟器如何和前端交互。\n"
      "'全速' - 模拟器在每帧渲染后交还控制权给RetroArch。\n"
      "'正常' - 模拟器在每个V-blank中断发生时交还控制权给RetroArch。\n"
      "'全速'应该在绝大多数情况下使用。'正常'在某些系统可能会提升帧数调步，\n"
      "但是可能造成在静态画面时输入无响应（例如载入/暂停画面）。\n"
      "注意：此设置只有在'多线程渲染'关闭时有效。",
      {
         { "fullspeed", "全速" },
         { "normal",    "正常" },
         { NULL, NULL },
      },
      "fullspeed",
   },
   {
      CORE_OPTION_NAME "_region",
      "区域",
      "",
      {
         { "Default", "缺省" },
         { "Japan",   "日本" },
         { "USA",     "美国" },
         { "Europe",  "欧洲" },
         { NULL, NULL },
      },
      "Default",
   },
   {
      CORE_OPTION_NAME "_language",
      "语言",
      "",
      {
         { "Default",  "缺省" },
         { "Japanese", "日语" },
         { "English",  "英语" },
         { "German",   "德语" },
         { "French",   "法语" },
         { "Spanish",  "西班牙语" },
         { "Italian",  "意大利语" },
         { NULL, NULL },
      },
      "Default",
   },
   {
      CORE_OPTION_NAME "_div_matching",
      "DIV匹配",
      "优化整数除法。",
      {
         { "disabled", "禁用" },
         { "auto",     "自动" },
         { NULL, NULL },
      },
      "auto",
   },   
   {
      CORE_OPTION_NAME "_force_wince",
      "强制Windows CE模式",
      "为Windows CE游戏启用完全MMU模拟以及其他设置。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_analog_stick_deadzone",
      "模拟摇杆盲区",
      "",
      {
         { "0%",  NULL },
         { "5%",  NULL },
         { "10%", NULL },
         { "15%", NULL },
         { "20%", NULL },
         { "25%", NULL },
         { "30%", NULL },
         { NULL, NULL },
      },
      "15%",
   },
   {
      CORE_OPTION_NAME "_trigger_deadzone",
      "扳机键盲区",
      "",
      {
         { "0%",  NULL },
         { "5%",  NULL },
         { "10%", NULL },
         { "15%", NULL },
         { "20%", NULL },
         { "25%", NULL },
         { "30%", NULL },
         { NULL, NULL },
      },
      "0%",
   },
   {
      CORE_OPTION_NAME "_digital_triggers",
      "数字扳机键",
      "",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_enable_dsp",
      "启用DSP",
      "启用对Dreamcast音频DSP（数字信号处理器）的模拟。 \n"
      "提高声音模拟的精确度，但是会增加对系统性能的要求。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
#ifdef LOW_END
      "disabled",
#else
      "enabled",
#endif
   },
   {
      CORE_OPTION_NAME "_anisotropic_filtering",
      "各向异性过滤",
      "增强斜面视角表面贴图的质量。",
      {
         { "off", "关闭" },
         { "2",  "2倍" },
         { "4",  "4倍" },
         { "8",  "8倍" },
         { "16",  "16倍" },
         { NULL, NULL },
      },
      "4",
   },
   {
      CORE_OPTION_NAME "_pvr2_filtering",
      "PowerVR2后处理滤镜",
      "对渲染图像进行后处理以模拟PowerVR2 GPU的特定效果和模拟信号输出的效果。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
#ifdef HAVE_TEXUPSCALE
   {
      CORE_OPTION_NAME "_texupscale",
      "纹理放大 (xBRZ)",
      "增强2D手绘图形质量。应该只用于2D像素游戏。",
      {
         { "off", "关闭" },
         { "2x",  NULL },
         { "4x",  NULL },
         { "6x",  NULL },
         { NULL, NULL },
      },
      "off",
   },
   {
      CORE_OPTION_NAME "_texupscale_max_filtered_texture_size",
      "纹理放大最大过滤尺寸",
      "",
      {
         { "256",  NULL },
         { "512",  NULL },
         { "1024", NULL },
         { NULL, NULL },
      },
      "256",
   },
#endif
   {
      CORE_OPTION_NAME "_enable_rttb",
      "启用RTT（渲染到纹理）缓存",
      "",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_render_to_texture_upscaling",
      "RTT放大",
      "",
      {
         { "1x", NULL },
         { "2x", NULL },
         { "3x", NULL },
         { "4x", NULL },
         { "8x", NULL },
         { NULL, NULL },
      },
      "1x",
   },
#if !defined(TARGET_NO_THREADS)
   {
      CORE_OPTION_NAME "_threaded_rendering",
      "多线程渲染（须重启）",
      "用不同的线程运行GPU和CPU，高度推荐。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      CORE_OPTION_NAME "_synchronous_rendering",
      "同步渲染",
      "等待GPU完成前一帧的渲染，而不是丢弃当前帧。\n"
      "注意：此设置只有在'多线程渲染'开启时有效。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
#ifdef LOW_END
      "disabled",
#else
      "enabled",
#endif
   },
   {
      CORE_OPTION_NAME "_delay_frame_swapping",
      "延迟帧交换",
      "对避免闪屏和视频跳动很有用。不推荐在低速平台上开启。\n"
      "注意：此设置只有在'多线程渲染'开启时有效。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
#endif
   {
      CORE_OPTION_NAME "_frame_skipping",
      "跳帧",
      "设置每个显示的帧之间跳过的帧数。",
      {
         { "disabled",  "禁用" },
         { "1",         NULL },
         { "2",         NULL },
         { "3",         NULL },
         { "4",         NULL },
         { "5",         NULL },
         { "6",         NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_enable_purupuru",
      "振动包",
      "启用控制器力反馈功能。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "enabled",
   },
   {
      CORE_OPTION_NAME "_allow_service_buttons",
      "允许NAOMI服务模式按钮",
      "启用NAOMI基板的服务按钮，以进入框体设置菜单。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_enable_naomi_15khz_dipswitch",
      "启用NAOMI 15KHz DIP开关",
      "此设置可以强制以240p, 480i模式显示或者完全无效，取决于游戏。",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_custom_textures",
      "载入自定义贴图",
      "",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_dump_textures",
      "导出贴图",
      "",
      {
         { "disabled", "禁用" },
         { "enabled",  "启用" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_per_content_vmus",
      "分游戏VMU存档",
      "如果禁用，所有游戏共享4个VMU存档文件 (A1, B1, C1, D1)，保存在RetroArch系统目录下。\n"
       "'VMU A1'选项为每个游戏生成独立VMU 'A1'文件，保存在RetroArch存档目录下。\n"
       "'所有VMU'选项为每个游戏生成4个独立的VMU文件 (A1, B1, C1, D1)。",
      {
         { "disabled", "禁用" },
         { "VMU A1",   NULL },
         { "All VMUs", "所有VMU" },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      CORE_OPTION_NAME "_show_vmu_screen_settings",
      "显示VMU显示设置",
      "启用模拟VMU显示屏的可见性、大小和色彩的设置。\n"
      "注意：必须切出快速菜单以使此设置生效。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "disabled"
   },
   VMU_SCREEN_PARAMS_CHS(1)
   VMU_SCREEN_PARAMS_CHS(2)
   VMU_SCREEN_PARAMS_CHS(3)
   VMU_SCREEN_PARAMS_CHS(4)
   {
      CORE_OPTION_NAME "_show_lightgun_settings",
      "显示光枪设置",
      "启用光枪准心显示设置。\n"
      "注意：必须切出快速菜单以使此设置生效。",
      {
         { "enabled",  "启用" },
         { "disabled", "禁用" },
         { NULL, NULL},
      },
      "disabled"
   },
   LIGHTGUN_PARAMS_CHS(1)
   LIGHTGUN_PARAMS_CHS(2)
   LIGHTGUN_PARAMS_CHS(3)
   LIGHTGUN_PARAMS_CHS(4)
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

#define COLORS_STRING_TR \
      { "BLACK 02",          "Siyah" }, \
      { "BLUE 03",           "Mavi" }, \
      { "LIGHT_BLUE 04",     "Açık Mavi" }, \
      { "GREEN 05",          "Yeşil" }, \
      { "CYAN 06",           "Camgöbeği" }, \
      { "CYAN_BLUE 07",      "Camgöbeği Mavi" }, \
      { "LIGHT_GREEN 08",    "Açık Yeşil" }, \
      { "CYAN_GREEN 09",     "Camgöbeği Yeşil" }, \
      { "LIGHT_CYAN 10",     "Açık Camgöbeği" }, \
      { "RED 11",            "Kırmızı" }, \
      { "PURPLE 12",         "Mor" }, \
      { "LIGHT_PURPLE 13",   "Açık Mor" }, \
      { "YELLOW 14",         "Sarı" }, \
      { "GRAY 15",           "Gri" }, \
      { "LIGHT_PURPLE_2 16", "Açık Mor (2)" }, \
      { "LIGHT_GREEN_2 17",  "Açık Yeşil (2)" }, \
      { "LIGHT_GREEN_3 18",  "Açık Yeşil (3)" }, \
      { "LIGHT_CYAN_2 19",   "Açık Cyan (2)" }, \
      { "LIGHT_RED_2 20",    "Açık Kırmızı (2)" }, \
      { "MAGENTA 21",        "Eflatun" }, \
      { "LIGHT_PURPLE_2 22", "Açık Mor (2)" }, \
      { "LIGHT_ORANGE 23",   "Açık Turuncu" }, \
      { "ORANGE 24",         "Turuncu" }, \
      { "LIGHT_PURPLE_3 25", "Açık Mor (3)" }, \
      { "LIGHT_YELLOW 26",   "Açık Sarı" }, \
      { "LIGHT_YELLOW_2 27", "Açık Sarı (2)" }, \
      { "WHITE 28",          "Beyaz" }, \
      { NULL, NULL },

#define VMU_SCREEN_PARAMS_TR(num) \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_display", \
   "VMU Screen " #num " Görsel", \
   "", \
   { \
      { NULL, NULL }, \
   }, \
   NULL, \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_position", \
   "VMU Screen " #num " Pozisyon", \
   "", \
   { \
      { "Upper Left",  "Sol Üst" }, \
      { "Upper Right", "Sağ Üst" }, \
      { "Lower Left",  "Sol Alt" }, \
      { "Lower Right", "Sağ Alt" }, \
      { NULL, NULL }, \
   }, \
   NULL, \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_size_mult", \
   "VMU Screen " #num " Boyut", \
   "", \
   { \
      { NULL, NULL }, \
   }, \
   NULL, \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_pixel_on_color", \
   "VMU Screen " #num " Piksel Varken Renk", \
   "", \
   { \
      { "DEFAULT_ON 00",  "Varsayılan AÇIK" }, \
      { "DEFAULT_OFF 01", "Varsayılan KAPALI" }, \
      COLORS_STRING_TR \
   }, \
   NULL, \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_pixel_off_color", \
   "VMU Screen " #num " Piksel Yokken Renk", \
   "", \
   { \
      { "DEFAULT_OFF 01", "Varsayılan KAPALI" }, \
      { "DEFAULT_ON 00",  "Varsayılan AÇIK" }, \
      COLORS_STRING_TR \
   }, \
   NULL, \
}, \
{ \
   CORE_OPTION_NAME "_vmu" #num "_screen_opacity", \
   "VMU Screen " #num " Opaklık", \
   "", \
   { \
      { NULL,   NULL }, \
   }, \
   NULL, \
},

#define LIGHTGUN_PARAMS_TR(num) \
{ \
   CORE_OPTION_NAME "_lightgun" #num "_crosshair", \
   "Gun Crosshair " #num " Görsel", \
   "", \
   { \
      { "disabled", NULL }, \
      { "White",    NULL }, \
      { "Red",      NULL }, \
      { "Green",    NULL }, \
      { "Blue",     NULL }, \
      { NULL,       NULL }, \
   }, \
   NULL, \
},

struct retro_core_option_definition option_defs_tr[] = {
#if ((FEAT_SHREC == DYNAREC_JIT && HOST_CPU == CPU_X86) || (HOST_CPU == CPU_ARM) || (HOST_CPU == CPU_ARM64) || (HOST_CPU == CPU_X64)) && defined(TARGET_NO_JIT)
   {
      CORE_OPTION_NAME "_cpu_mode",
      "CPU Modu (Yeniden Başlatma Gerektirir)",
      "",
      {
#if (FEAT_SHREC == DYNAREC_JIT && HOST_CPU == CPU_X86) || (HOST_CPU == CPU_ARM) || (HOST_CPU == CPU_ARM64) || (HOST_CPU == CPU_X64)
         { "dynamic_recompiler", "Dinamik Yeniden Derleyici" },
#endif
#ifdef TARGET_NO_JIT
         { "generic_recompiler", "Jenerik Yeniden Derleyici" },
#endif
         { NULL, NULL },
      },
      NULL,
   },
#endif
   {
      CORE_OPTION_NAME "_boot_to_bios",
      "BIOS'a önyükleme (Yeniden Başlatma Gerektirir)",
      "Doğrudan Dreamcast BIOS menüsüne önyükleme yapın.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_system",
      "Sistem Tipi (Yeniden Başlatma Gerektirir)",
      "",
      {
         { "auto",       "Otomatik" },
         { "dreamcast",  "Dreamcast" },
         { "naomi",      "NAOMI" },
         { "atomiswave", "Atomiswave" },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_hle_bios",
      "HLE BIOS",
      "Üst düzey öykünmüş BIOS(HLE) kullanımını zorla.",
      {
         { NULL, NULL},
      },
      NULL,
   },
#ifdef HAVE_OIT
   {
      CORE_OPTION_NAME "_oit_abuffer_size",
      "Birikim Piksel Arabellek Boyutu (Yeniden Başlatma Gerektirir)",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
#endif
   {
      CORE_OPTION_NAME "_internal_resolution",
      "Dahili Çözünürlük (Yeniden Başlat Gerektirir)",
      "Render çözünürlüğünü değiştirin. Yeniden başlatma gerektirir.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_screen_rotation",
      "Ekran Yönü",
      "",
      {
         { "horizontal", "Yatay" },
         { "vertical",   "Dikey" },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_alpha_sorting",
      "Alfa Sıralama",
      "",
      {
         { "per-strip (fast, least accurate)", "Şerit Başına (hızlı, en az doğru)" },
         { "per-triangle (normal)",            "Üçgen Başına (normal)" },
#if defined(HAVE_OIT) || defined(HAVE_VULKAN)
         { "per-pixel (accurate)",             "Piksel Başına (doğru, ancak en yavaş)" },
#endif
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_gdrom_fast_loading",
      "GDROM Hızlı Yükleme (kusurlu)",
      "GD-ROM yüklemesini hızlandırır.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_mipmapping",
      "Mipmapping",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_volume_modifier_enable",
      "Hacim Değiştirici",
      "Nesne gölgeleri çizmek için genellikle oyunlar tarafından kullanılan bir Dreamcast GPU özelliği. Bu normalde etkinleştirilmelidir - performansın etkisi ihmal edilebilir düzeyde genellikle minimum düzeydedir.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_widescreen_hack",
      "Geniş ekran kesmesi (Yeniden Başlatma Gerektirir)",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_cable_type",
      "Kablo Tipi",
      "",
      {
         { "TV (RGB)",       NULL },
         { "TV (Composite)", NULL },
         { "VGA (RGB)",      NULL },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_broadcast",
      "Yayın",
      "",
      {
         { "Default", "Varsayılan" },
         { "PAL_M",   "PAL-M (Brazil)" },
         { "PAL_N",   "PAL-N (Argentina, Paraguay, Uruguay)" },
         { "NTSC",    NULL },
         { "PAL",     "PAL (World)" },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_framerate",
      "Kare Hızı",
      "Emülatörün ön uçla nasıl etkileşimde bulunduğunu etkiler. 'Tam Hız' - emülatör, bir kare oluşturulduğunda, kontrolü RetroArch'a geri döndürür. 'Normal' - emülatör, V-blank kesmesi her üretildiğinde kontrolü RetroArch'a döndürür. Çoğu durumda 'Tam Hız' kullanılmalıdır. 'Normal' bazı sistemlerde kare ilerleme hızını iyileştirebilir, ancak ekran statik olduğunda (örneğin, yükleme/duraklatma ekranları) yanıt vermeyen girişe neden olabilir.",
      {
         { "fullspeed", "Tam Hız" },
         { "normal",    "Normal" },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_region",
      "Bölge",
      "",
      {
         { "Default", "Varsayılan" },
         { "Japan",   NULL },
         { "USA",     NULL },
         { "Europe",  NULL },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_language",
      "Dil",
      "",
      {
         { "Default",  "Varsayılan" },
         { "Japanese", NULL },
         { "English",  NULL },
         { "German",   NULL },
         { "French",   NULL },
         { "Spanish",  NULL },
         { "Italian",  NULL },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_div_matching",
      "DIV Eşleştirme (performans, daha az doğru)",
      "",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { "auto",     "Otomatik" },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_force_wince",
      "Force Windows CE Mode",
      "Enable full MMU emulation and other settings for Windows CE games",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_analog_stick_deadzone",
      "Analog Çubuğu Ölü Bölge",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_trigger_deadzone",
      "Tetik Ölü Bölge",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_digital_triggers",
      "Dijital Tetikleyiciler",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_enable_dsp",
      "DSP'yi Etkinleştir",
      "Dreamcast'in ses DSP'sinin (dijital sinyal işlemcisi) öykünmesini etkinleştirin. Üretilen sesin doğruluğunu arttırır, ancak performans gereksinimlerini artırır.",
      {
         { NULL, NULL },
      },
      NULL,
   },
#ifdef HAVE_TEXUPSCALE
   {
      CORE_OPTION_NAME "_texupscale",
      "Doku Büyütme (xBRZ)",
      "",
      {
         { "off", "Devre Dışı" },
         { "2x",  NULL },
         { "4x",  NULL },
         { "6x",  NULL },
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_texupscale_max_filtered_texture_size",
      "Doku Yükseltme Maks. Filtre boyutu",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
#endif
   {
      CORE_OPTION_NAME "_enable_rttb",
      "RTT'yi etkinleştirme (Dokuya Render'i) ara belleği",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_render_to_texture_upscaling",
      "Doku Yükseltme İşlemine Render",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
#if !defined(TARGET_NO_THREADS)
   {
      CORE_OPTION_NAME "_threaded_rendering",
      "İşlem Parçacığı Renderlama (Yeniden Başlatma Gerektirir)",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_synchronous_rendering",
      "Senkronize İşleme",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
#endif
   {
      CORE_OPTION_NAME "_frame_skipping",
      "Kare Atlama",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_enable_purupuru",
      "Purupuru Paketi / Titreşim Paketi",
      "Denetleyici geri bildirimini etkinleştirir.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_allow_service_buttons",
      "Allow NAOMI Service Buttons",
      "Kabin ayarlarına girmek için NAOMI'nin SERVİS düğmesini etkinleştirir.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_enable_naomi_15khz_dipswitch",
      "NAOMI 15KHz Dipswitch'i etkinleştir",
      "Bu, 240p, 480i'de gösterimi zorlayabilir veya oyuna bağlı olarak hiçbir etkisi olmayabilir.",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_custom_textures",
      "Özel Dokular Yükle",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_dump_textures",
      "Dokuları Göm",
      "",
      {
         { NULL, NULL },
      },
      NULL,
   },
   {
      CORE_OPTION_NAME "_per_content_vmus",
      "Oyun Başına VMU'lar",
      "Devre dışı bırakıldığında, tüm oyunlar RetroArch'ın sistem dizininde bulunan 4 VMU kaydetme dosyasını (A1, B1, C1, D1) paylaşır. 'VMU A1' ayarı, RetroArch'ın başlattığı her oyun için kaydetme dizininde benzersiz bir VMU 'A1' dosyası oluşturur. 'Tüm VMU'lar' ayarı, başlatılan her oyun için 4 benzersiz VMU dosyası (A1, B1, C1, D1) oluşturur.",
      {
         { "disabled", "Devre Dışı" },
         { "VMU A1",   NULL },
         { "All VMUs", "Tüm VMU'lar" },
         { NULL, NULL},
      },
      NULL,
   },
   VMU_SCREEN_PARAMS_TR(1)
   VMU_SCREEN_PARAMS_TR(2)
   VMU_SCREEN_PARAMS_TR(3)
   VMU_SCREEN_PARAMS_TR(4)
   LIGHTGUN_PARAMS_TR(1)
   LIGHTGUN_PARAMS_TR(2)
   LIGHTGUN_PARAMS_TR(3)
   LIGHTGUN_PARAMS_TR(4)
   { NULL, NULL, NULL, {{0}}, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
