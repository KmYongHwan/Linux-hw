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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaaee2a79, "snd_hda_codec_load_dsp_prepare" },
	{ 0x3efbc353, "snd_hda_multi_out_dig_prepare" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0x6e3aefdf, "snd_hda_codec_amp_stereo" },
	{ 0xdcd2c14d, "snd_hda_codec_load_dsp_trigger" },
	{ 0xd8e06923, "__snd_hda_add_vmaster" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x52333687, "snd_pci_quirk_lookup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0xf6d2957d, "snd_hda_jack_add_kctls" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcc148ed, "snd_hda_mixer_amp_switch_put" },
	{ 0x2d3d809, "snd_hda_jack_detect_enable_callback" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0xa9faf0cd, "snd_hda_codec_set_name" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x1ee003fb, "_snd_hda_set_pin_ctl" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4822e197, "snd_hda_mixer_amp_switch_get" },
	{ 0xf80a618f, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6984bf12, "snd_hda_create_spdif_in_ctls" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x53dcce9e, "snd_hda_override_amp_caps" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xa87613e2, "snd_hda_jack_detect_state" },
	{ 0xc7ede4c1, "snd_hda_jack_tbl_get" },
	{ 0xe98a08f6, "snd_hda_sequence_write" },
	{ 0xcef89e9e, "snd_hda_create_spdif_share_sw" },
	{ 0x1b5e89a5, "snd_hda_ctl_add" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xce072991, "snd_hda_multi_out_dig_close" },
	{ 0x8635a578, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xc22bd61e, "snd_hda_codec_update_widgets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeb8ba148, "snd_hda_multi_out_dig_cleanup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x206a9a17, "__snd_hda_codec_cleanup_stream" },
	{ 0xe12e1786, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x69d901e4, "snd_hda_multi_out_dig_open" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf16a62d1, "snd_hda_apply_pincfgs" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0x6639e3dd, "snd_hda_mixer_amp_switch_info" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0x751cf73c, "snd_hdac_power_down" },
	{ 0xa2ee1a8e, "snd_hda_codec_setup_stream" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xedebfa64, "snd_hda_codec_load_dsp_cleanup" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x5427c201, "snd_hda_jack_report_sync" },
	{ 0xc6633f76, "snd_hda_set_vmaster_tlv" },
	{ 0xede283d, "release_firmware" },
	{ 0x6f2eee5a, "snd_hdac_power_up_pm" },
	{ 0xdab89ecd, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5d82696b, "snd_hda_codec_amp_update" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "BE1F69064AAF076CC373389");
