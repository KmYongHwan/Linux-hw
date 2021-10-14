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
	{ 0x5c8ad287, "idma32_dma_probe" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6ebaa08a, "dw_dma_probe" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x8b097b63, "devm_clk_get_optional" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x124ff31e, "dw_dma_remove" },
	{ 0x176ac7d3, "do_dw_dma_enable" },
	{ 0xc7577e29, "acpi_dma_controller_register" },
	{ 0x9d81d547, "acpi_dma_controller_free" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7f2dd6c6, "devm_kmemdup" },
	{ 0x881e81dd, "acpi_dma_simple_xlate" },
	{ 0xc1af9a7d, "dw_dma_filter" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9fb60dae, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x6cccbfd1, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("acpi*:INTL9C60:*");
MODULE_ALIAS("acpi*:80862286:*");
MODULE_ALIAS("acpi*:808622C0:*");
MODULE_ALIAS("acpi*:80864BB4:*");
MODULE_ALIAS("acpi*:80864BB5:*");
MODULE_ALIAS("acpi*:80864BB6:*");

MODULE_INFO(srcversion, "53594F06DF3BBF59152E294");
