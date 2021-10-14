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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc10040e, "device_add_groups" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0xd757e154, "platform_get_irq_optional" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1f58e882, "platform_bus_type" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0xfe50ef42, "bus_find_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x327caad5, "ipmi_platform_add" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0x1953a300, "ipmi_add_smi" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7ea19302, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xbfa087b0, "device_remove_groups" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");

MODULE_INFO(srcversion, "A8DAC081BD11E3D1AD91825");
