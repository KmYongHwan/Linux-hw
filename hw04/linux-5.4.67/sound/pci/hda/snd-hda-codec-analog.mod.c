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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0xd43488b7, "snd_hda_enum_helper_info" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0xc7ee042f, "snd_hda_override_conn_list" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0xab2022da, "snd_hda_get_path_from_idx" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0x40536a32, "snd_hdac_regmap_write_raw" },
	{ 0xefca2c92, "snd_hda_get_path_idx" },
	{ 0x16b9204a, "snd_hda_gen_check_power_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f1cf803, "snd_hda_activate_path" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0x1b5e89a5, "snd_hda_ctl_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x594c600, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x5c382191, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0x5a4119f7, "snd_hda_get_connections" },
	{ 0x90e60e6b, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "2D377D6C47265B961E12089");
