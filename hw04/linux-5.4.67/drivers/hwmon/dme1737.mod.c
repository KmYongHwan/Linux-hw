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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd1afe18b, "sysfs_chmod_file" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x297bafd4, "sysfs_remove_file_ns" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:dme1737");
MODULE_ALIAS("i2c:sch5027");

MODULE_INFO(srcversion, "D6B314817DC51094AF5131D");
