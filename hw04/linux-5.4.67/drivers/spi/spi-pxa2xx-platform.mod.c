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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xfc563763, "spi_register_controller" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdd8a71cf, "__spi_alloc_controller" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x177803b5, "dma_request_slave_channel" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x34b989b3, "spi_unregister_controller" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7af33ac1, "spi_finalize_current_transfer" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x41ebe6dd, "spi_controller_suspend" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3054c596, "spi_controller_resume" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33C0:*");
MODULE_ALIAS("acpi*:INT33C1:*");
MODULE_ALIAS("acpi*:INT3430:*");
MODULE_ALIAS("acpi*:INT3431:*");
MODULE_ALIAS("acpi*:80860F0E:*");
MODULE_ALIAS("acpi*:8086228E:*");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-ssp");
MODULE_ALIAS("of:N*T*Cmarvell,mmp2-sspC*");

MODULE_INFO(srcversion, "0199F276188D9C7F95605C1");
