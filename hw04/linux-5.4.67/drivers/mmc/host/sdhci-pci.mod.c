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
	{ 0xb39bbb9a, "cqhci_resume" },
	{ 0x5f135b24, "sdhci_enable_v4_mode" },
	{ 0x9d65f345, "sdhci_remove_host" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa3a3cd9e, "sdhci_set_power" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x5270ce36, "sdhci_cqe_enable" },
	{ 0x539533d8, "mmc_send_tuning" },
	{ 0x82a33726, "sdhci_alloc_host" },
	{ 0xf6781eb6, "sdhci_resume_host" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x83c3ddb5, "sdhci_cleanup_host" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x621bf991, "acpi_device_fix_up_power" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x8284c5d9, "sdhci_add_host" },
	{ 0x46bf4baf, "sdhci_free_host" },
	{ 0x9cf4dbee, "cqhci_deactivate" },
	{ 0x939fcd1f, "devm_gpio_free" },
	{ 0x8302e3cb, "sdhci_execute_tuning" },
	{ 0xc3da1518, "sdhci_start_tuning" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x378366a8, "sdhci_set_clock" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x74e70968, "sdhci_abort_tuning" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xcc9410be, "sdhci_reset_tuning" },
	{ 0xb27a6c85, "__sdhci_add_host" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb2c1e9de, "sdhci_cqe_disable" },
	{ 0xe37cde61, "sdhci_dumpregs" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xeb23cf4a, "sdhci_setup_host" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0xe1b9f9f1, "sdhci_runtime_suspend_host" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x91020f35, "sdhci_runtime_resume_host" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x837a48c7, "device_wakeup_disable" },
	{ 0x54a05f7, "sdhci_suspend_host" },
	{ 0x43551e0, "mmc_gpio_get_cd" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcb15eee9, "sdhci_pci_get_data" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa57c63a6, "mmc_gpio_set_cd_wake" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x1a6d4eae, "sdhci_calc_clk" },
	{ 0x32509f95, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x65b86c47, "cqhci_irq" },
	{ 0x882e7a30, "sdhci_set_uhs_signaling" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x410455ad, "cqhci_init" },
	{ 0x78481c6, "mmc_gpiod_request_cd" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a6704bc, "devm_gpio_request" },
	{ 0x2a941529, "sdhci_start_signal_voltage_switch" },
	{ 0xd12c33a0, "sdhci_cqe_irq" },
	{ 0xde6e9532, "sdhci_send_tuning" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x13b12d62, "sdhci_set_bus_width" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xb463ea49, "sdhci_end_tuning" },
};

MODULE_INFO(depends, "cqhci,sdhci");

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DF8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000C202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017A0d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "EBAD456531BF3E9A4230EF6");
