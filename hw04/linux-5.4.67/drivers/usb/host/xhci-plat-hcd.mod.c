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
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9c8cf3a7, "usb_add_hcd" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc2a01d7e, "usb_remove_hcd" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe2f10226, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x92418c3f, "usb_put_hcd" },
	{ 0x4ae04d9a, "xhci_init_driver" },
	{ 0x2c373ead, "usb_hcd_is_primary_hcd" },
	{ 0x73035968, "xhci_run" },
	{ 0xd8adf9e7, "xhci_resume" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x3f243ef7, "devm_usb_get_phy_by_phandle" },
	{ 0xe73d63fc, "xhci_gen_setup" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x1ba27a87, "xhci_suspend" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xb7588a85, "usb_hcd_platform_shutdown" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0D10:*");

MODULE_INFO(srcversion, "C570DE52B7097266C5410A9");
