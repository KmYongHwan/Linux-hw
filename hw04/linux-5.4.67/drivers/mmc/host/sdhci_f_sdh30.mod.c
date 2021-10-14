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
	{ 0x882e7a30, "sdhci_set_uhs_signaling" },
	{ 0x13b12d62, "sdhci_set_bus_width" },
	{ 0x378366a8, "sdhci_set_clock" },
	{ 0x82eb7a8d, "sdhci_pltfm_pmops" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8284c5d9, "sdhci_add_host" },
	{ 0xf9a482f9, "msleep" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xa329a74, "mmc_of_parse" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x82a33726, "sdhci_alloc_host" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x32509f95, "sdhci_reset" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x46bf4baf, "sdhci_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9d65f345, "sdhci_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("acpi*:SCX0002:*");

MODULE_INFO(srcversion, "6A6322475BB3B05026C553E");
