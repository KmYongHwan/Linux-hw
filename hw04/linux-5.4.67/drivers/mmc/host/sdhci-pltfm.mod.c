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
	{ 0x9d65f345, "sdhci_remove_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x82a33726, "sdhci_alloc_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf6781eb6, "sdhci_resume_host" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8284c5d9, "sdhci_add_host" },
	{ 0x46bf4baf, "sdhci_free_host" },
	{ 0x378366a8, "sdhci_set_clock" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x54a05f7, "sdhci_suspend_host" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x32509f95, "sdhci_reset" },
	{ 0x882e7a30, "sdhci_set_uhs_signaling" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x13b12d62, "sdhci_set_bus_width" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "sdhci");


MODULE_INFO(srcversion, "864931201263242865B1834");
