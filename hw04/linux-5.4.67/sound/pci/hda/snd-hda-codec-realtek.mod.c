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
	{ 0x79ba865, "snd_hdac_regmap_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x98edb7b5, "snd_hda_gen_fixup_micmute_led" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0xb104ea0, "snd_hda_codec_get_pin_target" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x5aeeb061, "snd_hda_add_verbs" },
	{ 0x9b92f258, "snd_hda_pick_fixup" },
	{ 0x52333687, "snd_pci_quirk_lookup" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xc7ee042f, "snd_hda_override_conn_list" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x4ee9a127, "snd_hda_codec_set_pincfg" },
	{ 0xdcc148ed, "snd_hda_mixer_amp_switch_put" },
	{ 0x898bd703, "snd_hda_gen_update_outputs" },
	{ 0x2d3d809, "snd_hda_jack_detect_enable_callback" },
	{ 0x5ada0011, "input_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0xa9faf0cd, "snd_hda_codec_set_name" },
	{ 0x40536a32, "snd_hdac_regmap_write_raw" },
	{ 0x1ee003fb, "_snd_hda_set_pin_ctl" },
	{ 0xae0a1f6a, "snd_hda_gen_hp_automute" },
	{ 0x16b9204a, "snd_hda_gen_check_power_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaf4e5e70, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x4822e197, "snd_hda_mixer_amp_switch_get" },
	{ 0xcf564c5c, "snd_hda_gen_add_micmute_led" },
	{ 0xf80a618f, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8e161a05, "snd_hda_gen_path_power_filter" },
	{ 0x31ab1443, "is_jack_detectable" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0xd2f40371, "snd_hda_jack_set_gating_jack" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0x9eb0e5fa, "snd_hda_find_mixer_ctl" },
	{ 0xe98a08f6, "snd_hda_sequence_write" },
	{ 0xeaf96bbb, "snd_hda_get_bool_hint" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe22fe759, "snd_hdac_override_parm" },
	{ 0x529c79d1, "snd_hda_pick_pin_fixup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x594c600, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x22f3998c, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8158b76f, "snd_hda_jack_add_kctl" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x5c382191, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0xf16a62d1, "snd_hda_apply_pincfgs" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x50a1cf45, "query_amp_caps" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
	{ 0x6f2eee5a, "snd_hdac_power_up_pm" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8ccf394e, "snd_hda_apply_verbs" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x90e60e6b, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0287r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "902DDE917B6ED421182744D");
