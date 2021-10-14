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
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xf44a972b, "driver_register" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa071f2c6, "single_release" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc4142837, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x785dd9f2, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xa5eb12da, "dev_pm_domain_detach" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x84fb1644, "dev_pm_domain_attach" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3BC506C92D43DE4C627A35A");
