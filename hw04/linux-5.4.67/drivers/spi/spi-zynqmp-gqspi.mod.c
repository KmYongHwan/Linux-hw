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
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x41ebe6dd, "spi_controller_suspend" },
	{ 0x3054c596, "spi_controller_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0C*");

MODULE_INFO(srcversion, "35897034B343FE9C4A70DAA");
