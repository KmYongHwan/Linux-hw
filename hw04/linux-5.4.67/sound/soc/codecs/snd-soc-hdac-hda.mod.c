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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x1976f735, "snd_hda_codec_prepare" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xfdfb8c47, "snd_hdac_ext_bus_get_link" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xbe562c0f, "snd_hda_codec_device_new" },
	{ 0x276ebf, "snd_hdac_ext_bus_link_put" },
	{ 0xaf2a0d2f, "snd_hda_codec_parse_pcms" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa9faf0cd, "snd_hda_codec_set_name" },
	{ 0xf9e6dd2f, "snd_hdac_ext_bus_link_get" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebf23cf, "snd_hda_codec_pcm_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe0b82622, "snd_hda_codec_cleanup" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xec3222db, "snd_hda_codec_build_controls" },
	{ 0x23f21628, "snd_hdac_regmap_init" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-ext-core,snd-hda-core,snd-soc-core");


MODULE_INFO(srcversion, "9AC4E62671FEA3708D0FE16");
