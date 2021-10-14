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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xf5a9f5b4, "snd_soc_get_volsw_sx" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbec76bf9, "snd_soc_dapm_get_enum_double" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9987a748, "snd_soc_info_volsw_sx" },
	{ 0xd186fe3, "snd_soc_info_enum_double" },
	{ 0xbff16915, "__devm_regmap_init_mmio_clk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x92d63162, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8e7db276, "snd_soc_put_enum_double" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbe34a60d, "snd_soc_component_read32" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9ee4749c, "snd_soc_put_volsw_sx" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x73ed1b16, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codec");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codecC*");

MODULE_INFO(srcversion, "89A3861A00AD0319890150B");
