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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x9d65f345, "sdhci_remove_host" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x83c3ddb5, "sdhci_cleanup_host" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x46bf4baf, "sdhci_free_host" },
	{ 0xb27a6c85, "__sdhci_add_host" },
	{ 0xeb23cf4a, "sdhci_setup_host" },
	{ 0x78481c6, "mmc_gpiod_request_cd" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0x82a33726, "sdhci_alloc_host" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0x621bf991, "acpi_device_fix_up_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2a941529, "sdhci_start_signal_voltage_switch" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x8302e3cb, "sdhci_execute_tuning" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x43551e0, "mmc_gpio_get_cd" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x62f087eb, "__sdhci_read_caps" },
	{ 0x32509f95, "sdhci_reset" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb5c477fe, "sdhci_set_ios" },
	{ 0x12a38747, "usleep_range" },
	{ 0x54a05f7, "sdhci_suspend_host" },
	{ 0xf6781eb6, "sdhci_resume_host" },
	{ 0xe1b9f9f1, "sdhci_runtime_suspend_host" },
	{ 0x91020f35, "sdhci_runtime_resume_host" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci");

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");

MODULE_INFO(srcversion, "2D1B7285728235836AFA5E2");
