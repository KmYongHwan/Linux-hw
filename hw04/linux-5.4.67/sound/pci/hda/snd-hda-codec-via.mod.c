#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x79ba865, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0xd43488b7, "snd_hda_enum_helper_info" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x5aeeb061, "snd_hda_add_verbs" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0xc7ee042f, "snd_hda_override_conn_list" },
	{ 0xc351056, "snd_hda_check_amp_list_power" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x4ee9a127, "snd_hda_codec_set_pincfg" },
	{ 0xdcc148ed, "snd_hda_mixer_amp_switch_put" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0xa9faf0cd, "snd_hda_codec_set_name" },
	{ 0x4822e197, "snd_hda_mixer_amp_switch_get" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0xeaf96bbb, "snd_hda_get_bool_hint" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x594c600, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x5c382191, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x89fdd379, "snd_hdac_regmap_read_raw" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0x5a4119f7, "snd_hda_get_connections" },
	{ 0x90e60e6b, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "2370FD01CA5250064F62C85");
