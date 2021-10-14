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
	{ 0xe7750f8, "kobject_put" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x35db28d0, "bus_register" },
	{ 0x28b17458, "iommu_group_remove_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf44a972b, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0x65195d3c, "iommu_group_add_device" },
	{ 0xbe32b13b, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0xe6fe7af4, "class_compat_create_link" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xe6ab4629, "class_compat_remove_link" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0xb6f7270a, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x37480d59, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x297bafd4, "sysfs_remove_file_ns" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x963cf8c8, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0x8c4b26, "sysfs_remove_files" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3a720f3, "sysfs_create_groups" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x58f308eb, "sysfs_remove_groups" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0xb8c50e0e, "device_remove_file_self" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B73BD9B88CED36676EE57");
