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
	{ 0xfc840a1d, "ulpi_unregister_driver" },
	{ 0x4384268f, "__ulpi_register_driver" },
	{ 0x1ef296f6, "extcon_register_notifier" },
	{ 0xfff30144, "extcon_get_state" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xafc3f886, "regulator_set_load" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x898871fa, "__devm_of_phy_provider_register" },
	{ 0x7440a83f, "of_phy_simple_xlate" },
	{ 0xe80bbab3, "extcon_get_edev_by_phandle" },
	{ 0xcc8fefee, "devm_phy_create" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x8fc05b75, "extcon_unregister_notifier" },
	{ 0xec79ead4, "ulpi_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phyC*");

MODULE_INFO(srcversion, "76A2088D3C1B32B420C4F3E");
