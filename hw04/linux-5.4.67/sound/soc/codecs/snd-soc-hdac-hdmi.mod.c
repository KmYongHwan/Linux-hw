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
	{ 0x5bba04ce, "snd_soc_dapm_kcontrol_widget" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0x75eec9c3, "hdac_get_device_id" },
	{ 0xd87c7ca9, "device_link_add" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9f7a6835, "snd_hdac_codec_read" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xfdfb8c47, "snd_hdac_ext_bus_get_link" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xd5a73af1, "snd_soc_add_card_controls" },
	{ 0x276ebf, "snd_hdac_ext_bus_link_put" },
	{ 0xaaac6841, "snd_soc_dapm_info_pin_switch" },
	{ 0xd2c64ad, "snd_soc_dapm_put_pin_switch" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x8a7bcc47, "snd_hdac_get_sub_nodes" },
	{ 0x1774b2b1, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa9806910, "snd_hda_ext_driver_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x538a4028, "snd_pcm_hw_constraint_eld" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xed6c4977, "snd_hdac_check_power_state" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xf478be42, "snd_pcm_hw_constraint_mask64" },
	{ 0x92f39fcf, "snd_hda_ext_driver_register" },
	{ 0xe6885839, "snd_hdac_display_power" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6efa049f, "snd_hdac_acomp_get_eld" },
	{ 0xa583793a, "dapm_kcontrol_get_value" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5f4b08c, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9e6dd2f, "snd_hdac_ext_bus_link_get" },
	{ 0xe0c0b4c9, "snd_hdac_register_chmap_ops" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x33f7ac01, "snd_hdac_read_parm_uncached" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0xe0884af9, "snd_hdac_acomp_register_notifier" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf05a1858, "snd_soc_dapm_get_pin_switch" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeda35154, "_snd_hdac_read_parm" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x297b513c, "snd_soc_dapm_new_widgets" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ab723d, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7f6575a4, "snd_hdac_refresh_widgets" },
	{ 0xc201f376, "snd_hdac_query_supported_pcm" },
	{ 0x60d1a995, "snd_soc_dapm_disable_pin" },
	{ 0xeb1ad602, "snd_soc_dapm_enable_pin" },
	{ 0x8fcfe29, "snd_hdac_codec_write" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xc6913bd3, "snd_hdac_channel_allocation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x635e47bb, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75a1fcb9, "snd_hdac_add_chmap_ctls" },
	{ 0x23e9d865, "snd_hdac_sync_power_state" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x389b03ab, "snd_hdac_get_connections" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm");

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Fr00100000a02*");

MODULE_INFO(srcversion, "754B1FB7B26A2630D8B73E8");
