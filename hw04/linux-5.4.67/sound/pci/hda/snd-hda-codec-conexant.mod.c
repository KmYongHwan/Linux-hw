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
	{ 0x98edb7b5, "snd_hda_gen_fixup_micmute_led" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0xb104ea0, "snd_hda_codec_get_pin_target" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x5aeeb061, "snd_hda_add_verbs" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x898bd703, "snd_hda_gen_update_outputs" },
	{ 0xab2022da, "snd_hda_get_path_from_idx" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0x40536a32, "snd_hdac_regmap_write_raw" },
	{ 0x16b9204a, "snd_hda_gen_check_power_status" },
	{ 0xaf4e5e70, "snd_hda_codec_set_pin_target" },
	{ 0xa92a10c, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xcf564c5c, "snd_hda_gen_add_micmute_led" },
	{ 0x4f1cf803, "snd_hda_activate_path" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0xd2f40371, "snd_hda_jack_set_gating_jack" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x594c600, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x22f3998c, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x5c382191, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x1e67c31c, "snd_hda_add_new_path" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x89fdd379, "snd_hdac_regmap_read_raw" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x50a1cf45, "query_amp_caps" },
	{ 0xc613acb6, "snd_hda_gen_mic_autoswitch" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0xdab89ecd, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v14F11F86r*a01*");
MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "B0969136DCE62DAE9BE65EF");
