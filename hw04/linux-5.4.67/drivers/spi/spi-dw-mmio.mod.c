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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3e733cdf, "dw_spi_add_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x310d223f, "dw_spi_remove_host" },
	{ 0x962fc978, "dw_spi_set_cs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("acpi*:HISI0173:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");

MODULE_INFO(srcversion, "1B98E8BF9D7630F15646E92");
