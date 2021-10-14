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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x66a079cc, "rt_mutex_lock" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x969d057e, "__i2c_smbus_xfer" },
	{ 0x97c8e113, "rt_mutex_trylock" },
	{ 0xdbd12ec4, "rt_mutex_unlock" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0xcd729188, "i2c_add_numbered_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x258b7abb, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcc80fb9, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
