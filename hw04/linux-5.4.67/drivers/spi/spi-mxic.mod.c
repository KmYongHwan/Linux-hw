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
	{ 0x7af33ac1, "spi_finalize_current_transfer" },
	{ 0xb7329c06, "clk_set_phase" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7ea19302, "put_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfc563763, "spi_register_controller" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmxicy,mx25f0a-spi");
MODULE_ALIAS("of:N*T*Cmxicy,mx25f0a-spiC*");

MODULE_INFO(srcversion, "210B458D2EB4E7DADF9925B");
