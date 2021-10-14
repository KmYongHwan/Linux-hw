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
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xbff16915, "__devm_regmap_init_mmio_clk" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Csirf,prima2-audio-codec");
MODULE_ALIAS("of:N*T*Csirf,prima2-audio-codecC*");
MODULE_ALIAS("of:N*T*Csirf,atlas6-audio-codec");
MODULE_ALIAS("of:N*T*Csirf,atlas6-audio-codecC*");

MODULE_INFO(srcversion, "292F36DBF8825CACE5F35B9");
