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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cad,ad7414");
MODULE_ALIAS("of:N*T*Cad,ad7414C*");
MODULE_ALIAS("i2c:ad7414");

MODULE_INFO(srcversion, "6B5259B164602EB757BDF38");
