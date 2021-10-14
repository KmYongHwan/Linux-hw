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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnational,lm63");
MODULE_ALIAS("of:N*T*Cnational,lm63C*");
MODULE_ALIAS("of:N*T*Cnational,lm64");
MODULE_ALIAS("of:N*T*Cnational,lm64C*");
MODULE_ALIAS("of:N*T*Cnational,lm96163");
MODULE_ALIAS("of:N*T*Cnational,lm96163C*");
MODULE_ALIAS("i2c:lm63");
MODULE_ALIAS("i2c:lm64");
MODULE_ALIAS("i2c:lm96163");

MODULE_INFO(srcversion, "27ED1501D315222B2593705");
