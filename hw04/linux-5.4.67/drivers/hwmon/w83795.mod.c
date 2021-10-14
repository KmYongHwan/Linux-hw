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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd1afe18b, "sysfs_chmod_file" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:w83795g");
MODULE_ALIAS("i2c:w83795adg");

MODULE_INFO(srcversion, "2388E26FB2056254AD16263");
