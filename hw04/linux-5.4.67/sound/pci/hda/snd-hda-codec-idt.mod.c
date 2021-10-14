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
	{ 0xdb5c087f, "snd_hdac_power_up" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0xd30d19cb, "snd_hda_codec_eapd_power_filter" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x5aeeb061, "snd_hda_add_verbs" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0xfc54d10b, "snd_hda_input_mux_put" },
	{ 0xc4142837, "seq_printf" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x4ee9a127, "snd_hda_codec_set_pincfg" },
	{ 0xdcc148ed, "snd_hda_mixer_amp_switch_put" },
	{ 0x898bd703, "snd_hda_gen_update_outputs" },
	{ 0x2d3d809, "snd_hda_jack_detect_enable_callback" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0x40536a32, "snd_hdac_regmap_write_raw" },
	{ 0x1ee003fb, "_snd_hda_set_pin_ctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x64721210, "snd_hda_gen_fix_pin_power" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x4822e197, "snd_hda_mixer_amp_switch_get" },
	{ 0xa92a10c, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xcf564c5c, "snd_hda_gen_add_micmute_led" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8e161a05, "snd_hda_gen_path_power_filter" },
	{ 0x31ab1443, "is_jack_detectable" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x7d93260b, "snd_hda_get_int_hint" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0xc7ede4c1, "snd_hda_jack_tbl_get" },
	{ 0xeaf96bbb, "snd_hda_get_bool_hint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0xd8849a82, "snd_hda_add_imux_item" },
	{ 0x594c600, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3ed7e77c, "snd_hda_enable_beep_device" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x5c382191, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0xf16a62d1, "snd_hda_apply_pincfgs" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0x751cf73c, "snd_hdac_power_down" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x50a1cf45, "query_amp_caps" },
	{ 0x15a12ff5, "snd_hda_codec_amp_init_stereo" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0x5a4119f7, "snd_hda_get_connections" },
	{ 0x90e60e6b, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "F53C27AE19742010C78F3AA");
