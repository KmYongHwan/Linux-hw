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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ds1621");
MODULE_ALIAS("i2c:ds1625");
MODULE_ALIAS("i2c:ds1631");
MODULE_ALIAS("i2c:ds1721");
MODULE_ALIAS("i2c:ds1731");

MODULE_INFO(srcversion, "E0CF34A64CB20E11B65BC98");
