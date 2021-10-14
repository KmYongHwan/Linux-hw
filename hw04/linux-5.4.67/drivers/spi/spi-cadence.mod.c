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
	{ 0xfc563763, "spi_register_controller" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x7ea19302, "put_device" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7af33ac1, "spi_finalize_current_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x41ebe6dd, "spi_controller_suspend" },
	{ 0x3054c596, "spi_controller_resume" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-spi-r1p6C*");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6");
MODULE_ALIAS("of:N*T*Ccdns,spi-r1p6C*");

MODULE_INFO(srcversion, "870F7D852A3AEB3A5B3D17A");
