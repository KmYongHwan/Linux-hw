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
	{ 0xb104ea0, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0x3efbc353, "snd_hda_multi_out_dig_prepare" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0xe8eb0cf6, "snd_hda_get_default_vref" },
	{ 0xd43488b7, "snd_hda_enum_helper_info" },
	{ 0x237ee955, "snd_hda_apply_fixup" },
	{ 0x65ddcf16, "snd_hda_sync_vmaster_hook" },
	{ 0x6e3aefdf, "snd_hda_codec_amp_stereo" },
	{ 0xd8e06923, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0xf6d2957d, "snd_hda_jack_add_kctls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xc351056, "snd_hda_check_amp_list_power" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0xdcc148ed, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d3d809, "snd_hda_jack_detect_enable_callback" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9f4f452f, "snd_hda_check_amp_caps" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0x40536a32, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1ee003fb, "_snd_hda_set_pin_ctl" },
	{ 0x5e128ea, "snd_hda_attach_beep_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaf4e5e70, "snd_hda_codec_set_pin_target" },
	{ 0x4822e197, "snd_hda_mixer_amp_switch_get" },
	{ 0x10f7dda2, "snd_hda_codec_set_power_to_all" },
	{ 0xd8d450cf, "snd_hda_get_conn_list" },
	{ 0x91591ee3, "snd_ctl_boolean_stereo_info" },
	{ 0x3ee9a326, "snd_hda_multi_out_analog_prepare" },
	{ 0x402ed04, "snd_hda_multi_out_analog_cleanup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x31ab1443, "is_jack_detectable" },
	{ 0x6984bf12, "snd_hda_create_spdif_in_ctls" },
	{ 0xf479133b, "snd_hda_codec_amp_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0xe3a53f4c, "sort" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7d93260b, "snd_hda_get_int_hint" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0xc7ede4c1, "snd_hda_jack_tbl_get" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x9eb0e5fa, "snd_hda_find_mixer_ctl" },
	{ 0xcef89e9e, "snd_hda_create_spdif_share_sw" },
	{ 0xeaf96bbb, "snd_hda_get_bool_hint" },
	{ 0x57650f23, "snd_hda_multi_out_analog_open" },
	{ 0x67c217c4, "snd_hda_get_conn_index" },
	{ 0xce072991, "snd_hda_multi_out_dig_close" },
	{ 0x8635a578, "snd_hda_create_dig_out_ctls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x8862c84b, "snd_hda_correct_pin_ctl" },
	{ 0xd8849a82, "snd_hda_add_imux_item" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x902fdd07, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb8ba148, "snd_hda_multi_out_dig_cleanup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x60d4a8e, "snd_ctl_sync_vmaster" },
	{ 0x206a9a17, "__snd_hda_codec_cleanup_stream" },
	{ 0xe12e1786, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dbf9901, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0x69d901e4, "snd_hda_multi_out_dig_open" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x96848186, "scnprintf" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0xa2ee1a8e, "snd_hda_codec_setup_stream" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x50a1cf45, "query_amp_caps" },
	{ 0xec29f6db, "hda_get_autocfg_input_label" },
	{ 0xc6633f76, "snd_hda_set_vmaster_tlv" },
	{ 0x15a12ff5, "snd_hda_codec_amp_init_stereo" },
	{ 0x5a4119f7, "snd_hda_get_connections" },
	{ 0xdab89ecd, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5d82696b, "snd_hda_codec_amp_update" },
	{ 0x8ccf394e, "snd_hda_apply_verbs" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "998D2C7670F7A36DBA7A85A");
