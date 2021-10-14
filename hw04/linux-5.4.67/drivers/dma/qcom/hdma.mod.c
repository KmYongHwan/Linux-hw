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
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x70691c99, "single_open" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xec4b7ee9, "dma_async_tx_descriptor_init" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x8a56d877, "dma_async_device_register" },
	{ 0xf48c92ea, "dmaengine_unmap_put" },
	{ 0x3a0d0767, "device_get_match_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xea1b0fd8, "dma_run_dependencies" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x75bcae52, "platform_msi_domain_alloc_irqs" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x77738a68, "dma_async_device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc00b8191, "platform_msi_domain_free_irqs" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2C*");
MODULE_ALIAS("acpi*:QCOM8061:*");
MODULE_ALIAS("acpi*:QCOM8062:*");
MODULE_ALIAS("acpi*:QCOM8063:*");

MODULE_INFO(srcversion, "7D68B3D7F139D0494F78C00");
