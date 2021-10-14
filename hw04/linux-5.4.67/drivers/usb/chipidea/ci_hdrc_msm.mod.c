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
	{ 0x890b3d61, "_dev_err" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x80eb756f, "pm_runtime_no_callbacks" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbefd5f3c, "ci_hdrc_add_device" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbffe26ff, "devm_reset_controller_register" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x2652c06a, "__devm_reset_control_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc645475b, "phy_exit" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0x6ac36405, "phy_init" },
	{ 0xc9f17563, "hw_phymode_configure" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3528e9c2, "ci_hdrc_remove_device" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ci_hdrc");

MODULE_ALIAS("of:N*T*Cqcom,ci-hdrc");
MODULE_ALIAS("of:N*T*Cqcom,ci-hdrcC*");

MODULE_INFO(srcversion, "6A1B7E08251D1670176A563");
