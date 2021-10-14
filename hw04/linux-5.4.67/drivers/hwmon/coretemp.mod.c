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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "6D76D1E905A75D8EB65BD89");
